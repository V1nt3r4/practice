//Implementa una función simple que verifique si una cadenacontiene uel carácter '@' para validar un formato básico de correo.

#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, char c)
{
    while (*s)
    {
        if (*s == (char)c)
            return (char *)c;
        return (NULL);
    }
    if ((char)c == '\0')
        return (char *)s;
    return (NULL);
}

int is_valid_mail(const char *email)
{
    if (ft_strchr(email, '@') != NULL)
        return 1;
    else
        return 0;
}

int main () {
    printf("Prueba 3: Validar email\n");
    const char *email1 = "user@example.com";
    const char *email2 = "invalid-email";
    if (is_valid_mail(email1))
        printf("Email válido!");
    if (is_valid_mail(email2))
        printf("Email válido!");
    else
        printf("%s, no es un email válido", email2);
}