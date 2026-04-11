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
  for (; _src != '\0'; src++, temp++)
  {
    *temp = *_src;
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
  while(_src != '\0'){
    *temp = *_src;
    temp++;
    src++;
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

  while(*s1 != '\0' && s2 != '\0'){
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
  int i;
  for (i = 0; i < n && *s1 != '\0' && *s2 != '\0'; i++)
  {
    if(s1[i] > s2[i]) return 1;
    if(s1[i] < s2[i]) return -1;
  }
  if(i == n || (s1[i] == '\0' && s2[i] == '\0')) return 0;
  else if(s1[i] == '\0') return -1;
  else return 1;
}

void *memset(void *s, int c, size_t n) {
  panic("Not implemented");
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
  panic("Not implemented");
}

#endif
