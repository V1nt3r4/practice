// Escribir un programa que invierta una cadena ingresada por el usuario. Para esto, primero utilice strlen para determinar la longitud de la cadena.
#include "ex06.h"

int main() {
    char    str[100];

    ft_printf("Introduce una cadena: ");
    fgets(str, sizeof(str), stdin);

    str[ft_strcspn(str, "\n")] = '\0';

    invertirstr(str);

    ft_printf("La cadena invertida es: %s\n", str);

    return 0;
}