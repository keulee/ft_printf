#include "ft_printf.h"

int        ft_error(char *base)
{
    long int i;
    long int j;

    i = 0;
    if (base[0] == '\0' || base[1] == '\0')
        return (0);
    while (base[i])
    {
        j = i + 1;
        if (base[i] == '+' || base[i] == '-')
            return (0);
        while (base[j])
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

int        ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

void    ft_putnbr_base(int nbr, char *base)
{
    int            size;
    long int    nb;

    size = ft_strlen(base);
    nb = nbr;
    if (ft_error(base) == 1)
    {
        if (nb < 0)
        {
            nb *= -1;
            ft_putchar('-');
        }
        if (nb >= size)
            ft_putnbr_base(nb / size, base);
        ft_putchar(base[nb % size]);
    }
}

/*int     main(void)
{
    ft_putnbr_base(1234, "0123456789");
    return (0);
} */
