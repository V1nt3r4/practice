#ifndef ex04_h
# define ex04_h

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

size_t  ft_strlen(const char *str);
int     find_min_lenght(char *arr[], int n);
void    ft_printf(const char *fmt, ...);
void    print_str(const char *str);
void    ft_putchar(char c);
void    print_int(int n);

#endif