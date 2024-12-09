// Escribir un programa que pida al usuario que ingrese una cadena y luego imprima la longitud de esa cadena
#include <unistd.h>
#include <stdio.h>

size_t ft_strlen(const char *str) {
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int main() {
	char 	c[100];
	size_t	i;

	printf("Escribe una cadena: ");
	fgets(c, sizeof(c), stdin);

	i = ft_strlen(c);
	printf("La longitud es: %zu", i);
	return (0);
}
