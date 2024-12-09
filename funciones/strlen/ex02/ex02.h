#ifndef EX02
# define EX02

#include <stdarg.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *str);
int	ft_scanf(char *buffer, int longitud_max);
void	imprimir_cadena(const char *str);
void	imprimir_entero(int numero);
void	ft_printf(const char *fmt, ...);
int	ft_strcmp(const char *s1, const char *s2);


#endif
