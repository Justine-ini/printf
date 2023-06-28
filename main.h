#ifndef MAIN_H_
#define MAIN_H_

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
int _printf(const char *format, ...);
int _puts(char *str);
int _putchar(char c);
int handle_d(long int num);
int print_formatted_output(const char *format, va_list list);
int handle_u(unsigned int num);
int handle_o(unsigned int num);
int handle_x(unsigned int num);
int handle_X(unsigned int num);
int handle_u(unsigned int num);
int handle_o(unsigned int num);
int handle_x(unsigned int num);
int handle_X(unsigned int num);
#endif

