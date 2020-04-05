#include "ft_printf.h"

int     ft_findIndex(char *tab, char element)
{
    int index;

    index = 0;
    while (tab[index] != '\0')
    {
        if (tab[index] == element)
            return (index);
        index++;
    }
    return (-1);
}
