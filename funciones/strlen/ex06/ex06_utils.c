#include "ex06.h"

size_t  ft_strlen(const char *str)
{
    size_t      i = 0;

    while(str[i] != '\0')
        i++;
    return i;
}

void    invertirstr(char str[])
{
    int     longitud = ft_strlen(str);
    int     izq = 0;
    int     der = longitud - 1;
    char    temporal;

    while (izq < der)
    {
        temporal = str[izq];
        str[izq] = str[der];
        str[der] = temporal;

        izq++;
        der--;
    }
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    print_str(const char *str)
{
    while (*str)
        ft_putchar(*str++);
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

size_t ft_strcspn(const char *str1, const char *str2)
{
    size_t  count = 0;
    const char *p;

    while (*str1) {
        p = str2;
        while (*p) {
            if (*str1 == *p)
                return count;
            p++;
        }
        str1++;
        count++;
    }
    return count;
}