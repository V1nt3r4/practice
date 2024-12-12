#ifndef ex07
# define ex07

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

void    ft_putchar(char c);
void    ft_printstr(const char *str);
void    ft_printint(int n);
void    ft_printf(const char *fmt, ...);
size_t  ft_strlen(const char *str);
int     contar_palabras(const char *frase);

#endif