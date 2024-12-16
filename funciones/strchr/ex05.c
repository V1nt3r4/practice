//Crea una función que reemplace la primera aparición de un carácter en una cadena por otro carácter
#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, char c)
{
    while (*s)
    {
        if (*s == (char)c)
            return (char *)s;
        s++;
    }
    if (c == '\0')
        return ((char *)c);
    return (NULL); 
}

void replace_first_char(char *str, char old_char, char new_char)
{
    char *found = ft_strchr(str, old_char);
    if (found)
        *found = new_char;
}

int main () {
    char str5[] = "Hello, World!";
    printf("Original: %s\n", str5);
    replace_first_char(str5, 'o', '0');
    printf("Modificador: %s\n\n", str5);
}
