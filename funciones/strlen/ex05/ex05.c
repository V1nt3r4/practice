//Crea un programa que calcule la longitud de un array y la imprima
#include "ex05.h"

int main () {
    char *str[] = {"hola", "mundo", "programación", "en", "C", NULL};

    int n = longitudArray(str);

    int i = 0;
    while (i < n) {
        int len = ft_strlen(str[i]);
        ft_printf("La longitud de la cadena \"%s\" es: %d\n", str[i], len);
        i++;
    }
    return 0;
}