#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int printf_count;
    int ft_printf_count;
    // int width = 10;
    // int precision = 0;
    char *str = "test";

    ft_printf_count = ft_printf("Default: |%s|\n", str);
    printf_count = printf("Default: |%s|\n", str);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("with just minus (no width, no precision): |%-s|\n", str);
    printf_count = printf("with just minus (no width, no precision): |%-s|\n", str);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);
    //
    ft_printf_count = ft_printf("With width > str : |%20s|\n", str);
    printf_count = printf("With width > str : |%20s|\n", str);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);
    //
    ft_printf_count = ft_printf("With width <= str : |%4s|\n", str);
    printf_count = printf("With width <= str : |%4s|\n", str);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);
    //
    ft_printf_count = ft_printf("width 0 case : |%0s|\n", str);
    // printf_count = printf("width 0 case : |%0s|\n", str);
    // printf("ft printf count : %d\n", ft_printf_count);
    // printf("real printf count : %d\n", printf_count);
    //
    ft_printf_count = ft_printf("with minus and width > str |%-10s|\n", str);
    printf_count = printf("with minus and width > str |%-10s|\n", str);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);
    //
    ft_printf_count = ft_printf("with only precision + precision < str : |%.1s|\n", str);
    printf_count = printf("with only precision + precision < str : |%.1s|\n", str);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);
    // //
    ft_printf_count = ft_printf("with only precision + precision >= str : |%.6s|\n", str);
    printf_count = printf("with only precision + precision >= str : |%.6s|\n", str);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("with only precision + precision = 0 : |%.0s|\n", str);
    printf_count = printf("with only precision + precision = 0 : |%.0s|\n", str);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);
    //
    ft_printf_count = ft_printf("with minus and precision (no width, no matter with the str length) : |%-.100s|\n", str);
    printf_count = printf("with minus and precision (no width, no matter with the str length) : |%-.100s|\n", str);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);
    //
    ft_printf_count = ft_printf("with the width, the precision (precision <= string) : |%-10.2s|\n", str);
    printf_count = printf("with the width, the precision (precision <= string) : |%-10.2s|\n", str);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("with the width, the precision (precision > string) : |%-10.5s|\n", str);
    printf_count = printf("with the width, the precision (precision > string) : |%-10.5s|\n", str);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("with the width, the precision (precision > string) : |%-2.2s|\n", str);
    printf_count = printf("with the width, the precision (precision > string) : |%-2.2s|\n", str);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("with the width, the precision (precision > string) : |%-2.5s|\n", str);
    printf_count = printf("with the width, the precision (precision > string) : |%-2.5s|\n", str);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("with the width, the precision (precision > string) : |%-2.1s|\n", str);
    printf_count = printf("with the width, the precision (precision > string) : |%-2.1s|\n", str);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("with the width, the precision (precision <= string) : |%10.2s|\n", str);
    printf_count = printf("with the width, the precision (precision <= string) : |%10.2s|\n", str);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("with the width, the precision (precision > string) : |%10.5s|\n", str);
    printf_count = printf("with the width, the precision (precision > string) : |%10.5s|\n", str);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("with the width, the precision (precision > string) : |%20.2s|\n", str);
    printf_count = printf("with the width, the precision (precision > string) : |%20.2s|\n", str);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("with the width, the precision (precision > string) : |%2.5s|\n", str);
    printf_count = printf("with the width, the precision (precision > string) : |%2.5s|\n", str);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("with the width, the precision (precision > string) : |%2.1s|\n", str);
    printf_count = printf("with the width, the precision (precision > string) : |%2.1s|\n", str);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    return (0);
}

// printf("%%c test---------------------------------\n");
// char ch = 'K';
// int width = 10;
// ft_printf_count = ft_printf("basic c : abcdef |%c|\n", 'c');
// printf_count = printf("basic c : abcdef |%c|\n", 'c');
//
// printf("test printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("c with the width : abcdef |%100c|\n", 'a');
// printf_count = printf("c with the width : abcdef |%100c|\n", 'a');
//
// printf("test printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("c with just the minus (no width) : abcdef |%-c|\n", 'c');
// printf_count = printf("c with just the minus (no width) : abcdef |%-c|\n", 'c');
//
// printf("test printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("c with the star width contains 0 (no minus) : abcdef |%*c|\n", 0, 'c');
// printf_count = printf("c with the star width contains 0 (no minus) : abcdef |%*c|\n", 0, 'c');
//
// printf("test printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("c with the minus and the star width contains 0 : abcdef |%-*c|\n", 0, 'c');
// printf_count = printf("c with the minus and the star width contains 0 : abcdef |%-*c|\n", 0, 'c');
//
// printf("test printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("c with the star width : abcdef |%*c|\n", 5, 'c');
// printf_count = printf("c with the star width : abcdef |%*c|\n", 5, 'c');
//
// printf("test printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("abcdef |%*c|\n", width, ch);
// printf_count = printf("abcdef |%*c|\n", width, ch);
//
// printf("test printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("c with the minus and the width : abcdef |%-7c|\n", 'c');
// printf_count = printf("c with the minus and the width : abcdef |%-7c|\n", 'c');
//
// printf("test printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("c with the minus and the star width contains number bigger than 0 : abcdef |%-*c|\n", 5, 'c');
// printf_count = printf("c with the minus and the star width contains number bigger than 0 : abcdef |%-*c|\n", 5, 'c');
//
// printf("test printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("c with the minus and the star width contains number less than 0 : abcdef |%-*c|\n", -11, 'c');
// printf_count = printf("c with the minus and the star width contains number less than 0 : abcdef |%-*c|\n", -11, 'c');
//
// printf("test printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("abcdef |%8c|\n", 'c');
// printf_count = printf("abcdef |%8c|\n", 'c');
//
// printf("test printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// printf("-----------------------------------------------------\n");
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
