#include "ft_printf.h"
/*
** Function to find Specifier (c,s,p,d,i,u,x,X,%)
*/
void    ft_find_specifier(t_struct *tab)
{
    while (tab->str[tab->j++] != '\0')
    {
        if (tab->str[tab->j] == 'c' || tab->str[tab->j] == 's'
        || tab->str[tab->j] == 'p' || tab->str[tab->j] == 'd'
        || tab->str[tab->j] == 'i' || tab->str[tab->j] == 'u'
        || tab->str[tab->j] == 'x' || tab->str[tab->j] == 'X'
        || tab->str[tab->j] == '%')
            break;
    }
    tab->specifier = tab->str[tab->j];
}
