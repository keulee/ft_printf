#include "ft_printf.h"

void    ft_init(t_struct *tab)
{
    tab->i = 0;
    tab->j = 0;
    tab->check_width = 0;
    tab->check_s_width = 0;
    tab->width = 0;
    tab->s_width = 0;
    tab->tmp = 0;
    tab->len = 0;
    tab->check_minus = 0;
    tab->specifier = '\0';
}
