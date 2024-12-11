#include "ex05.h"

size_t ft_strlen(const char *str)
{
    size_t  i = 0;

    while (str[i] != '\0')
        i++;
    return i;
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void print_str(const char *str)
{
    while (*str)
        ft_putchar(*str++);
}

void print_int(int n)
{
    if (n < 0)
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

    while (n > 0) {
        buffer[i++] = '0' + (n % 10);
        n /= 10;
    }
    while (i > 0)
        ft_putchar(buffer[--i]);
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
            else if (*fmt == 'd')
                print_int(va_arg(args, int));
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

int longitudArray(char *str[]) {
    int count = 0;
    while (str[count] != NULL) {
        count++;
    }
    return count;
}

