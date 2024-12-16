//Crea una función que extraiga una subcadena desde la primera aparición de un carácter hasta el final de la cadena.

#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == (char)c)
            return (char *)s;
        s++;
    }
    if ((char)c == '\0')
        return ((char *)s);
    return (NULL);
}
char *extract_substring(const char *s, char c)
{
    char *found = ft_strchr(s, c);

    if (found)
        return (found);
    else
        return (NULL);

}

int main () {
    printf("Prueba 2: Extraer la subcadena\n");
    const char *str2 = "Hello World!";
    char *substr = extract_substring(str2, 'W');
    if (substr != NULL)
        printf("Subcadena desde 'W' en '%s' es: %s\n\n", str2, substr);
    else
        printf("Carácter 'W' NO ENCONTRADO! en %s", str2);
}