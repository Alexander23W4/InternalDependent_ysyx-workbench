#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

/*
在klib中, 需要大家实现的函数主要分成三类:

string.c:
  内存和字符串的写入函数, 例如 memset(), strcpy()等.
  内存和字符串的只读函数, 例如 memcmp(), strlen()等.

stdio.c:
  格式化输出函数, 例如sprintf()等.

stdlib.c:
  malloc ..
*/

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

static char* number_to_str(char *str, int val) {
  char* _str = str;
    if (val == 0) {
        *_str++ = '0';
        *_str = '\0'; // Null-terminate
        return str;
    }

    unsigned int uval;
    if (val < 0) {
        *_str++ = '-';
        uval = (unsigned int)(-(val + 1)) + 1;
    } else {
        uval = (unsigned int)val;
    }

    char temp[12];
    int i = 0;
    while (uval > 0) {
        temp[i++] = (uval % 10) + '0';
        uval /= 10;
    }

    while (i > 0) {
        *_str++ = temp[--i];
    }

    *_str = '\0'; // Always ensure the string is valid here
    return str; // Points to the '\0'
}

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

int printf(const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);  // fmt is the last param before variable params
  const char* temp = fmt;
  char out[1024];
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
              str = (char*)va_arg(ap, const char*);
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

  // serial port output
  char* idx = out;
  while(*idx != '\0'){
    putch(*idx);
    idx++;
  }
  return (int)(_out - out);
}


int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

/*
sprintf(), snprintf(), vsprintf(), and vsnprintf() write to the character string str.

  Because the address of this argument may be used in the va_start() macro, it should not be declared as a register variable, or as a function or an array type.

  The va_arg() macro expands to an expression that has the type and value of the next argument in the call. 
  Each call to va_arg() modifies ap so that the next call returns the next argument. 
  The argument type is a type name specified so that the type of
      a pointer to an object that has the specified type can be obtained simply by adding a * to type.
  (UB) If  there  is  no  next  argument, or if type is not compatible with the type of the actual next argument 
      (as promoted according to the default argument promotions), random errors will occur.

  (UB) Each invocation of va_start() must be matched by a corresponding invocation of va_end() in the same function.  
      After the call va_end(ap) the variable ap is undefined.

*/

// !! \% situation              
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
              str = (char*)va_arg(ap, const char*);
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

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
