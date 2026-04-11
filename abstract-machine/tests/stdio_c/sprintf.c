#include <stdarg.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <limits.h>

// gcc -g -O0 -fno-builtin sprintf.c -o sprintf

typedef enum {
  TYPE_INT,
  TYPE_STRING,
} Type_Num;

typedef struct {
  char type;
  Type_Num num;
} Types;

Types types[] = {
  {'d', TYPE_INT },
  {'s', TYPE_STRING }
};


int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);  // fmt is the last param before variable params
  const char* temp = fmt;
  char* _out = out;

  bool flag = true;

  char buf[64];
  char* str = buf;

  while(*temp != '\0'){
    if(*temp == '%'){
      if(*(temp + 1) == '%') {   // %% case support
        *_out++ = '%';
        temp += 2;
        continue; 
      }
      flag = false;
      temp++;
    }
    if(flag){
      *_out++ = *temp++;   // normal case
    }
    else{
      // deal with type
        size_t type_amount = sizeof(types) / sizeof(types[0]);
        for (size_t i = 0; i < type_amount; i++)
        {
          if(*temp == types[i].type){
            str = buf;
            switch (types[i].num)
            {
            case TYPE_INT:
              str = number_to_str(str, va_arg(ap, int));
              break;
            case TYPE_STRING:
              str = va_arg(ap, const char*);
              break;
            default:
              break;
            }
            char* i_str = str;
            while(*i_str != '\0'){
              *_out++ = *i_str++;
            }
            break;
          }
        }
        temp++;
        flag = true;
      }
    }
  *_out = '\0';
  va_end(ap);
  return (int)(_out - out);
}

int main() {
    char buf[128];
    int len;

    printf("Starting sprintf testbench...\n");

    // Test Case 1: Pure string without format specifiers
    len = sprintf(buf, "Hello World");
    printf("[Test 1] Result: %s, Len: %d\n", buf, len);
    assert(strcmp(buf, "Hello World") == 0);
    assert(len == 11);

    // Test Case 2: Standard integer and negative integer
    sprintf(buf, "%d and %d", 123, -456);
    printf("[Test 2] Result: %s\n", buf);
    assert(strcmp(buf, "123 and -456") == 0);

    // Test Case 3: String specifier
    sprintf(buf, "Hello %s", "NEMU");
    printf("[Test 3] Result: %s\n", buf);
    assert(strcmp(buf, "Hello NEMU") == 0);

    // Test Case 4: Multiple mixed parameters (No spaces between specifiers)
    // This tests if your pointer 'temp' increments correctly
    len = sprintf(buf, "%d%s%d", 1, "plus", 1);
    printf("[Test 4] Result: %s, Len: %d\n", buf, len);
    assert(strcmp(buf, "1plus1") == 0);
    assert(len == 6);

    // Test Case 5: Percent sign escape
    sprintf(buf, "Usage: 100%%");
    printf("[Test 5] Result: %s\n", buf);
    assert(strcmp(buf, "Usage: 100%") == 0);

    // Test Case 6: Boundary value 0
    sprintf(buf, "%d", 0);
    printf("[Test 6] Result: %s\n", buf);
    assert(strcmp(buf, "0") == 0);

    // Test Case 7: INT_MIN handling
    // Critical for checking your (unsigned int) conversion logic
    sprintf(buf, "%d", INT_MIN);
    printf("[Test 7] Result: %s\n", buf);
    assert(strcmp(buf, "-2147483648") == 0);

    // Test Case 8: Repeated use of the same buffer
    // Ensures 'str = buf' reset logic works for multiple integers
    sprintf(buf, "%d %d %d", 10, 20, 30);
    printf("[Test 8] Result: %s\n", buf);
    assert(strcmp(buf, "10 20 30") == 0);

    printf("\nCongratulations! All sprintf tests passed.\n");

    return 0;
}