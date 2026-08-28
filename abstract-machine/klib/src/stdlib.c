#include <am.h>
#include <klib.h>
#include <klib-macros.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
static unsigned long int next = 1;

int rand(void) {
  // RAND_MAX assumed to be 32767
  next = next * 1103515245 + 12345;
  return (unsigned int)(next/65536) % 32768;
}

void srand(unsigned int seed) {
  next = seed;
}

int abs(int x) {
  return (x < 0 ? -x : x);
}

int atoi(const char* nptr) {
  int x = 0;
  while (*nptr == ' ') { nptr ++; }
  while (*nptr >= '0' && *nptr <= '9') {
    x = x * 10 + *nptr - '0';
    nptr ++;
  }
  return x;
}

/*
int32_t* arr = (int32_t*)malloc(sizeof(int32_t) * _AMOUNT);
arr: start pointer, following "size (bytes)" of space

-> get current heap addr
-> if first alloc, addr = heap.start
-> alloc space [addr, addr + size], return (outsegment should trigger segmentation fault)  ***
-> new addr = addr + size

key point:   
  segment alloc   addr

In malloc(), maintain a variable addr that stores the last allocated memory location. Each time malloc() is called, 
  return the space [addr, addr + size). The initial value of addr should be set to heap.start, 
  indicating that allocation starts from the heap area. 
You can also refer to the relevant code in microbench. 
  Note that malloc() has certain requirements for the returned address, please RTFM for specific details.

The  malloc() function allocates size bytes and returns a pointer to the allocated memory.  The memory is not initialized.  If size is 0, then malloc() returns
       either NULL, or a unique pointer value that can later be successfully passed to free().

*/
#if !(defined(__ISA_NATIVE__) && defined(__NATIVE_USE_KLIB__))    // 保证无论如何native都不是用klib的 malloc 和 free
static Area heap_avail = {};    // available heap range: [start, end)
void *malloc(size_t size) {
  // On native, malloc() will be called during initializaion of C runtime.
  // Therefore do not call panic() here, else it will yield a dead recursion:
  //   panic() -> putchar() -> (glibc) -> malloc() -> panic()
  if(heap_avail.start == NULL){
    heap_avail.start = heap_avail.end = heap.start;
  }
  // normal distribution
  if(size == 0){
    return NULL;
  }
  else{
    char* temp = (char*)heap_avail.end;     
    void* ret = temp;
    temp += size;                     // expand
    heap_avail.end = temp;
    return ret;
  }
}
#endif

void free(void *ptr) {
}

#endif
