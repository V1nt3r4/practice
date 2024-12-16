//Escribe una función que cuente las veces que aparece un carácter específico con una cadena usando strchr

#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, char c)
{
    while (*s)
    {
        if (*s == (char)c)
            return ((char *)s);
        s++;
    }
    if ((char)c == '\0')
        return ((char *)c);
    return (NULL);
}

char *ft_strchr(const char *s, char c);

int count_char(const char *str, char c)
{
    int         i = 0;
    const char  *ptr = str;
    while ((ptr = ft_strchr(ptr, c)) != NULL)
    {
        i++;
        ptr++;
    }
    return i;
}

int main() {
    printf("Prueba 1: Contar ocurrencias\n");
    const char *str1 = "Hello World!";
    printf("Ocurrencias de '1' en '%s': %d\n\n", str1, count_char(str1, '1'));
}