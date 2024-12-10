#ifndef ex03_h
# define ex03_h

# define LONGITUD_MAX 100

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int     ft_scanf(char *buffer, int longitud_max);
void    print_str(const char *str);
void    ft_printf(const char *fmt, ...);
int     ft_strcmp(const char *s1, const char *s2);
size_t  ft_strlen(const char *str);
void    ft_putchar(char c);


#endif