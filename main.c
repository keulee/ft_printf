#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int printf_count;
    int test_printf_count;

    test_printf_count = ft_test_flag("abcdef |%c|\n", 'a');
    printf_count = printf("abcdef |%c|\n", 'a');

    printf("test printf count : %d\n", test_printf_count);
    printf("real printf count : %d\n", printf_count);

    test_printf_count = ft_test_flag("abcdef |%2c|\n", 'b');
    printf_count = printf("abcdef |%2c|\n", 'b');

    printf("test printf count : %d\n", test_printf_count);
    printf("real printf count : %d\n", printf_count);

    test_printf_count = ft_test_flag("abcdef |%-c|\n", 'b');
    printf_count = printf("abcdef |%-c|\n", 'b');

    printf("test printf count : %d\n", test_printf_count);
    printf("real printf count : %d\n", printf_count);

    test_printf_count = ft_test_flag("abcdef |%-10c|\n", 'b');
    printf_count = printf("abcdef |%-10c|\n", 'b');

    printf("test printf count : %d\n", test_printf_count);
    printf("real printf count : %d\n", printf_count);

    test_printf_count = ft_test_flag("abcdef |%*c|\n", 7, 'b');
    printf_count = printf("abcdef |%*c|\n", 7, 'b');

    printf("test printf count : %d\n", test_printf_count);
    printf("real printf count : %d\n", printf_count);

    test_printf_count = ft_test_flag("abcdef |%-*c|\n", 20, 'b');
    printf_count = printf("abcdef |%-*c|\n", 20, 'b');

    printf("test printf count : %d\n", test_printf_count);
    printf("real printf count : %d\n", printf_count);

    return (0);
}

// int    ft_test_flag(const char *str, ...)
// {
//     va_list my_list;
//     int width;
//     int i;
//     int j;
//     int len;
//     int tmp;
//
//     i = 0;
//     j = 0;
//     len = 0;
//     va_start(my_list, str);
//     while (str[i] != '\0')
//     {
//         if (str[i] == '%' && str[i + 1] == '%') // -> make in function (case %)
//         {
//             ft_putchar('%');
//             i++;
//         }
//         else if (str[i] == '%')
//         {
//             j = i;
//             while (str[j] != '\0' && str[j] != 'c') // find type -> make in function (c,s,p,d,i,u,x,X,%)
//                 j++;
//             if (str[i + 1] == 'c') // '%c' case (just print char)
//                 ft_putchar(va_arg(my_list, int));
//             if (str[j] == 'c')
//             {
//                 tmp = find_case(str, i + 1, j);
//                 if (tmp == 0)
//                     ft_manage_width_star(str, &i, my_list, &len);
//                 else if (tmp == 1)
//                 {
//                     width = ft_atoi(&str[i + 2]) - 1;
//                     ft_manage_width(str, my_list, &i, &len, width);
//                 }
//                 else if (tmp == 2)
//                 {
//                     width = ft_atoi(&str[i + 1]) - 1;
//                     ft_manage_width(str, my_list, &i, &len, width);
//                 }
//                 else if (tmp == 3)
//                     ft_manage_width_star(str, &i, my_list, &len);
//                 else if (tmp == 4)
//                     ft_putchar(va_arg(my_list, int));
//             }
//             i = j;
//         }
//         else // just character out of % and type (c)
//             ft_putchar(str[i]);
//         i++; // for the string to go foward
//         len++; // for return
//     }
//     va_end (my_list); // close the list
//     return (len);
// }

// int find_case(const char *str, int i, int j)
// {
//     while (str[i] != '\0' && i <= j)
//     {
//         if (str[i] == '-' && str[i + 1] == '*')
//             return (0);
//         else if (str[i] == '-' && str[i + 1] >= '0' && str[i + 1] <= '9')
//             return (1);
//         else if (str[i] >= '0' && str[i] <= '9')
//             return (2);
//         else if (str[i] == '*')
//             return (3);
//         else if (str[i] == '-')
//             return (4);
//         i++;
//     }
//     return (-1);
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
