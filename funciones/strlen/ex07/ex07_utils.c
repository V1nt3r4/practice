#include "ex07.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_printstr(const char *str)
{
    while(*str)
        ft_putchar(*str++);
}

void    ft_printint(int n)
{
    if(n < 0)
    {
        ft_putchar('-');
        n = -n;
    }
    if (n == 0)
    {
        ft_putchar('0');
        return;
    }
    char    buffer[12];
    int     i = 0;

    while (n > 0)
    {
        buffer[i++] = '0' + (n % 10);
        n /= 10;
    }
    while (i > 0)
        ft_putchar(buffer[--i]);
}

void    ft_printf(const char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);

    while (*fmt)
    {
        if (*fmt == '%')
        {
            fmt++;
            if (*fmt == 's')
                ft_printstr(va_arg(args, char *));
            else if (*fmt == 'd')
                ft_printint(va_arg(args, int));
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

size_t  ft_strlen(const char *str){
    size_t  i = 0;

    while (str[i] != '\0')
        i++;
    return i;
}

int contar_palabras(const char *frase)
{
    int contador = 0;
    int en_palabras = 0;
    int i = 0;

    while (frase[i] != '\0') {
        if (frase[i] == ' ') {
            en_palabras = 0;
        } else if (en_palabras == 0) {  // Cambiado '=' por '=='
            en_palabras = 1;
            contador++;
        }
        i++;
    }

    return contador;
}


