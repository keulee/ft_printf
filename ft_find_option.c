#include "ft_printf.h"

t_struct    *ft_find_option(t_struct *tab)
{
    tab->specifier = tab->str[tab->j];
    while (tab->str[tab->i] != '\0' && tab->i < tab->j)
    {
        if (tab->str[tab->i] == '-')
            tab->check_minus = 1;
        else if (tab->str[tab->i] >= '0' && tab->str[tab->i] <= '9')
            tab->check_width = 1;
        else if (tab->str[tab->i] == '*')
            tab->check_s_width = 1;
        tab->i++;
    }
    return (tab);
}
