#include "ft_printf.h"

void    ft_find_option(t_struct *tab)
{
    tab->j = tab->i;
    while (tab->str[tab->j] != '\0' && tab->str[tab->j] != 'c') // find type -> make in function (c,s,p,d,i,u,x,X,%)
        tab->j++;
    tab->specifier = tab->str[tab->j];
    while (tab->str[tab->i++] != '\0' && tab->i < tab->j)
    {
        if (tab->str[tab->i] == '-')
            tab->check_minus = 1;
        else if (tab->str[tab->i] >= '0' && tab->str[tab->i] <= '9')
        {
            tab->check_width = 1;
            tab->width = ft_atoi(&tab->str[tab->i]) - 1;
            break;
        }
        else if (tab->str[tab->i] == '*')
        {
            tab->check_s_width = 1;
            tab->width = va_arg(tab->list, int) - 1;
            if (tab->width == -1)
                tab->width = 0;
            if (tab->width < 0)
            {
                tab->width = (tab->width * -1) - 2;
                tab->check_minus = 1;
            }
        }
    }
    tab->i = tab->j;
}
