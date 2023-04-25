#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);

int _putchar(char c);
int _puts(char *str);
int (*get_op(const char c))(va_list);

int print_char(va_list);
int print_str(va_list);
int print_number(int n);
int print_nbr(va_list);
int print_percent(va_list __attribute__((unused)));

typedef struct specifier
{
   char *specifier;
   int (*func)(va_list);
} specifier_t;

#endif
