#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <math.h>
#include <limits.h>

int print_char(char c);
int print_string(char *s);
int _printf(const char *format, ...);
int _strlen(int myNum);
void check_number(int n);
int num_len(int n);

#endif
