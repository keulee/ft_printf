#include "ft_printf.h"

int    ft_test_flag(const char *str, ...)
{
    t_struct tab;
    va_list my_list;
    int width;
    int i;
    int j;
    int len;
    int tmp;

    i = 0;
    j = 0;
    len = 0;
    va_start(my_list, str);
    ft_init(&tab);
    tab.str = str;
    while (str[i] != '\0')
    {
        if (str[i] == '%' && str[i + 1] == '%') // -> make in function (case %)
        {
            ft_putchar('%');
            i++;
        }
        else if (str[i] == '%')
        {
            j = i;
            while (str[j] != '\0' && str[j] != 'c') // find type -> make in function (c,s,p,d,i,u,x,X,%)
                j++;
            tab.i = i;
            tab.j = j;
            tab = *ft_find_option(&tab);
            printf("minus: %d, width: %d, s_width: %d\n,", tab.check_minus, tab.check_width, tab.check_s_width);
            printf("specifier: %c\n", tab.specifier);
            if (str[i + 1] == 'c') // '%c' case (just print char)
                ft_putchar(va_arg(my_list, int));
            if (str[j] == 'c')
            {
                tmp = ft_find_case(str, i + 1, j);
                if (tmp == 0)
                    ft_manage_width_star(str, &i, my_list, &len);
                else if (tmp == 1)
                {
                    width = ft_atoi(&str[i + 2]) - 1;
                    ft_manage_width(str, my_list, &i, &len, width);
                }
                else if (tmp == 2)
                {
                    width = ft_atoi(&str[i + 1]) - 1;
                    ft_manage_width(str, my_list, &i, &len, width);
                }
                else if (tmp == 3)
                    ft_manage_width_star(str, &i, my_list, &len);
                else if (tmp == 4)
                    ft_putchar(va_arg(my_list, int));
            }
            i = j;
        }
        else // just character out of % and type (c)
            ft_putchar(str[i]);
        i++; // for the string to go foward
        len++; // for return
        ft_option_clear(&tab);
    }
    va_end (my_list); // close the list
    return (len);
}
