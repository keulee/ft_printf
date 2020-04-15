#include "ft_printf.h"
#include <stdio.h>

int    ft_test_flag(char *str, ...);

int main(void)
{
    int printf_count;
    // int test_printf_count;

    // test_printf_count = ft_test_flag("abcdef |%2c||%-10c|\n", 'A', 'B');
    printf_count = printf("abcdef |%-2c|\n", 'A');

    // printf("test printf count : %d\n", test_printf_count);
    printf("real printf count : %d\n", printf_count);
    return (0);
}
int    ft_test_flag(char *str, ...)
{
    // char tmp = 'd';
    va_list my_list;
    int num;
    int i;
    int j;
    int count;

    i = 0;
    j = 0;
    count = 0;
    va_start(my_list, str);
    while (str[i] != '\0')
    {
        if (str[i] == '%')
        {
            j = i;
            if (str[i + 1] == 'c')
                ft_putchar(va_arg(my_list, int));
            while (str[j] != '\0' && str[j] != 'c') // find type
                j++;
            if (str[j] == 'c')
            {
                if (str[i + 1] >= '0' && str[i + 1] <= '9')
                {
                    num = ft_atoi(&str[i + 1]) - 1;
                    count = count + num;
                    // ft_putchar('|');
                    while (num > 0)
                    {
                        ft_putchar(' ');
                        num--;
                    }
                    ft_putchar(va_arg(my_list, int));
                    // ft_putstr("|");              // a faire
                }
                else if (str[i + 1] == '*')
                {
                    ft_putnbr(va_arg(my_list, int));
                }
                else if (str[i + 1] == '-')
                {
                    if(str[i + 2] >= '0' && str[i + 2] <= '9')
                    {
                        num = ft_atoi(&str[i + 2]) - 1;
                        count = count + num;
                        // ft_putchar('|');
                        ft_putchar(va_arg(my_list, int));
                        while (num > 0)
                        {
                            ft_putchar(' ');
                            num--;
                        }
                        // ft_putstr("|");
                    }
                    else if (str[i + 2] == '*')
                    {
                        ft_putnbr(va_arg(my_list, int));
                    }
                    else
                        ft_putchar(va_arg(my_list, int));
                }
            }
            i = j;
            // else if (str[j] == 's')
            //     // find_str(str, i, j);
            //     ft_putstr(va_arg(my_list, char *));
        }
            // if (str[i + 1] >= '0' && str[i + 1] <= '9')
            // {
            //     num = ft_atoi(&str[i + 1]) - 1;
            //     // ft_putstr("Resultat keulee = ");
            //     // ft_putchar('|');
            //     while (num > 0)
            //     {
            //         ft_putchar(' ');
            //         num--;
            //     }
            //     ft_putchar(va_arg(my_list, int));
            //     // ft_putchar(tmp);
            //     // ft_putstr("|\n");                // a faire
            // }
            // else if (str[i + 1] == '-')
            // {
            //     if(str[i + 2] >= '0' && str[i + 2] <= '9')
            //     {
            //         num = ft_atoi(&str[i + 2]) - 1;
            //         // ft_putstr("Resultat keulee = ");
            //         // ft_putchar('|');
            //         // ft_putchar(tmp);
            //         ft_putchar(va_arg(my_list, int));
            //         while (num > 0)
            //         {
            //             ft_putchar(' ');
            //             num--;
            //         }
            //         // ft_putstr("|\n");
            //     }
                //f_number++;
            // f_pct++;
        else
            ft_putchar(str[i]);
        // // if (str[i] >= '0' && str[i] <= '9')
        //     printf("option number detected\n");
        // if (str[i] == '-')
        //     printf("option minus detected\n");
        // if (str[i] == '*')
        //     printf("option * detected\n");
        i++;
        count++;
    }
    va_end(my_list);
    return (count);
}


// void find_char(char *str, int start, int index)
// {
//     while (str[start] != '\0' && start <= index)
//     {
//         ft_putchar(str[start]);
//         start++;
//     }
//     ft_putchar(' ');
//     ft_putstr("recognized\n");
// }
//
// void find_str(char *str, int start, int index)
// {
//     while (str[start] != '\0' && start <= index)
//     {
//         ft_putchar(str[start]);
//         start++;
//     }
//     ft_putchar(' ');
//     ft_putstr("recognized\n");
// }

// int    ft_checkType(char *str)
// {
//     int i;
//
//     i = 0;
//     while (str[i] != '\0' && str[i] != 'c')
//         i++;
//     return (i);
// }

//ft_printf("%s\n", "this is how i print");
//printf("%7c %s\n", 'H', "this");
//ft_printf("%s", "this is the test");
// printf("%s", "this is the test");
//ft_printf("c = %c", c);
/*ft_printf("d = %c", d);
ft_printf("c = %c, d = %c", c, d);
ft_printf("s = %s", s);
ft_printf("s2 = %s", s2);*/
//ft_printf("All : %c / %c / %s / %s / %i\n", c, d, s, s2, a);
//printf("ft_printf, return value : %d.\n", ret);
//ret = printf("All : %c / %c / %s / %s / %i\n", c, d, s, s2, a);
//printf("printf, return value : %d.\n", ret);
//ft_printf("%%");
