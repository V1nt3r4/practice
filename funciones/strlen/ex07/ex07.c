#include "ex07.h"

int main () {
    char    frase[1000];

    ft_printf("Ingrese una frase: ");
    fgets(frase, sizeof(frase), stdin);

    size_t len = ft_strlen(frase);
    if (len > 0 && frase[len-1] == '\n') {
        frase[len-1] = '\0';
    }

    int num_palabras = contar_palabras(frase);

    ft_printf("Número de palabras: %d\n", num_palabras);

    return 0;
}