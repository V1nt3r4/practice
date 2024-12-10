#include "ex03.h"

void ft_putchar(char c)
{
    write(1, &c, 1);
}

//Función para calcular longitud
size_t ft_strlen(const char *str)
{
    size_t  i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

//Función para leer una cadena desde la entrada estándar
int ft_scanf(char *buffer, int longitud_max)
{
    int     i = 0;
    char    c;

    while (i < longitud_max - 1)
    {
        c = getchar();
        if (c == '\n' || c == ' ')
            break;
        buffer[i++] = c;
    }
    buffer[i] = '\0';
    return (i);
}



//Función para imprimir cadena
void print_str(const char *str)
{
    while (*str)
        ft_putchar(*str++);
}
void ft_printf(const char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);

    while (*fmt)
    {
        if (*fmt == '%')
        {
            fmt++;
            if (*fmt == 's')
                print_str(va_arg(args, char *));
            else {
                ft_putchar('%');
                ft_putchar(*fmt);
            }
        } else {
            ft_putchar(*fmt);
        }
        fmt++;
    }
    va_end(args);
}

//Función compara cadena
int ft_strcmp(const char *s1, const char *s2)
{
    while (*s1 && *s2)
    {
        if (*s1 != *s2)
            return (*s1 - *s2);
        ++s1;
        ++s2;
    }
    if (*s1 != *s2)
        return (*s1 - *s2);
    return (0);
}

