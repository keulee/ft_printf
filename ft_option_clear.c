#include "ft_printf.h"

void ft_option_clear(t_struct *tab)
{
    tab->check_minus = 0;
    tab->check_width = 0;
    tab->check_s_width = 0;
}
