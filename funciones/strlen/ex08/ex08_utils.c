#include "ex08.h"

void invertirstr(char str[])
{
    int longitud = ft_strlen(str);
    int izq = 0;
    int der = longitud - 1;
    char temporal;

    while (izq < der)
    {
        temporal = str[izq];
        str[izq] = str[der];
        str[der] = temporal;

        izq++;
        der--;
    }
}
size_t ft_strlen(const char *str)
{
    size_t  i = 0;

    while (str[i] != '\0')
        i++;
    return i;
}
