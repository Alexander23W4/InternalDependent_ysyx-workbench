#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>


#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

/*
The strlen() function calculates the length of the string s, excluding the terminating null byte (aq\0aq).
The strlen() function returns the number of bytes in the string s.
*/
size_t strlen(const char *s) {
  const char* temp = s;
  size_t count = 0;
  for (; *temp != '\0'; temp++)  // check *temp
  {
    count++;
  }
  return count;
}

/*
 The  strcpy() function copies the string pointed to by src, including the terminating null byte ('\0'), to the buffer pointed to by dest.  
*/
char *strcpy(char *dst, const char *src) {
  char* temp = dst;
  const char* _src = src;
  int i = 0;
  for (; *_src != '\0'; _src++, temp++)
  {
    *temp = *_src;
    i++;
  }
  *temp = '\0';
  return dst;
}

/*
  The strncpy() function is similar, except that at most n bytes of src are copied.  
  Warning: If there is no null byte among the first n bytes of src, the string placed in dest will not be null-terminated.

*/
char *strncpy(char *dst, const char *src, size_t n) {
  size_t i = 0;
  for ( ; i < n && src[i] != '\0'; i++)
  {
    dst[i] = src[i];
  }
  for ( ; i < n; i++)
  {
    dst[i] = '\0';
  }
  return dst;
}

/*
  The  strcat()  function appends the src string to the dest string, 
  overwriting the terminating null byte ('\0') at the end of dest, and then adds a terminating null byte.  
  The strings may not overlap, and the dest string must have enough space for the result.  
  If dest is not large enough, program  behavior is unpredictable; 
  buffer overruns are a favorite avenue for attacking secure programs.
*/
char *strcat(char *dst, const char *src) {
  char* temp = dst + strlen(dst);
  const char* _src = src;
  while(*_src != '\0'){
    *temp = *_src;
    temp++;
    _src++;
  }
  *temp = '\0';
  return dst;
}

/*
return :
  • 0, if the s1 and s2 are equal;
  • a negative value if s1 is less than s2;
  • a positive value if s1 is greater than s2.
*/
int strcmp(const char *s1, const char *s2) {

  while(*s1 != '\0' && *s2 != '\0'){
    if(*s1 > *s2) return 1;
    else if (*s1 < *s2) return -1;
    s1++;
    s2++;
  }
  if(*s1 == '\0' && *s2 == '\0') return 0;
  else if(*s1 == '\0') return -1;
  else return 1;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  size_t i;
  for (i = 0; i < n && *s1 != '\0' && *s2 != '\0'; i++)
  {
    if(s1[i] > s2[i]) return 1;
    if(s1[i] < s2[i]) return -1;
  }
  if(i == n || (s1[i] == '\0' && s2[i] == '\0')) return 0;
  else if(s1[i] == '\0') return -1;
  else return 1;
}

/*
  The memset() function fills the first n bytes of the memory area pointed to by s with the constant byte c.
*/
void *memset(void *s, int c, size_t n) {
  unsigned char* temp = (unsigned char*) s;
  for (size_t i = 0; i < n; i++)
  {
    temp[i] = (unsigned char)c;
  }
  return s;
}

/*
  The  memmove() function copies n bytes from memory area src to memory area dest.  
  The memory areas may overlap: copying takes place as though the bytes in src are first copied into a temporary array that does not overlap src or dest, 
  and the bytes are then copied from the temporary array to dest.
*/
void *memmove(void *dst, const void *src, size_t n) {
  if(n == 0) return dst;
  unsigned char* _dst = (unsigned char*) dst;
  const unsigned char* _src = (const unsigned char*) src;
  if(_dst == _src) return _dst;
  else if(_dst > _src){
    // for (size_t i = n - 1; i >= 0; i--)    // for unsigned number, judge it >= 0 is always true
    // {
    //   _dst[i] = _src[i];
    // }
    for (size_t i = 1; i <= n; i++)
    {
        _dst[n-i] = _src[n-i];
    }
    
  }
  else{
    for (size_t i = 0; i < n; i++)
    {
      _dst[i] = _src[i];
    }
  }
  return _dst;
}



void *memcpy(void *out, const void *in, size_t n) {
  if(n == 0) return out;
  unsigned char* _out = (unsigned char*) out;
  const unsigned char* _in = (const unsigned char*) in;
  for (size_t i = 0; i < n; i++)
  {
    _out[i] = _in[i];
  }
  return _out;
}


/*
The memcmp() function compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2.

  The  memcmp() function returns an integer less than, equal to, or greater than zero if the first n bytes of s1 is found, respectively, 
  to be less than, to match, or be greater than the first n bytes of s2.

  For a nonzero return value, the sign is determined by the sign of the difference between the first pair of bytes (interpreted as unsigned char) 
  that differ in s1 and s2.

  If n is zero, the return value is zero.
*/
int memcmp(const void *s1, const void *s2, size_t n) {
  unsigned char* _s1 = (unsigned char*) s1;
  const unsigned char* _s2 = (const unsigned char*) s2;
  for (size_t i = 0; i < n; i++)
  {
    if(_s1[i] < _s2[i]) return -1;
    else if (_s1[i] > _s2[i]) return 1; 
  }
  return 0;
}

#endif
