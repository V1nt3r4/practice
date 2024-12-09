#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>


//Función para calcular la longitud
size_t ft_strlen(const char *str)
{
        size_t  i;

	i = 0;
        while (str[i] != '\0')
                i++;
        return (i);
}

//Función personalizada para leer una cadena desde la entrada estándar
int ft_scanf(char *buffer, int longitud_max)
{
        int     i = 0;
        char    ch;

        while (i < longitud_max - 1)
        {
                ch = getchar();
                if (ch == '\n' || ch == ' ')
                {
                        break;
                }
                buffer[i++] = ch;
        }
        buffer[i] = '\0';
	return (i);
}

//Función para imprimir cadena
void imprimir_cadena(const char *str)
{
        while (*str)
        {
                putchar(*str++);
        }
}

//Función para imprimir un entero
void imprimir_entero(int numero)
{
        if (numero < 0)
        {
                putchar('-');
                numero = -numero;
        }
        if (numero == 0)
        {
                putchar('0');
                return;
        }
        char buffer[12]; // Buffer para almacenar los dígitos (10 digitos + signo + nulo)
        int i = 0;
        while (numero >0)
        {
                buffer[i++] = '0' + (numero % 10);
                numero /= 10;
        }
        while (i > 0)
        {
                putchar(buffer[--i]);
        }
}

//Función para imprimir según un formato
void ft_printf(const char *fmt, ...)
{
	va_list args;
	va_start(args, fmt);

	while (*fmt)
	{
		if (*fmt == '%')
		{
			fmt++;
			if (*fmt == 's'){
				imprimir_cadena(va_arg(args, char *));
			} else if (*fmt == 'd') {
				imprimir_entero(va_arg(args, int));
			} else {
				putchar('%');
				putchar(*fmt);
			}
		} else {
			putchar(*fmt);
		}
		fmt++;
	}
	va_end(args);
}

//Función ft_strcmp propia.
int ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && (*s1 != '\0' || (*s2 && *s2 != '\0')))
	{
		if (!*s1)
		{
			return (1);
		}
		if (!*s2)
		{
			return (-1);
		}
		++s1;
		--s2;
	}
	return (0);
}

