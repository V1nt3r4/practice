//Escribe una función que divida una cadena en dos partes a partir de un carácter delimitador.

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
        return (char *)s;
    return (NULL);
}

void split_str(char *str, char delimiter)
{
    char *found = ft_strchr(str, delimiter);
    if (found)
    {
        *found = '\0';
        printf("Primera parte: %s\n", str);
        printf("Segunda parte: %s\n", found + 1);
    } else printf("Delimitador no encontrado");
}

int main () {
    printf("Prueba 4: Dividir cadena\n");
    char str4[] = "nombre:apellido";
    split_str(str4, ':');
    printf("\n");
}
