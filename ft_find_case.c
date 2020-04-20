#include "ft_printf.h"

int ft_find_case(const char *str, int i, int j)
{
    while (str[i] != '\0' && i <= j)
    {
        if (str[i] == '-' && str[i + 1] == '*')
            return (0);
        else if (str[i] == '-' && str[i + 1] >= '0' && str[i + 1] <= '9')
            return (1);
        else if (str[i] >= '0' && str[i] <= '9')
            return (2);
        else if (str[i] == '*')
            return (3);
        else if (str[i] == '-')
            return (4);
        i++;
    }
    return (-1);
}
