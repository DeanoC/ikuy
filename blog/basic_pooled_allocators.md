# Basic Pooled Allocators

## Why?
At higher levels of coding, you probably have powerful memory management tools, garbage-collector or compiler allocation lifetime with internal allocation and free algorithms that are designed to handle general code allocation patterns well.

*BUT* But with tighter constraints its started being worthwhile/required to used more specialised allocators that whilst not as general have various useful characastics.
There are lots of them, here I'm going to discuss two useful allocators, that are used a lot in Ikuy. They are both pooled allocators, that is they allocated fixed sized blocks from a preallocated pool.
1. Freelist allocator
2. Bitmap allocator

## Freelist allocator
A free list allocator has very low overhead (How much extra memory is needed for tracking), fast (linear time) and low multi-thread costs. If you need to allocate a fixed sized block that can have intrusive access (the allocator can read/write to the memory its tracking), a freelist allocator is probably your first choice.

### Basics
The basic principle of a free list allocator, is that when a block from the pool is not in use, we can alias most of the tracking data in the free block. Every free block is a node in a linked list (single direction), when you allocate a block, the head of the list is passed back and the head anchor adjusted to the next block. When you free a block, you write a link in the freed block to the head anchor and then set the freed block as the head anchor.

**__An Example as a C structure__**
```C
struct {
  union {
    uint8_t data[BLOCK_SIZE];
    struct {
      FreeListAllocator* next;
    } Freed;
  } FreeListBlock;
  
  FreeListBlock[NUM_BLOCKS];
  
  FreeListBlock* headAnchor;
} FreeListAllocator;
```
When allocated, a block's data is free to use. When freed, it becomes a linked list node. The overhead over the memory allocator is just one pointer for the headAnchor. In some cases (64 bit pointers etc.) is used to used indice off the base block rather than pointers, as these allow smaller block sizes down the the index size (whereas pointer require a minimum block size of a pointer (8 bytes for 64 bit architectures). An advantage of pointers is that you can dynamically size the allocator by having multiple block pools, chained together in one free list. This obviously complicates matters so I won't go into that here.

At construction time, the pool (of all blocks) are allocated and each block linked to its next block, the first block in the list assigned to the head and its ready to go.
At destruction time, the pool is freed, releasing/invalidating all blocks.

### Multi-threading
Atomic compare and exchange of the block index/pointer size is all thats needed. As only one block (and the head anchor) are touched, as single atomic operation is all thats needed.

#### Atomic Alloc
1. copy **head anchor** to _tmp1_
2. copy **head node**'s _next_ to _tmp2_
3. atomic if **head anchor** == _tmp1_, exchange **head anchor** with _tmp2_, else goto 1

#### Atomic Free
1. copy **head anchor** to _tmp1_
2. copy _tmp1_ to **freed**'s _next_
3. atomic if **head anchor** == _tmp1_, exchange head anchor with **freed**, else goto 1

