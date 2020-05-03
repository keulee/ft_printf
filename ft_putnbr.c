#include "ft_printf.h"

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147484648", 11);
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
	}
	// else if (nb < 0)
	// {
	// 	ft_putchar('-');
	// 	nb = nb * (-1);
	// 	ft_putnbr(nb / 10);
	// 	ft_putnbr(nb % 10);
	// }
	if (nb >= 0 && nb < 10)
		ft_putchar(nb % 10 + 48);
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
