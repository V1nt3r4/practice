//Escribir un programa que compare la longitud de dos cadenas ingresadas por el usuario e imprima cuál es la más larga.

#include "ex03.h"

int main() {
    char    a[LONGITUD_MAX];
    char    b[LONGITUD_MAX];

    ft_printf("Escribe la primera cadena: \n", a);
    fgets(a, sizeof(a), stdin);
    
    ft_printf("Escribe la segunda cadena: \n", b);
    fgets(b, sizeof(b), stdin);

    if ((ft_strcmp(a, "\0")) && (ft_strcmp(b, "\0"))) {
        if(!ft_strcmp(a, b)) {
            ft_printf("Ambas cadenas son iguales\n");
        }
        else if (ft_strlen(a) > ft_strlen(b)) {
            ft_printf("La primera cadena es mayor\n");
        } else if (ft_strlen(a) < ft_strlen(b)) {
            ft_printf("La segunda línea es mayor\n");
        }

        } else {
            ft_printf("no sabes escribir?");
        }
    return (0);
}
