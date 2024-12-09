//Crear un programa que solicite al usuario ingresar un número indefinido de cadenas hasta que ingrese "salir".
//Para cada cadena ingresada, mostrar su longitud.
#include <string.h>

#define MAX_LONGITUD 100

size_t ft_strlen(const char *str);
int ft_scanf(char *buffer, int longitud_max);
void ft_printf(const char *fmt, ...);
int ft_strcmp(const char *s1, const char *s2);


int main()
{
	char	c[MAX_LONGITUD];

	while (1) {
		ft_printf("Ingrese una cadena (o 'salir' para finalizar): ", c);
		ft_scanf(c, MAX_LONGITUD);

		if (strcmp(c, "salir") == 0) {
			ft_printf("Saliendo del programa.\n");
			break;
		}

		ft_printf("La longitud de la cadena es: %d\n", ft_strlen(c));
	}
	return (0);
}
