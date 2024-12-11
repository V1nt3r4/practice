#ifndef ex05
# define ex05

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>

size_t  ft_strlen(const char *str);
void    ft_putchar(char c);
void    print_str(const char *str);
void    print_int(int n);
void    ft_printf(const char *fmt, ...);
int     longitudArray(char *str[]);

#endif