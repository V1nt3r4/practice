#ifndef ex06
# define ex06

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

size_t  ft_strcspn(const char *str1, const char *str2);
size_t  ft_strlen(const char *str);
void    ft_printf(const char *fmt, ...);
void    print_str(const char *str);
void    invertirstr(char str[]);
void    ft_putchar(char c);

#endif