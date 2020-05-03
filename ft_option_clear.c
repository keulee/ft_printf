#include "ft_printf.h"
/*
** Function to clear find_option function
*/
void ft_option_clear(t_struct *tab)
{
    tab->check_minus = 0;
    tab->check_width = 0;
    tab->check_s_width = 0;
    tab->check_precision = 0;
    tab->check_precision = 0;
    tab->string_len = 0;
    tab->width = 0;
    tab->precision = 0;
    tab->index = 0;
}
