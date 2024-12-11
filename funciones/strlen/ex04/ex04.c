//4 - Desarrollar un programa que reciba un array de cadenas y determine la longitud de la cadena más corta.
#include "ex04.h"

int main() {
    char *str[] = {"tu", "madre", "programa", "con", "java"};
    int n = sizeof(str) / sizeof(str[0]);

    int minLen = find_min_lenght(str, n);
    if (minLen != -1)
        ft_printf("La longitud de la cadena más corta es: %d\n", minLen);
    else
        ft_printf("No se proporcionaron cadenas\n");
    
    return 0;
}