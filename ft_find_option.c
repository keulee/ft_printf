#include "ft_printf.h"
/*
** Function to find every options (flag, width etc)
*/
void    ft_find_option(t_struct *tab)
{
    tab->j = tab->i;
    ft_find_specifier(tab);
    while (tab->str[tab->i++] != '\0' && tab->i < tab->j)
    {
        if (tab->str[tab->i] == '-')
            tab->check_minus = 1;
        else if (tab->str[tab->i] >= '0' && tab->str[tab->i] <= '9')
        {
            if (tab->str[tab->i-1] == '.')
            {
                tab->check_precision = 1;
                tab->precision = ft_atoi(&tab->str[tab->i]);
                break;
            }
            else
            {
                tab->check_width = 1;
                while (tab->str[tab->i] >= '0' && tab->str[tab->i] <= '9')
                {
                    tab->width = tab->width * 10 + tab->str[tab->i] - '0';
                    tab->i++;
                }
            }
        }
        else if (tab->str[tab->i] == '*')
        {
            if (tab->str[tab->i-1] == '.')
            {
                tab->check_precision = 1;
                tab->precision = va_arg(tab->list, int);
            }
            else
            {
                tab->check_width = 1;
                tab->width = va_arg(tab->list, int);
                if (tab->specifier == 'c' && tab->width == 0)
                    tab->width = 1;
                if (tab->width < 0)
                    tab->width = (tab->width * -1);
                    // tab->check_minus = 1;
            }
        }
    }
    tab->i = tab->j;
}
