#include "ft_printf.h"

int ft_find_case(const char *str, int i, int j)
{
    while (str[i] != '\0' && i <= j)
    {
        if (str[i] == '-' && str[i + 1] == '*') // %-*c
            return (0);
        else if (str[i] == '-' && str[i + 1] >= '0' && str[i + 1] <= '9') // %-5c
            return (1);
        else if (str[i] >= '0' && str[i] <= '9') // %5c
            return (2);
        else if (str[i] == '*') // %*c
            return (3);
        else if (str[i] == '-') //%-c
            return (4);
        i++;
    }
    return (-1);
}
