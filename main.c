#include "ft_printf.h"

int main(void)
{
    int ft_printf_count;
    int printf_count;

    printf("======================  [Error fixing]   =====================\n");

    int d = 0;

    // ft_printf_count = ft_printf("mypf: -->|%0*.d|<--\n", 5, d);
    // printf_count = printf("real: -->|%0*.d|<--\n", 5, d);
    // printf("test printf count : %d\n", ft_printf_count);
    // printf("real printf count : %d\n", printf_count);
    // printf("-------------------------------------------------------------\n");
    //
    // ft_printf_count = ft_printf("mypf: -->|%0*.*d|<--\n", 4, -4, d);
    // printf_count = printf("real: -->|%0*.*d|<--\n", 4, -4, d);
    // printf("test printf count : %d\n", ft_printf_count);
    // printf("real printf count : %d\n", printf_count);
    // printf("-------------------------------------------------------------\n");
    //
    // ft_printf_count = ft_printf("mypf: -->|%0*.*d|<--\n", 4, -3, d);
    // printf_count = printf("real: -->|%0*.*d|<--\n", 4, -3, d);
    // printf("test printf count : %d\n", ft_printf_count);
    // printf("real printf count : %d\n", printf_count);
    // printf("-------------------------------------------------------------\n");
    //
    // ft_printf_count = ft_printf("mypf: -->|%0*.*d|<--\n", 4, -2, d);
    // printf_count = printf("real: -->|%0*.*d|<--\n", 4, -2, d);
    // printf("test printf count : %d\n", ft_printf_count);
    // printf("real printf count : %d\n", printf_count);
    // printf("-------------------------------------------------------------\n");
    //
    // ft_printf_count = ft_printf("mypf: -->|%0*.*d|<--\n", 4, -1, d);
    // printf_count = printf("real: -->|%0*.*d|<--\n", 4, -1, d);
    // printf("test printf count : %d\n", ft_printf_count);
    // printf("real printf count : %d\n", printf_count);
    // printf("-------------------------------------------------------------\n");
    //
    // ft_printf_count = ft_printf("mypf: -->|%0*.*d|<--\n", -4, -4, d);
    // printf_count = printf("real: -->|%0*.*d|<--\n", -4, -4, d);
    // printf("test printf count : %d\n", ft_printf_count);
    // printf("real printf count : %d\n", printf_count);
    // printf("-------------------------------------------------------------\n");
    //
    // ft_printf_count = ft_printf("mypf: -->|%0*.*d|<--\n", -4, -3, d);
    // printf_count = printf("real: -->|%0*.*d|<--\n", -4, -3, d);
    // printf("test printf count : %d\n", ft_printf_count);
    // printf("real printf count : %d\n", printf_count);
    // printf("-------------------------------------------------------------\n");
    //
    // ft_printf_count = ft_printf("mypf: -->|%0*.*d|<--\n", -4, -2, d);
    // printf_count = printf("real: -->|%0*.*d|<--\n", -4, -2, d);
    // printf("test printf count : %d\n", ft_printf_count);
    // printf("real printf count : %d\n", printf_count);
    // printf("-------------------------------------------------------------\n");
    //
    // ft_printf_count = ft_printf("mypf: -->|%0*.*d|<--\n", -4, -1, d);
    // printf_count = printf("real: -->|%0*.*d|<--\n", -4, -1, d);
    // printf("test printf count : %d\n", ft_printf_count);
    // printf("real printf count : %d\n", printf_count);
    // printf("-------------------------------------------------------------\n");
    //
    // ft_printf_count = ft_printf("mypf: -->|%0*d|<--\n", 4, d);
    // printf_count = printf("real: -->|%0*d|<--\n", 4, d);
    // printf("test printf count : %d\n", ft_printf_count);
    // printf("real printf count : %d\n", printf_count);
    // printf("-------------------------------------------------------------\n");

    ft_printf_count = ft_printf("mypf: -->|%-4.d|<--\n", d);
    printf_count = printf("real: -->|%-4.d|<--\n", d);
    printf("test printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);
    printf("-------------------------------------------------------------\n");

    return (0);
}

// printf("======================  [%%c test]   =====================\n");
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
// printf("======================  [%%s test]   =====================\n");
// int width = 10;
// int width_zero = 0;
// int width_minus = -21;
// int precision = 2;
// int precision_zero = 0;
// char *str = "We all pretend to be the hero on the good side";
//
// ft_printf_count = ft_printf("Default: |%s|\n", str);
// printf_count = printf("Default: |%s|\n", str);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("with just minus (no width, no precision): |%-s|\n", str);
// printf_count = printf("with just minus (no width, no precision): |%-s|\n", str);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("With width > str : |%20s|\n", str);
// printf_count = printf("With width > str : |%20s|\n", str);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("With width <= str : |%4s|\n", str);
// printf_count = printf("With width <= str : |%4s|\n", str);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("width 0 case : |%0s|\n", str);
// // printf_count = printf("width 0 case : |%0s|\n", str);
// // printf("ft printf count : %d\n", ft_printf_count);
// // printf("real printf count : %d\n", printf_count);
// //
// ft_printf_count = ft_printf("with minus and width > str |%-10s|\n", str);
// printf_count = printf("with minus and width > str |%-10s|\n", str);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("with only precision + precision < str : |%.1s|\n", str);
// printf_count = printf("with only precision + precision < str : |%.1s|\n", str);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("with only precision + precision >= str : |%.6s|\n", str);
// printf_count = printf("with only precision + precision >= str : |%.6s|\n", str);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("with only precision + precision = 0 : |%.0s|\n", str);
// printf_count = printf("with only precision + precision = 0 : |%.0s|\n", str);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("with minus and precision (no width, no matter with the str length) : |%-.100s|\n", str);
// printf_count = printf("with minus and precision (no width, no matter with the str length) : |%-.100s|\n", str);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("with the width, the precision (precision <= string) : |%-10.2s|\n", str);
// printf_count = printf("with the width, the precision (precision <= string) : |%-10.2s|\n", str);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("with the width, the precision (precision > string) : |%-10.5s|\n", str);
// printf_count = printf("with the width, the precision (precision > string) : |%-10.5s|\n", str);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("with the width, the precision (precision > string) : |%-2.2s|\n", str);
// printf_count = printf("with the width, the precision (precision > string) : |%-2.2s|\n", str);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("with the width, the precision (precision > string) : |%-2.5s|\n", str);
// printf_count = printf("with the width, the precision (precision > string) : |%-2.5s|\n", str);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("with the width, the precision (precision > string) : |%-2.1s|\n", str);
// printf_count = printf("with the width, the precision (precision > string) : |%-2.1s|\n", str);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("with the width, the precision (precision <= string) : |%10.2s|\n", str);
// printf_count = printf("with the width, the precision (precision <= string) : |%10.2s|\n", str);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("with the width, the precision (precision > string) : |%10.5s|\n", str);
// printf_count = printf("with the width, the precision (precision > string) : |%10.5s|\n", str);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("with the width, the precision (precision > string) : |%20.2s|\n", str);
// printf_count = printf("with the width, the precision (precision > string) : |%20.2s|\n", str);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("with the width, the precision (precision > string) : |%2.5s|\n", str);
// printf_count = printf("with the width, the precision (precision > string) : |%2.5s|\n", str);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("with the width, the precision (precision > string) : |%2.1s|\n", str);
// printf_count = printf("with the width, the precision (precision > string) : |%2.1s|\n", str);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("* test with the width : |%*.1s|\n", width, str);
// printf_count = printf("* test with the width : |%*.1s|\n", width, str);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("* test with the precision : |%.*s|\n", precision, str);
// printf_count = printf("* test with the precision : |%.*s|\n", precision, str);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("* test with the width and the precision : |%*.0s|\n", width, str);
// printf_count = printf("* test with the width and the precision : |%*.0s|\n", width, str);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("* test with the width(zero) and the precision : |%*.0s|\n", width_zero, str);
// printf_count = printf("* test with the width(zero) and the precision : |%*.0s|\n", width_zero, str);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("* test with the width and the precision(zero) : |%3.*s|\n", precision_zero, str);
// printf_count = printf("* test with the width and the precision(zero) : |%3.*s|\n", precision_zero, str);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("* test with the width and the precision and the minus : |%-*.*s|\n", width, precision, str);
// printf_count = printf("* test with the width and the precision and the minus : |%-*.*s|\n", width, precision, str);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("* test with the width(minus) and the precision and the minus : |%-*.*s|\n", width_minus, precision, str);
// printf_count = printf("* test with the width(minus) and the precision and the minus : |%-*.*s|\n", width_minus, precision, str);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// printf("---------------------------------------------------------\n");

// printf("======================  [%%d/%%i test]   =====================\n");
// ft_printf_count = ft_printf("Default d: |%d|\n", 42);
// printf_count = printf("Default d: |%d|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
// //
// ft_printf_count = ft_printf("Default d with minus: |%-d|\n", 42);
// printf_count = printf("Default d with minus: |%-d|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("Default d: |%d| (minus argument)\n", -42);
// printf_count = printf("Default d: |%d| (minus argument)\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
// //
// ft_printf_count = ft_printf("Default d with minus: |%-d| (minus argument)\n", -42);
// printf_count = printf("Default d with minus: |%-d| (minus argument)\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("With just the width (width <= string_len): |%0d|\n", 7);
// printf_count = printf("With just the width (width <= string_len): |%0d|\n", 7);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
// //
// ft_printf_count = ft_printf("With just the width (width > string_len): |%10d|\n", 123);
// printf_count = printf("With just the width (width > string_len): |%10d|\n", 123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("With just the width (width <= string_len): |%0d| (minus argument)\n", -7);
// printf_count = printf("With just the width (width <= string_len): |%0d| (minus argument)\n", -7);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
// //
// ft_printf_count = ft_printf("With just the width (width > string_len): |%10d| (minus argument)\n", -123);
// printf_count = printf("With just the width (width > string_len): |%10d| (minus argument)\n", -123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("With the width (width <= string_len) and zero flag: |%01d|\n", 7);
// printf_count = printf("With the width (width <= string_len) and zero flag: |%01d|\n", 7);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("With the width (width > string_len) and zero flag: |%0100d|\n", 123);
// printf_count = printf("With the width (width > string_len) and zero flag: |%0100d|\n", 123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
// //
// ft_printf_count = ft_printf("With the width (width <= string_len) and zero flag: |%01d|(minus argument)\n", -7);
// printf_count = printf("With the width (width <= string_len) and zero flag: |%01d|(minus argument)\n", -7);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
// //
// ft_printf_count = ft_printf("With the width (width > string_len) and zero flag: |%054d|(minus argument)\n", -123);
// printf_count = printf("With the width (width > string_len) and zero flag: |%054d|(minus argument)\n", -123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("With the width and minus flag: |%-24d|\n", 123);
// printf_count = printf("With the width and minus flag: |%-24d|\n", 123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("With the width and minus flag: |%-24d|(minus argument)\n", -123);
// printf_count = printf("With the width and minus flag: |%-24d|(minus argument)\n", -123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// printf("-----------width, precision, zero combined----------------\n");
// printf("---------minus can be combined with this test-------------\n");
// //예외
// ft_printf_count = ft_printf("Exception 0.0d with argument 0: |%0.0d|\n", 0);
// printf_count = printf("Exception 0.0d with argument 0: |%0.0d|\n", 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("0.1d: |%0.1d|\n", 1);
// printf_count = printf("0.1d: |%0.1d|\n", 1);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("0.12d: |%0.12d|\n", 12);
// printf_count = printf("0.12d: |%0.12d|\n", 12);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("1.0d: |%1.0d|\n", 42);
// printf_count = printf("1.0d: |%1.0d|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("12.0d: |%12.0d|\n", 42);
// printf_count = printf("12.0d: |%12.0d|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("0.7d: |%0.7d|\n", 1);
// printf_count = printf("0.7d: |%0.7d|\n", 1);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("width > precision > strlen: |%10.5d|\n", 123);
// printf_count = printf("width > precision > strlen: |%10.5d|\n", 123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("width > strlen > precision: |%10.1d|\n", 42);
// printf_count = printf("width > strlen > precision: |%10.1d|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("width > strlen >= precision: |%42.7d|\n", 1234567);
// printf_count = printf("width > strlen >= precision: |%42.7d|\n", 1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > width > strlen: |%5.7d|\n", 42);
// printf_count = printf("precision > width > strlen: |%5.7d|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > width >= strlen: |%2.7d|\n", 42);
// printf_count = printf("precision > width >= strlen: |%2.7d|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > width >= strlen: |%5.7d|\n", 12345);
// printf_count = printf("precision > width >= strlen: |%5.7d|\n", 12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > strlen > width: |%2.15d|\n", 12345);
// printf_count = printf("precision > strlen > width: |%2.15d|\n", 12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > strlen >= width: |%2.15d|\n", 42);
// printf_count = printf("precision > strlen >= width: |%2.15d|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > strlen >= width: |%5.15d|\n", 12345);
// printf_count = printf("precision > strlen >= width: |%5.15d|\n", 12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen > precision > width: |%3.4d|\n", 12345);
// printf_count = printf("strlen > precision > width: |%3.4d|\n", 12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen >= precision > width: |%3.5d|\n", 12345);
// printf_count = printf("strlen >= precision > width: |%3.5d|\n", 12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen > precision >= width: |%4.4d|\n", 12345);
// printf_count = printf("strlen > precision >= width: |%4.4d|\n", 12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen >= precision >= width: |%4.4d|\n", 1234);
// printf_count = printf("strlen >= precision >= width: |%4.4d|\n", 1234);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen > width > precision: |%6.4d|\n", 1234567);
// printf_count = printf("strlen > width > precision: |%6.4d|\n", 1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen >= width > precision: |%7.4d|\n", 1234567);
// printf_count = printf("strlen >= width > precision: |%7.4d|\n", 1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen > width >= precision: |%5.5d|\n", 1234567);
// printf_count = printf("strlen > width >= precision: |%5.5d|\n", 1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen >= width >= precision: |%7.7d|\n", 1234567);
// printf_count = printf("strlen >= width >= precision: |%7.7d|\n", 1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("0.1d: |%0.1d|\n", -1);
// printf_count = printf("0.1d: |%0.1d|\n", -1);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("0.12d: |%0.12d|\n", -12);
// printf_count = printf("0.12d: |%0.12d|\n", -12);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("1.0d: |%1.0d|\n", -42);
// printf_count = printf("1.0d: |%1.0d|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("12.0d: |%12.0d|\n", -42);
// printf_count = printf("12.0d: |%12.0d|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("0.7d: |%0.7d|\n", -1);
// printf_count = printf("0.7d: |%0.7d|\n", -1);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("width > precision > strlen: |%10.5d|\n", -123);
// printf_count = printf("width > precision > strlen: |%10.5d|\n", -123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("width > strlen > precision: |%10.1d|\n", -42);
// printf_count = printf("width > strlen > precision: |%10.1d|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("width > strlen >= precision: |%42.7d|\n", -1234567);
// printf_count = printf("width > strlen >= precision: |%42.7d|\n", -1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > width > strlen: |%5.7d|\n", -42);
// printf_count = printf("precision > width > strlen: |%5.7d|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > width >= strlen: |%2.7d|\n", -42);
// printf_count = printf("precision > width >= strlen: |%2.7d|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > width >= strlen: |%5.7d|\n", -12345);
// printf_count = printf("precision > width >= strlen: |%5.7d|\n", -12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > strlen > width: |%2.15d|\n", -12345);
// printf_count = printf("precision > strlen > width: |%2.15d|\n", -12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > strlen >= width: |%2.15d|\n", -42);
// printf_count = printf("precision > strlen >= width: |%2.15d|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > strlen >= width: |%5.15d|\n", -12345);
// printf_count = printf("precision > strlen >= width: |%5.15d|\n", -12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen > precision > width: |%3.4d|\n", -12345);
// printf_count = printf("strlen > precision > width: |%3.4d|\n", -12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen >= precision > width: |%3.5d|\n", -12345);
// printf_count = printf("strlen >= precision > width: |%3.5d|\n", -12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen > precision >= width: |%4.4d|\n", -12345);
// printf_count = printf("strlen > precision >= width: |%4.4d|\n", -12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen >= precision >= width: |%4.4d|\n", -1234);
// printf_count = printf("strlen >= precision >= width: |%4.4d|\n", -1234);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen > width > precision: |%6.4d|\n", -1234567);
// printf_count = printf("strlen > width > precision: |%6.4d|\n", -1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen >= width > precision: |%7.4d|\n", -1234567);
// printf_count = printf("strlen >= width > precision: |%7.4d|\n", -1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen > width >= precision: |%5.5d|\n", -1234567);
// printf_count = printf("strlen > width >= precision: |%5.5d|\n", -1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen >= width >= precision: |%7.7d|\n", -1234567);
// printf_count = printf("strlen >= width >= precision: |%7.7d|\n", -1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// printf("------------------just precision existed------------------\n");
// printf("---------minus can be combined with this test-------------\n");
// printf("----(it is the same with/without minus with this test)----\n");
//
// ft_printf_count = ft_printf("precision < strlen: |%.3d|\n", 1123);
// printf_count = printf("precision < strlen: |%.3d|\n", 1123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > strlen: |%.7d|\n", 1123);
// printf_count = printf("precision > strlen: |%.7d|\n", 1123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision <= strlen: |%.4d|\n", 1123);
// printf_count = printf("precision <= strlen: |%.4d|\n", 1123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision < strlen: |%.3d|\n", 0);
// printf_count = printf("precision < strlen: |%.3d|\n", 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > strlen: |%.7d|\n", 0);
// printf_count = printf("precision > strlen: |%.7d|\n", 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision <= strlen: |%.4d|\n", 0);
// printf_count = printf("precision <= strlen: |%.4d|\n", 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision < strlen: |%.3d|\n", -1123);
// printf_count = printf("precision < strlen: |%.3d|\n", -1123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > strlen: |%.7d|\n", -1123);
// printf_count = printf("precision > strlen: |%.7d|\n", -1123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision <= strlen: |%.4d|\n", -1123);
// printf_count = printf("precision <= strlen: |%.4d|\n", -1123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);

// printf("------------------ * test ------------------\n");

// int field_width_0 = 0;
// int field_width_1 = 7;
// int field_width_2 = 42;
// int field_width_3 = 123;
// int field_width_4 = 1000;
// int field_width_minus_1 = -7;
// int field_width_minus_2 = -42;
// int field_width_minus_3 = -123;
// int field_width_minus_4 = -1000;

//
// int precision_0 = 0;
// int precision_1 = 7;
// int precision_2 = 42;
// int precision_3 = 123;
// int precision_4 = 1000;
// int precision_minus_1 = -7;
// int precision_minus_2 = -42;
// int precision_minus_3 = -123;
// int precision_minus_4 = -1000;

// ft_printf_count = ft_printf("|%*d|\n", field_width_0, 42);
// printf_count = printf("|%*d|\n", field_width_0, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);

// ft_printf_count = ft_printf("|%*d|\n", field_width_1, 42);
// printf_count = printf("|%*d|\n", field_width_1, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*d|\n", field_width_2, 42);
// printf_count = printf("|%*d|\n", field_width_2, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*d|\n", field_width_3, 42);
// printf_count = printf("|%*d|\n", field_width_3, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*d|\n", field_width_4, 42);
// printf_count = printf("|%*d|\n", field_width_4, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*d|\n", field_width_minus_1, 42);
// printf_count = printf("|%*d|\n", field_width_minus_1, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*d|\n", field_width_minus_2, 42);
// printf_count = printf("|%*d|\n", field_width_minus_2, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*d|\n", field_width_minus_3, 42);
// printf_count = printf("|%*d|\n", field_width_minus_3, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*d|\n", field_width_minus_4, 42);
// printf_count = printf("|%*d|\n", field_width_minus_4, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);

// ft_printf_count = ft_printf("|%.*d|\n", precision_0, 42);
// printf_count = printf("|%.*d|\n", precision_0, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
// //
// ft_printf_count = ft_printf("|%.*d|\n", precision_1, 42);
// printf_count = printf("|%.*d|\n", precision_1, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%.*d|\n", precision_2, 42);
// printf_count = printf("|%.*d|\n", precision_2, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%.*d|\n", precision_3, 42);
// printf_count = printf("|%.*d|\n", precision_3, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%.*d|\n", precision_4, 42);
// printf_count = printf("|%.*d|\n", precision_4, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%.*d|\n", precision_minus_1, 42);
// printf_count = printf("|%.*d|\n", precision_minus_1, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%.*d|\n", precision_minus_2, 42);
// printf_count = printf("|%.*d|\n", precision_minus_2, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%.*d|\n", precision_minus_3, 42);
// printf_count = printf("|%.*d|\n", precision_minus_3, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%.*d|\n", precision_minus_4, 42);
// printf_count = printf("|%.*d|\n", precision_minus_4, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);

// ft_printf_count = ft_printf("|%*.*d|\n", field_width_0, precision_minus_1, -7);
// printf_count = printf("|%*.*d|\n", field_width_0, precision_minus_1, -7);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*.*d|\n", field_width_minus_1, precision_minus_1, -7);
// printf_count = printf("|%*.*d|\n", field_width_minus_1, precision_minus_1, -7);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*.*d|\n", field_width_minus_2, precision_minus_1, -7);
// printf_count = printf("|%*.*d|\n", field_width_minus_2, precision_minus_1, -7);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*.*d|\n", field_width_minus_3, precision_minus_1, -7);
// printf_count = printf("|%*.*d|\n", field_width_minus_3, precision_minus_1, -7);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*.*d|\n", field_width_minus_4, precision_minus_1, -7);
// printf_count = printf("|%*.*d|\n", field_width_minus_4, precision_minus_1, -7);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);

// ft_printf_count = ft_printf("|%-*.*d|\n", field_width_0, precision_0, 0);
// printf_count = printf("|%-*.*d|\n", field_width_0, precision_0, 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);

// printf("===============================================================\n");

// printf("======================  [%%u test]   =====================\n");
//
// ft_printf_count = ft_printf("default u with more than 0: |%u|\n", 42);
// printf_count = printf("default u with more than 0: |%u|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("default u with 0: |%u|\n", 0);
// printf_count = printf("default u with 0: |%u|\n", 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("default u with less than 0: |%u|\n", -42);
// printf_count = printf("default u with less than 0: |%u|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("default u with more than 0 and with - flag: |%-u|\n", 42);
// printf_count = printf("default u with more than 0 and with - flag: |%-u|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("default u with 0 and with - flag: |%-u|\n", 0);
// printf_count = printf("default u with 0 and with - flag: |%-u|\n", 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("default u with less than 0 and with - flag: |%-u|\n", -42);
// printf_count = printf("default u with less than 0 and with - flag: |%-u|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("u with the width: |%10u|\n", 42);
// printf_count = printf("u with the width: |%10u|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("u with the width and 0: |%u|\n", 0);
// printf_count = printf("u with the width and 0: |%u|\n", 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
// //
// ft_printf_count = ft_printf("u with the width and minus argu: |%12u|\n", -42);
// printf_count = printf("u with the width and minus argu: |%12u|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("u with the width and the minus: |%-10u|\n", 42);
// printf_count = printf("u with the width and the minus: |%-10u|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("u with the width and 0 and the minus: |%-u|\n", 0);
// printf_count = printf("u with the width and 0 and the minus: |%-u|\n", 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
// //
// ft_printf_count = ft_printf("u with the width and minus argu and the minus: |%-12u|\n", -42);
// printf_count = printf("u with the width and minus argu and the minus: |%-12u|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("u with the width and the 0 flag: |%02u|\n", 42);
// printf_count = printf("u with the width and the 0 flag: |%02u|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("u with the width and 0 and the 0 flag: |%0u|\n", 0);
// printf_count = printf("u with the width and 0 and the 0 flag: |%0u|\n", 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
// //
// ft_printf_count = ft_printf("u with the width and minus argu and the 0 flag: |%05u|\n", -42);
// printf_count = printf("u with the width and minus argu and the 0 flag: |%05u|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// //에외
// ft_printf_count = ft_printf("Exception: |%.0u|\n", 0);
// printf_count = printf("Exception: |%.0u|\n", 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
// //예외
// ft_printf_count = ft_printf("Exception: |%0.0u|\n", 0);
// printf_count = printf("Exception: |%0.0u|\n", 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%2.5u|\n", 42);
// printf_count = printf("|%2.5u|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%2.5u|\n", 0);
// printf_count = printf("|%2.5u|\n", 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%2.5u|\n", -42);
// printf_count = printf("|%2.5u|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%2.20u|\n", -42);
// printf_count = printf("|%2.20u|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%5.2u|\n", 42);
// printf_count = printf("|%5.2u|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%5.2u|\n", 0);
// printf_count = printf("|%5.2u|\n", 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%5.2u|\n", -42);
// printf_count = printf("|%5.2u|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%21.2u|\n", -42);
// printf_count = printf("|%21.2u|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%02.5u|\n", 42);
// printf_count = printf("|%02.5u|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%02.5u|\n", 0);
// printf_count = printf("|%02.5u|\n", 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%02.5u|\n", -42);
// printf_count = printf("|%02.5u|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%02.20u|\n", -42);
// printf_count = printf("|%02.20u|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%05.2u|\n", 42);
// printf_count = printf("|%05.2u|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%05.2u|\n", 0);
// printf_count = printf("|%05.2u|\n", 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%05.2u|\n", -42);
// printf_count = printf("|%05.2u|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%021.2u|\n", -42);
// printf_count = printf("|%021.2u|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// printf("-----------width, precision, zero combined----------------\n");
// printf("--------- -flag can be combined with this test-------------\n");
// //예외
// ft_printf_count = ft_printf("Exception 0.0d with argument 0: |%0.0u|\n", 0);
// printf_count = printf("Exception 0.0d with argument 0: |%0.0u|\n", 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("0.1d: |%0.1u|\n", 1);
// printf_count = printf("0.1d: |%0.1u|\n", 1);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("0.12d: |%0.12u|\n", 12);
// printf_count = printf("0.12d: |%0.12u|\n", 12);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("1.0d: |%1.0u|\n", 42);
// printf_count = printf("1.0d: |%1.0u|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("12.0d: |%12.0u|\n", 42);
// printf_count = printf("12.0d: |%12.0u|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("0.7d: |%0.7u|\n", 1);
// printf_count = printf("0.7d: |%0.7u|\n", 1);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("width > precision > strlen: |%10.5u|\n", 123);
// printf_count = printf("width > precision > strlen: |%10.5u|\n", 123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("width > strlen > precision: |%10.1u|\n", 42);
// printf_count = printf("width > strlen > precision: |%10.1u|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("width > strlen >= precision: |%42.7u|\n", 1234567);
// printf_count = printf("width > strlen >= precision: |%42.7u|\n", 1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > width > strlen: |%5.7u|\n", 42);
// printf_count = printf("precision > width > strlen: |%5.7u|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > width >= strlen: |%2.7u|\n", 42);
// printf_count = printf("precision > width >= strlen: |%2.7u|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > width >= strlen: |%5.7u|\n", 12345);
// printf_count = printf("precision > width >= strlen: |%5.7u|\n", 12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > strlen > width: |%2.15u|\n", 12345);
// printf_count = printf("precision > strlen > width: |%2.15u|\n", 12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > strlen >= width: |%2.15u|\n", 42);
// printf_count = printf("precision > strlen >= width: |%2.15u|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > strlen >= width: |%5.15u|\n", 12345);
// printf_count = printf("precision > strlen >= width: |%5.15u|\n", 12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen > precision > width: |%3.4u|\n", 12345);
// printf_count = printf("strlen > precision > width: |%3.4u|\n", 12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen >= precision > width: |%3.5u|\n", 12345);
// printf_count = printf("strlen >= precision > width: |%3.5u|\n", 12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen > precision >= width: |%4.4u|\n", 12345);
// printf_count = printf("strlen > precision >= width: |%4.4u|\n", 12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen >= precision >= width: |%4.4u|\n", 1234);
// printf_count = printf("strlen >= precision >= width: |%4.4u|\n", 1234);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen > width > precision: |%6.4u|\n", 1234567);
// printf_count = printf("strlen > width > precision: |%6.4u|\n", 1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen >= width > precision: |%7.4u|\n", 1234567);
// printf_count = printf("strlen >= width > precision: |%7.4u|\n", 1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen > width >= precision: |%5.5u|\n", 1234567);
// printf_count = printf("strlen > width >= precision: |%5.5u|\n", 1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen >= width >= precision: |%7.7u|\n", 1234567);
// printf_count = printf("strlen >= width >= precision: |%7.7u|\n", 1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("0.1d: |%0.1u|\n", -1);
// printf_count = printf("0.1d: |%0.1u|\n", -1);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("0.12d: |%0.12u|\n", -12);
// printf_count = printf("0.12d: |%0.12u|\n", -12);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("1.0d: |%1.0u|\n", -42);
// printf_count = printf("1.0d: |%1.0u|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("12.0d: |%12.0u|\n", -42);
// printf_count = printf("12.0d: |%12.0u|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("0.7d: |%0.7u|\n", -1);
// printf_count = printf("0.7d: |%0.7u|\n", -1);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("width > precision > strlen: |%10.5u|\n", -123);
// printf_count = printf("width > precision > strlen: |%10.5u|\n", -123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("width > strlen > precision: |%10.1u|\n", -42);
// printf_count = printf("width > strlen > precision: |%10.1u|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("width > strlen >= precision: |%42.7u|\n", -1234567);
// printf_count = printf("width > strlen >= precision: |%42.7u|\n", -1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > width > strlen: |%5.7u|\n", -42);
// printf_count = printf("precision > width > strlen: |%5.7u|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > width >= strlen: |%2.7u|\n", -42);
// printf_count = printf("precision > width >= strlen: |%2.7u|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > width >= strlen: |%5.7u|\n", -12345);
// printf_count = printf("precision > width >= strlen: |%5.7u|\n", -12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > strlen > width: |%2.15u|\n", -12345);
// printf_count = printf("precision > strlen > width: |%2.15u|\n", -12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > strlen >= width: |%2.15u|\n", -42);
// printf_count = printf("precision > strlen >= width: |%2.15u|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > strlen >= width: |%5.15u|\n", -12345);
// printf_count = printf("precision > strlen >= width: |%5.15u|\n", -12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen > precision > width: |%3.4u|\n", -12345);
// printf_count = printf("strlen > precision > width: |%3.4u|\n", -12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen >= precision > width: |%3.5u|\n", -12345);
// printf_count = printf("strlen >= precision > width: |%3.5u|\n", -12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen > precision >= width: |%4.4u|\n", -12345);
// printf_count = printf("strlen > precision >= width: |%4.4u|\n", -12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen >= precision >= width: |%4.4u|\n", -1234);
// printf_count = printf("strlen >= precision >= width: |%4.4u|\n", -1234);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen > width > precision: |%6.4u|\n", -1234567);
// printf_count = printf("strlen > width > precision: |%6.4u|\n", -1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen >= width > precision: |%7.4u|\n", -1234567);
// printf_count = printf("strlen >= width > precision: |%7.4u|\n", -1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen > width >= precision: |%5.5u|\n", -1234567);
// printf_count = printf("strlen > width >= precision: |%5.5u|\n", -1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen >= width >= precision: |%7.7u|\n", -1234567);
// printf_count = printf("strlen >= width >= precision: |%7.7u|\n", -1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// printf("------------------just precision existed------------------\n");
// printf("---------minus can be combined with this test-------------\n");
// printf("----(it is the same with/without minus with this test)----\n");
//
// ft_printf_count = ft_printf("precision < strlen: |%.3u|\n", 1123);
// printf_count = printf("precision < strlen: |%.3u|\n", 1123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > strlen: |%.7u|\n", 1123);
// printf_count = printf("precision > strlen: |%.7u|\n", 1123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision <= strlen: |%.4u|\n", 1123);
// printf_count = printf("precision <= strlen: |%.4u|\n", 1123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision < strlen: |%.3u|\n", 0);
// printf_count = printf("precision < strlen: |%.3u|\n", 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > strlen: |%.7u|\n", 0);
// printf_count = printf("precision > strlen: |%.7u|\n", 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision <= strlen: |%.4u|\n", 0);
// printf_count = printf("precision <= strlen: |%.4u|\n", 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision < strlen: |%.3u|\n", -1123);
// printf_count = printf("precision < strlen: |%.3u|\n", -1123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > strlen: |%.7u|\n", -1123);
// printf_count = printf("precision > strlen: |%.7u|\n", -1123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision <= strlen: |%.4u|\n", -1123);
// printf_count = printf("precision <= strlen: |%.4u|\n", -1123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// printf("------------------ * test ------------------\n");
//
// int field_width_0 = 0;
// int field_width_1 = 7;
// int field_width_2 = 42;
// int field_width_3 = 123;
// int field_width_4 = 1000;
// int field_width_minus_1 = -7;
// int field_width_minus_2 = -42;
// int field_width_minus_3 = -123;
// int field_width_minus_4 = -1000;
//
//
// int precision_0 = 0;
// int precision_1 = 7;
// int precision_2 = 42;
// int precision_3 = 123;
// int precision_4 = 1000;
// int precision_minus_1 = -7;
// int precision_minus_2 = -42;
// int precision_minus_3 = -123;
// int precision_minus_4 = -1000;
//
// ft_printf_count = ft_printf("|%*u|\n", field_width_0, 42);
// printf_count = printf("|%*u|\n", field_width_0, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*u|\n", field_width_1, 42);
// printf_count = printf("|%*u|\n", field_width_1, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*u|\n", field_width_2, 42);
// printf_count = printf("|%*u|\n", field_width_2, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*u|\n", field_width_3, 42);
// printf_count = printf("|%*u|\n", field_width_3, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*u|\n", field_width_4, 42);
// printf_count = printf("|%*u|\n", field_width_4, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*u|\n", field_width_minus_1, 42);
// printf_count = printf("|%*u|\n", field_width_minus_1, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*u|\n", field_width_minus_2, 42);
// printf_count = printf("|%*u|\n", field_width_minus_2, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*u|\n", field_width_minus_3, 42);
// printf_count = printf("|%*u|\n", field_width_minus_3, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*u|\n", field_width_minus_4, 42);
// printf_count = printf("|%*u|\n", field_width_minus_4, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%.*u|\n", precision_0, 42);
// printf_count = printf("|%.*u|\n", precision_0, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
// //
// ft_printf_count = ft_printf("|%.*u|\n", precision_1, 42);
// printf_count = printf("|%.*u|\n", precision_1, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%.*u|\n", precision_2, 42);
// printf_count = printf("|%.*u|\n", precision_2, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%.*u|\n", precision_3, 42);
// printf_count = printf("|%.*u|\n", precision_3, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%.*u|\n", precision_4, 42);
// printf_count = printf("|%.*u|\n", precision_4, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%.*u|\n", precision_minus_1, 42);
// printf_count = printf("|%.*u|\n", precision_minus_1, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%.*u|\n", precision_minus_2, 42);
// printf_count = printf("|%.*u|\n", precision_minus_2, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%.*u|\n", precision_minus_3, 42);
// printf_count = printf("|%.*u|\n", precision_minus_3, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%.*u|\n", precision_minus_4, 42);
// printf_count = printf("|%.*u|\n", precision_minus_4, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*.*u|\n", field_width_0, precision_minus_1, -7);
// printf_count = printf("|%*.*u|\n", field_width_0, precision_minus_1, -7);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*.*u|\n", field_width_minus_1, precision_minus_1, -7);
// printf_count = printf("|%*.*u|\n", field_width_minus_1, precision_minus_1, -7);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*.*u|\n", field_width_minus_2, precision_minus_1, -7);
// printf_count = printf("|%*.*u|\n", field_width_minus_2, precision_minus_1, -7);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*.*u|\n", field_width_minus_3, precision_minus_1, -7);
// printf_count = printf("|%*.*u|\n", field_width_minus_3, precision_minus_1, -7);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*.*u|\n", field_width_minus_4, precision_minus_1, -7);
// printf_count = printf("|%*.*u|\n", field_width_minus_4, precision_minus_1, -7);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%-*.*u|\n", field_width_0, precision_0, 0);
// printf_count = printf("|%-*.*u|\n", field_width_0, precision_0, 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// printf("==========================================================\n");
// printf("======================  [%%p test]   =====================\n");
//
// int a = 42;
// void *p_int;
// p_int = &a;
//
// char b = 'c';
// char *p_str;
// p_str = &b;
//
// float c = 2.42;
// float *p_float;
// p_float = &c;
//
// double d = 2.42;
// double *p_double;
// p_double = &d;

// ft_printf_count = ft_printf("default p: |%p|\n", p_int);
// printf_count = printf("default p: |%p|\n", p_int);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("default p: |%p|\n", p_str);
// printf_count = printf("default p: |%p|\n", p_str);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("default p: |%p|\n", p_float);
// printf_count = printf("default p: |%p|\n", p_float);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("default p: |%p|\n", p_double);
// printf_count = printf("default p: |%p|\n", p_double);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);

// ft_printf_count = ft_printf("default p: |%5p|\n", p_int);
// printf_count = printf("default p: |%5p|\n", p_int);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("default p: |%5p|\n", p_str);
// printf_count = printf("default p: |%5p|\n", p_str);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("default p: |%5p|\n", p_float);
// printf_count = printf("default p: |%5p|\n", p_float);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("default p: |%5p|\n", p_double);
// printf_count = printf("default p: |%5p|\n", p_double);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("default p: |%42p|\n", p_int);
// printf_count = printf("default p: |%42p|\n", p_int);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("default p: |%42p|\n", p_str);
// printf_count = printf("default p: |%42p|\n", p_str);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("default p: |%42p|\n", p_float);
// printf_count = printf("default p: |%42p|\n", p_float);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("default p: |%42p|\n", p_double);
// printf_count = printf("default p: |%42p|\n", p_double);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);

// ft_printf_count = ft_printf("default p: |%-5p|\n", p_int);
// printf_count = printf("default p: |%-5p|\n", p_int);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("default p: |%-5p|\n", p_str);
// printf_count = printf("default p: |%-5p|\n", p_str);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("default p: |%-5p|\n", p_float);
// printf_count = printf("default p: |%-5p|\n", p_float);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("default p: |%-5p|\n", p_double);
// printf_count = printf("default p: |%-5p|\n", p_double);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("default p: |%-42p|\n", p_int);
// printf_count = printf("default p: |%-42p|\n", p_int);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("default p: |%-42p|\n", p_str);
// printf_count = printf("default p: |%-42p|\n", p_str);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("default p: |%-42p|\n", p_float);
// printf_count = printf("default p: |%-42p|\n", p_float);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("default p: |%-42p|\n", p_double);
// printf_count = printf("default p: |%-42p|\n", p_double);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// printf("------------------ * test ------------------\n");
//
// int field_width_0 = 0;
// int field_width_1 = 7;
// int field_width_2 = 42;
// int field_width_3 = 123;
// int field_width_4 = 1000;
// int field_width_minus_1 = -7;
// int field_width_minus_2 = -42;
// int field_width_minus_3 = -123;
// int field_width_minus_4 = -1000;
//
// ft_printf_count = ft_printf("default p: |%*p|\n", field_width_0, p_int);
// printf_count = printf("default p: |%*p|\n", field_width_0, p_int);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("default p: |%*p|\n", field_width_1, p_str);
// printf_count = printf("default p: |%*p|\n", field_width_1, p_str);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("default p: |%*p|\n", field_width_2, p_float);
// printf_count = printf("default p: |%*p|\n", field_width_2, p_float);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("default p: |%*p|\n", field_width_3, p_double);
// printf_count = printf("default p: |%*p|\n", field_width_3, p_double);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("default p: |%*p|\n", field_width_4, p_double);
// printf_count = printf("default p: |%*p|\n", field_width_4, p_double);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("default p: |%*p|\n", field_width_minus_1, p_double);
// printf_count = printf("default p: |%*p|\n", field_width_minus_1, p_double);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("default p: |%*p|\n", field_width_minus_2, p_double);
// printf_count = printf("default p: |%*p|\n", field_width_minus_2, p_double);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("default p: |%*p|\n", field_width_minus_3, p_double);
// printf_count = printf("default p: |%*p|\n", field_width_minus_3, p_double);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("default p: |%*p|\n", field_width_minus_4, p_double);
// printf_count = printf("default p: |%*p|\n", field_width_minus_4, p_double);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// printf("==========================================================\n");
//
// printf("======================  [%%x test]   =====================\n");
//
// printf("--------------------- default test ----------------------\n");
// printf("---------minus can be combined with this test-------------\n");
//
// ft_printf_count = ft_printf("Default x: |%x|\n", 42);
// printf_count = printf("Default x: |%x|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("Default x(with -flag): |%-x|\n", 42);
// printf_count = printf("Default x(with -flag): |%-x|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("Default x (with argument as 0): |%x|\n", 0);
// printf_count = printf("Default x (with argument as 0): |%x|\n", 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("Default x(argument with 0 and with -flag): |%-x|\n", 0);
// printf_count = printf("Default x(argument with 0 and with -flag): |%-x|\n", 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("Default x(with minus argument): |%x|\n", -42);
// printf_count = printf("Default x(with minus argument): |%x|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("Default x(with -flag and minus argument): |%-x|\n", -42);
// printf_count = printf("Default x(with -flag and minus argument): |%-x|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// printf("--------------------- exception test ----------------------\n");
// // 에외
// ft_printf_count = ft_printf("Exception: |%.0x|\n", 0);
// printf_count = printf("Exception: |%.0x|\n", 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
// //예외
// ft_printf_count = ft_printf("Exception: |%0.0x|\n", 0);
// printf_count = printf("Exception: |%0.0x|\n", 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// printf("-------the width case with the -flag and the 0 flag-------\n");
// printf("--------------also with negative argument------------------\n");
//
// ft_printf_count = ft_printf("x with the width(width > strlen): |%5x|\n", 42);
// printf_count = printf("x with the width(width > strlen): |%5x|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width = strlen): |%5x|\n", 135790);
// printf_count = printf("x with the width(width = strlen): |%5x|\n", 135790);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width < strlen): |%3x|\n", 135790);
// printf_count = printf("x with the width(width < strlen): |%3x|\n", 135790);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width > strlen) and width 0 flag: |%05x|\n", 42);
// printf_count = printf("x with the width(width > strlen) and width 0 flag: |%05x|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width = strlen) and width 0 flag: |%05x|\n", 135790);
// printf_count = printf("x with the width(width = strlen) and width 0 flag: |%05x|\n", 135790);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width < strlen) and width 0 flag: |%03x|\n", 135790);
// printf_count = printf("x with the width(width < strlen) and width 0 flag: |%03x|\n", 135790);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width > strlen) and width - flag: |%-5x|\n", 42);
// printf_count = printf("x with the width(width > strlen) and width - flag: |%-5x|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width = strlen) and width - flag: |%-5x|\n", 135790);
// printf_count = printf("x with the width(width = strlen) and width - flag: |%-5x|\n", 135790);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width < strlen) and width - flag: |%-3x|\n", 135790);
// printf_count = printf("x with the width(width < strlen) and width - flag: |%-3x|\n", 135790);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width > strlen)(with neg argu): |%10x|\n", -42);
// printf_count = printf("x with the width(width > strlen)(with neg argu): |%10x|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width = strlen)(with neg argu): |%8x|\n", -135790);
// printf_count = printf("x with the width(width = strlen)(with neg argu): |%8x|\n", -135790);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width < strlen)(with neg argu): |%3x|\n", -135790);
// printf_count = printf("x with the width(width < strlen)(with neg argu): |%3x|\n", -135790);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width > strlen) and width 0 flag(with neg argu): |%021x|\n", -42);
// printf_count = printf("x with the width(width > strlen) and width 0 flag(with neg argu): |%021x|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width = strlen) and width 0 flag(with neg argu): |%08x|\n", -135790);
// printf_count = printf("x with the width(width = strlen) and width 0 flag(with neg argu): |%08x|\n", -135790);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width < strlen) and width 0 flag(with neg argu): |%03x|\n", -135790);
// printf_count = printf("x with the width(width < strlen) and width 0 flag(with neg argu): |%03x|\n", -135790);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width > strlen) and width - flag(with neg argu): |%-10x|\n", -42);
// printf_count = printf("x with the width(width > strlen) and width - flag(with neg argu): |%-10x|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width = strlen) and width - flag(with neg argu): |%-8x|\n", -135790);
// printf_count = printf("x with the width(width = strlen) and width - flag(with neg argu): |%-8x|\n", -135790);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width < strlen) and width - flag(with neg argu): |%-3x|\n", -135790);
// printf_count = printf("x with the width(width < strlen) and width - flag(with neg argu): |%-3x|\n", -135790);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// printf("------------------width, precision existed----------------\n");
// printf("------ 0flag and -flag can be combined with this test------\n");
// printf("----(it is the same with/without 0 flog in this test)----\n");
//
// ft_printf_count = ft_printf("0.1d: |%0.1x|\n", 1);
// printf_count = printf("0.1d: |%0.1x|\n", 1);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("0.12d: |%0.12x|\n", 12);
// printf_count = printf("0.12d: |%0.12x|\n", 12);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("1.0d: |%1.0x|\n", 42);
// printf_count = printf("1.0d: |%1.0x|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("12.0d: |%12.0x|\n", 42);
// printf_count = printf("12.0d: |%12.0x|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("0.7d: |%0.7x|\n", 1);
// printf_count = printf("0.7d: |%0.7x|\n", 1);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("width > precision > strlen: |%10.4x|\n", 123);
// printf_count = printf("width > precision > strlen: |%10.4x|\n", 123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("width > strlen > precision: |%10.1x|\n", 1234567);
// printf_count = printf("width > strlen > precision: |%10.1x|\n", 1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("width > strlen >= precision: |%42.7x|\n", 1234567);
// printf_count = printf("width > strlen >= precision: |%42.7x|\n", 1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > width > strlen: |%5.7x|\n", 42);
// printf_count = printf("precision > width > strlen: |%5.7x|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
// //
// ft_printf_count = ft_printf("precision > width >= strlen: |%2.7x|\n", 42);
// printf_count = printf("precision > width >= strlen: |%2.7x|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
// //
// ft_printf_count = ft_printf("precision > width >= strlen: |%4.7x|\n", 12345);
// printf_count = printf("precision > width >= strlen: |%4.7x|\n", 12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > strlen > width: |%2.15x|\n", 12345);
// printf_count = printf("precision > strlen > width: |%2.15x|\n", 12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > strlen >= width: |%2.15x|\n", 42);
// printf_count = printf("precision > strlen >= width: |%2.15x|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > strlen >= width: |%4.15x|\n", 12345);
// printf_count = printf("precision > strlen >= width: |%4.15x|\n", 12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen > precision > width: |%3.4x|\n", 1234567);
// printf_count = printf("strlen > precision > width: |%3.4x|\n", 1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen >= precision > width: |%3.6x|\n", 1234567);
// printf_count = printf("strlen >= precision > width: |%3.6x|\n", 1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen > precision >= width: |%4.4x|\n", 1234567);
// printf_count = printf("strlen > precision >= width: |%4.4x|\n", 1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen >= precision >= width: |%6.6x|\n", 1234567);
// printf_count = printf("strlen >= precision >= width: |%6.6x|\n", 1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
// //
// ft_printf_count = ft_printf("strlen > width > precision: |%5.4x|\n", 1234567);
// printf_count = printf("strlen > width > precision: |%5.4x|\n", 1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen >= width > precision: |%6.4x|\n", 1234567);
// printf_count = printf("strlen >= width > precision: |%6.4x|\n", 1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen > width >= precision: |%5.5x|\n", 1234567);
// printf_count = printf("strlen > width >= precision: |%5.5x|\n", 1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen >= width >= precision: |%6.6x|\n", 1234567);
// printf_count = printf("strlen >= width >= precision: |%6.6x|\n", 1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("0.1d: |%0.1x|\n", -1);
// printf_count = printf("0.1d: |%0.1x|\n", -1);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("0.12d: |%0.12x|\n", -12);
// printf_count = printf("0.12d: |%0.12x|\n", -12);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("1.0d: |%1.0x|\n", -42);
// printf_count = printf("1.0d: |%1.0x|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("12.0d: |%12.0x|\n", -42);
// printf_count = printf("12.0d: |%12.0x|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("0.7d: |%0.7x|\n", -1);
// printf_count = printf("0.7d: |%0.7x|\n", -1);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("width > precision > strlen: |%15.10x|\n", -123);
// printf_count = printf("width > precision > strlen: |%15.10x|\n", -123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("width > strlen > precision: |%15.2x|\n", -42);
// printf_count = printf("width > strlen > precision: |%15.2x|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("width > strlen >= precision: |%42.7x|\n", -1234567);
// printf_count = printf("width > strlen >= precision: |%42.7x|\n", -1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
// //
//
// ft_printf_count = ft_printf("width > strlen = precision: |%42.8x|\n", -1234567);
// printf_count = printf("width > strlen = precision: |%42.8x|\n", -1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > width > strlen: |%10.12x|\n", -42);
// printf_count = printf("precision > width > strlen: |%10.12x|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
// //
// ft_printf_count = ft_printf("precision > width = strlen: |%8.12x|\n", -42);
// printf_count = printf("precision > width = strlen: |%8.12x|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > width >= strlen: |%8.12x|\n", -12345);
// printf_count = printf("precision > width >= strlen: |%8.12x|\n", -12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > strlen > width: |%2.15x|\n", -123456789);
// printf_count = printf("precision > strlen > width: |%2.15x|\n", -123456789);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
// //
// ft_printf_count = ft_printf("precision > strlen = width: |%8.15x|\n", -123456789);
// printf_count = printf("precision > strlen = width: |%8.15x|\n", -123456789);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > strlen >= width: |%5.15x|\n", -12345);
// printf_count = printf("precision > strlen >= width: |%5.15x|\n", -12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen > precision > width: |%3.4x|\n", -12345);
// printf_count = printf("strlen > precision > width: |%3.4x|\n", -12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen = precision > width: |%3.8x|\n", -12345);
// printf_count = printf("strlen = precision > width: |%3.8x|\n", -12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen > precision = width: |%4.4x|\n", -12345);
// printf_count = printf("strlen > precision = width: |%4.4x|\n", -12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen = precision = width: |%8.8x|\n", -1234);
// printf_count = printf("strlen = precision = width: |%8.8x|\n", -1234);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen > width > precision: |%6.4x|\n", -1234567);
// printf_count = printf("strlen > width > precision: |%6.4x|\n", -1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen = width > precision: |%8.4x|\n", -1234567);
// printf_count = printf("strlen = width > precision: |%8.4x|\n", -1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen > width = precision: |%5.5x|\n", -1234567);
// printf_count = printf("strlen > width = precision: |%5.5x|\n", -1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen = width = precision: |%8.8x|\n", -1234567);
// printf_count = printf("strlen = width = precision: |%8.8x|\n", -1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// printf("------------------just precision existed----------------\n");
// printf("------ 0flag and -flag can be combined with this test------\n");
//
// ft_printf_count = ft_printf("precision > strlen: |%.10x|\n", 42);
// printf_count = printf("precision > strlen: |%.10x|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision < strlen: |%.2x|\n", 1123);
// printf_count = printf("precision < strlen: |%.2x|\n", 1123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision = strlen: |%.3x|\n", 1123);
// printf_count = printf("precision = strlen: |%.3x|\n", 1123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf(" .3x with argument 0 : |%.3x|\n", 0);
// printf_count = printf(" .3x with argument 0 : |%.3x|\n", 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf(".7x with argument 0: |%.7x|\n", 0);
// printf_count = printf(".7x with argument 0: |%.7x|\n", 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf(".4x with argument0: |%.4x|\n", 0);
// printf_count = printf(".4x with argument0: |%.4x|\n", 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision < strlen: |%.3x|\n", -1123);
// printf_count = printf("precision < strlen: |%.3x|\n", -1123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > strlen: |%.12x|\n", -1123);
// printf_count = printf("precision > strlen: |%.12x|\n", -1123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision = strlen: |%.8x|\n", -1123);
// printf_count = printf("precision = strlen: |%.8x|\n", -1123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// printf("------------------ * test ------------------\n");
//
// int field_width_0 = 0;
// int field_width_1 = 7;
// int field_width_2 = 42;
// int field_width_3 = 123;
// int field_width_4 = 1000;
// int field_width_minus_1 = -7;
// int field_width_minus_2 = -42;
// int field_width_minus_3 = -123;
// int field_width_minus_4 = -1000;
// //
// //
// int precision_0 = 0;
// int precision_1 = 7;
// int precision_2 = 42;
// int precision_3 = 123;
// int precision_4 = 1000;
// int precision_minus_1 = -7;
// int precision_minus_2 = -42;
// int precision_minus_3 = -123;
// int precision_minus_4 = -1000;
//
// ft_printf_count = ft_printf("|%*x|\n", field_width_0, 42);
// printf_count = printf("|%*x|\n", field_width_0, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*x|\n", field_width_1, 42);
// printf_count = printf("|%*x|\n", field_width_1, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*x|\n", field_width_2, 42);
// printf_count = printf("|%*x|\n", field_width_2, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*x|\n", field_width_3, 42);
// printf_count = printf("|%*x|\n", field_width_3, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*x|\n", field_width_4, 42);
// printf_count = printf("|%*x|\n", field_width_4, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*x|\n", field_width_minus_1, 42);
// printf_count = printf("|%*x|\n", field_width_minus_1, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*x|\n", field_width_minus_2, 42);
// printf_count = printf("|%*x|\n", field_width_minus_2, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*x|\n", field_width_minus_3, 42);
// printf_count = printf("|%*x|\n", field_width_minus_3, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*x|\n", field_width_minus_4, 42);
// printf_count = printf("|%*x|\n", field_width_minus_4, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%.*x|\n", precision_0, 42);
// printf_count = printf("|%.*x|\n", precision_0, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
// //
// ft_printf_count = ft_printf("|%.*x|\n", precision_1, 42);
// printf_count = printf("|%.*x|\n", precision_1, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%.*x|\n", precision_2, 42);
// printf_count = printf("|%.*x|\n", precision_2, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%.*x|\n", precision_3, 42);
// printf_count = printf("|%.*x|\n", precision_3, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%.*x|\n", precision_4, 42);
// printf_count = printf("|%.*x|\n", precision_4, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%.*x|\n", precision_minus_1, 42);
// printf_count = printf("|%.*x|\n", precision_minus_1, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%.*x|\n", precision_minus_2, 42);
// printf_count = printf("|%.*x|\n", precision_minus_2, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%.*x|\n", precision_minus_3, 42);
// printf_count = printf("|%.*x|\n", precision_minus_3, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%.*x|\n", precision_minus_4, 42);
// printf_count = printf("|%.*x|\n", precision_minus_4, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*.*x|\n", field_width_0, precision_minus_1, -7);
// printf_count = printf("|%*.*x|\n", field_width_0, precision_minus_1, -7);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*.*x|\n", field_width_minus_1, precision_minus_1, -7);
// printf_count = printf("|%*.*x|\n", field_width_minus_1, precision_minus_1, -7);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*.*x|\n", field_width_minus_2, precision_minus_1, -7);
// printf_count = printf("|%*.*x|\n", field_width_minus_2, precision_minus_1, -7);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*.*x|\n", field_width_minus_3, precision_minus_1, -7);
// printf_count = printf("|%*.*x|\n", field_width_minus_3, precision_minus_1, -7);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*.*x|\n", field_width_minus_4, precision_minus_1, -7);
// printf_count = printf("|%*.*x|\n", field_width_minus_4, precision_minus_1, -7);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%-*.*x|\n", field_width_0, precision_0, 0);
// printf_count = printf("|%-*.*x|\n", field_width_0, precision_0, 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// printf("==========================================================\n");

// printf("======================  [%%X test]   =====================\n");
//
// printf("--------------------- default test ----------------------\n");
// printf("---------minus can be combined with this test-------------\n");
//
// ft_printf_count = ft_printf("Default x: |%X|\n", 42);
// printf_count = printf("Default x: |%X|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("Default x(with -flag): |%-X|\n", 42);
// printf_count = printf("Default x(with -flag): |%-X|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("Default x (with argument as 0): |%X|\n", 0);
// printf_count = printf("Default x (with argument as 0): |%X|\n", 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("Default x(argument with 0 and with -flag): |%-X|\n", 0);
// printf_count = printf("Default x(argument with 0 and with -flag): |%-X|\n", 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("Default x(with minus argument): |%X|\n", -42);
// printf_count = printf("Default x(with minus argument): |%X|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("Default x(with -flag and minus argument): |%-X|\n", -42);
// printf_count = printf("Default x(with -flag and minus argument): |%-X|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// printf("--------------------- exception test ----------------------\n");
// // 에외
// ft_printf_count = ft_printf("Exception: |%.0X|\n", 0);
// printf_count = printf("Exception: |%.0X|\n", 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
// //예외
// ft_printf_count = ft_printf("Exception: |%0.0X|\n", 0);
// printf_count = printf("Exception: |%0.0X|\n", 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// printf("-------the width case with the -flag and the 0 flag-------\n");
// printf("--------------also with negative argument------------------\n");
//
// ft_printf_count = ft_printf("x with the width(width > strlen): |%5X|\n", 42);
// printf_count = printf("x with the width(width > strlen): |%5X|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width = strlen): |%5X|\n", 135790);
// printf_count = printf("x with the width(width = strlen): |%5X|\n", 135790);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width < strlen): |%3X|\n", 135790);
// printf_count = printf("x with the width(width < strlen): |%3X|\n", 135790);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width > strlen) and width 0 flag: |%05X|\n", 42);
// printf_count = printf("x with the width(width > strlen) and width 0 flag: |%05X|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width = strlen) and width 0 flag: |%05X|\n", 135790);
// printf_count = printf("x with the width(width = strlen) and width 0 flag: |%05X|\n", 135790);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width < strlen) and width 0 flag: |%03X|\n", 135790);
// printf_count = printf("x with the width(width < strlen) and width 0 flag: |%03X|\n", 135790);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width > strlen) and width - flag: |%-5X|\n", 42);
// printf_count = printf("x with the width(width > strlen) and width - flag: |%-5X|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width = strlen) and width - flag: |%-5X|\n", 135790);
// printf_count = printf("x with the width(width = strlen) and width - flag: |%-5X|\n", 135790);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width < strlen) and width - flag: |%-3X|\n", 135790);
// printf_count = printf("x with the width(width < strlen) and width - flag: |%-3X|\n", 135790);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width > strlen)(with neg argu): |%10X|\n", -42);
// printf_count = printf("x with the width(width > strlen)(with neg argu): |%10X|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width = strlen)(with neg argu): |%8X|\n", -135790);
// printf_count = printf("x with the width(width = strlen)(with neg argu): |%8X|\n", -135790);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width < strlen)(with neg argu): |%3X|\n", -135790);
// printf_count = printf("x with the width(width < strlen)(with neg argu): |%3X|\n", -135790);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width > strlen) and width 0 flag(with neg argu): |%021X|\n", -42);
// printf_count = printf("x with the width(width > strlen) and width 0 flag(with neg argu): |%021X|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width = strlen) and width 0 flag(with neg argu): |%08X|\n", -135790);
// printf_count = printf("x with the width(width = strlen) and width 0 flag(with neg argu): |%08X|\n", -135790);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width < strlen) and width 0 flag(with neg argu): |%03X|\n", -135790);
// printf_count = printf("x with the width(width < strlen) and width 0 flag(with neg argu): |%03X|\n", -135790);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width > strlen) and width - flag(with neg argu): |%-10X|\n", -42);
// printf_count = printf("x with the width(width > strlen) and width - flag(with neg argu): |%-10X|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width = strlen) and width - flag(with neg argu): |%-8X|\n", -135790);
// printf_count = printf("x with the width(width = strlen) and width - flag(with neg argu): |%-8X|\n", -135790);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("x with the width(width < strlen) and width - flag(with neg argu): |%-3X|\n", -135790);
// printf_count = printf("x with the width(width < strlen) and width - flag(with neg argu): |%-3X|\n", -135790);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// printf("------------------width, precision existed----------------\n");
// printf("------ 0flag and -flag can be combined with this test------\n");
// printf("----(it is the same with/without 0 flog in this test)----\n");
//
// ft_printf_count = ft_printf("0.1d: |%0.1X|\n", 1);
// printf_count = printf("0.1d: |%0.1X|\n", 1);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("0.12d: |%0.12X|\n", 12);
// printf_count = printf("0.12d: |%0.12X|\n", 12);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("1.0d: |%1.0X|\n", 42);
// printf_count = printf("1.0d: |%1.0X|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("12.0d: |%12.0X|\n", 42);
// printf_count = printf("12.0d: |%12.0X|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("0.7d: |%0.7X|\n", 1);
// printf_count = printf("0.7d: |%0.7X|\n", 1);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("width > precision > strlen: |%10.4X|\n", 123);
// printf_count = printf("width > precision > strlen: |%10.4X|\n", 123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("width > strlen > precision: |%10.1X|\n", 1234567);
// printf_count = printf("width > strlen > precision: |%10.1X|\n", 1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("width > strlen >= precision: |%42.7X|\n", 1234567);
// printf_count = printf("width > strlen >= precision: |%42.7X|\n", 1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > width > strlen: |%5.7X|\n", 42);
// printf_count = printf("precision > width > strlen: |%5.7X|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
// //
// ft_printf_count = ft_printf("precision > width >= strlen: |%2.7X|\n", 42);
// printf_count = printf("precision > width >= strlen: |%2.7X|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
// //
// ft_printf_count = ft_printf("precision > width >= strlen: |%4.7X|\n", 12345);
// printf_count = printf("precision > width >= strlen: |%4.7X|\n", 12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > strlen > width: |%2.15X|\n", 12345);
// printf_count = printf("precision > strlen > width: |%2.15X|\n", 12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > strlen >= width: |%2.15X|\n", 42);
// printf_count = printf("precision > strlen >= width: |%2.15X|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > strlen >= width: |%4.15X|\n", 12345);
// printf_count = printf("precision > strlen >= width: |%4.15X|\n", 12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen > precision > width: |%3.4X|\n", 1234567);
// printf_count = printf("strlen > precision > width: |%3.4X|\n", 1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen >= precision > width: |%3.6X|\n", 1234567);
// printf_count = printf("strlen >= precision > width: |%3.6X|\n", 1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen > precision >= width: |%4.4X|\n", 1234567);
// printf_count = printf("strlen > precision >= width: |%4.4X|\n", 1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen >= precision >= width: |%6.6X|\n", 1234567);
// printf_count = printf("strlen >= precision >= width: |%6.6X|\n", 1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
// //
// ft_printf_count = ft_printf("strlen > width > precision: |%5.4X|\n", 1234567);
// printf_count = printf("strlen > width > precision: |%5.4X|\n", 1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen >= width > precision: |%6.4X|\n", 1234567);
// printf_count = printf("strlen >= width > precision: |%6.4X|\n", 1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen > width >= precision: |%5.5X|\n", 1234567);
// printf_count = printf("strlen > width >= precision: |%5.5X|\n", 1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen >= width >= precision: |%6.6X|\n", 1234567);
// printf_count = printf("strlen >= width >= precision: |%6.6X|\n", 1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("0.1d: |%0.1X|\n", -1);
// printf_count = printf("0.1d: |%0.1X|\n", -1);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("0.12d: |%0.12X|\n", -12);
// printf_count = printf("0.12d: |%0.12X|\n", -12);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("1.0d: |%1.0X|\n", -42);
// printf_count = printf("1.0d: |%1.0X|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("12.0d: |%12.0X|\n", -42);
// printf_count = printf("12.0d: |%12.0X|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("0.7d: |%0.7X|\n", -1);
// printf_count = printf("0.7d: |%0.7X|\n", -1);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("width > precision > strlen: |%15.10X|\n", -123);
// printf_count = printf("width > precision > strlen: |%15.10X|\n", -123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("width > strlen > precision: |%15.2X|\n", -42);
// printf_count = printf("width > strlen > precision: |%15.2X|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("width > strlen >= precision: |%42.7X|\n", -1234567);
// printf_count = printf("width > strlen >= precision: |%42.7X|\n", -1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
// //
//
// ft_printf_count = ft_printf("width > strlen = precision: |%42.8X|\n", -1234567);
// printf_count = printf("width > strlen = precision: |%42.8X|\n", -1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > width > strlen: |%10.12X|\n", -42);
// printf_count = printf("precision > width > strlen: |%10.12X|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
// //
// ft_printf_count = ft_printf("precision > width = strlen: |%8.12X|\n", -42);
// printf_count = printf("precision > width = strlen: |%8.12X|\n", -42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > width >= strlen: |%8.12X|\n", -12345);
// printf_count = printf("precision > width >= strlen: |%8.12X|\n", -12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > strlen > width: |%2.15X|\n", -123456789);
// printf_count = printf("precision > strlen > width: |%2.15X|\n", -123456789);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
// //
// ft_printf_count = ft_printf("precision > strlen = width: |%8.15X|\n", -123456789);
// printf_count = printf("precision > strlen = width: |%8.15X|\n", -123456789);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > strlen >= width: |%5.15X|\n", -12345);
// printf_count = printf("precision > strlen >= width: |%5.15X|\n", -12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen > precision > width: |%3.4X|\n", -12345);
// printf_count = printf("strlen > precision > width: |%3.4X|\n", -12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen = precision > width: |%3.8X|\n", -12345);
// printf_count = printf("strlen = precision > width: |%3.8X|\n", -12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen > precision = width: |%4.4X|\n", -12345);
// printf_count = printf("strlen > precision = width: |%4.4X|\n", -12345);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen = precision = width: |%8.8X|\n", -1234);
// printf_count = printf("strlen = precision = width: |%8.8X|\n", -1234);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen > width > precision: |%6.4X|\n", -1234567);
// printf_count = printf("strlen > width > precision: |%6.4X|\n", -1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen = width > precision: |%8.4X|\n", -1234567);
// printf_count = printf("strlen = width > precision: |%8.4X|\n", -1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen > width = precision: |%5.5X|\n", -1234567);
// printf_count = printf("strlen > width = precision: |%5.5X|\n", -1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("strlen = width = precision: |%8.8X|\n", -1234567);
// printf_count = printf("strlen = width = precision: |%8.8X|\n", -1234567);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// printf("------------------just precision existed----------------\n");
// printf("------ 0flag and -flag can be combined with this test------\n");
//
// ft_printf_count = ft_printf("precision > strlen: |%.10X|\n", 42);
// printf_count = printf("precision > strlen: |%.10X|\n", 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision < strlen: |%.2X|\n", 1123);
// printf_count = printf("precision < strlen: |%.2X|\n", 1123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision = strlen: |%.3X|\n", 1123);
// printf_count = printf("precision = strlen: |%.3X|\n", 1123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf(" .3x with argument 0 : |%.3X|\n", 0);
// printf_count = printf(" .3x with argument 0 : |%.3X|\n", 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf(".7x with argument 0: |%.7X|\n", 0);
// printf_count = printf(".7x with argument 0: |%.7X|\n", 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf(".4x with argument0: |%.4X|\n", 0);
// printf_count = printf(".4x with argument0: |%.4X|\n", 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision < strlen: |%.3X|\n", -1123);
// printf_count = printf("precision < strlen: |%.3X|\n", -1123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision > strlen: |%.12X|\n", -1123);
// printf_count = printf("precision > strlen: |%.12X|\n", -1123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("precision = strlen: |%.8X|\n", -1123);
// printf_count = printf("precision = strlen: |%.8X|\n", -1123);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// printf("------------------ * test ------------------\n");
//
// int field_width_0 = 0;
// int field_width_1 = 7;
// int field_width_2 = 42;
// int field_width_3 = 123;
// int field_width_4 = 1000;
// int field_width_minus_1 = -7;
// int field_width_minus_2 = -42;
// int field_width_minus_3 = -123;
// int field_width_minus_4 = -1000;
// //
// //
// int precision_0 = 0;
// int precision_1 = 7;
// int precision_2 = 42;
// int precision_3 = 123;
// int precision_4 = 1000;
// int precision_minus_1 = -7;
// int precision_minus_2 = -42;
// int precision_minus_3 = -123;
// int precision_minus_4 = -1000;
//
// ft_printf_count = ft_printf("|%*X|\n", field_width_0, 42);
// printf_count = printf("|%*X|\n", field_width_0, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*X|\n", field_width_1, 42);
// printf_count = printf("|%*X|\n", field_width_1, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*X|\n", field_width_2, 42);
// printf_count = printf("|%*X|\n", field_width_2, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*X|\n", field_width_3, 42);
// printf_count = printf("|%*X|\n", field_width_3, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*X|\n", field_width_4, 42);
// printf_count = printf("|%*X|\n", field_width_4, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*X|\n", field_width_minus_1, 42);
// printf_count = printf("|%*X|\n", field_width_minus_1, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*X|\n", field_width_minus_2, 42);
// printf_count = printf("|%*X|\n", field_width_minus_2, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*X|\n", field_width_minus_3, 42);
// printf_count = printf("|%*X|\n", field_width_minus_3, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*X|\n", field_width_minus_4, 42);
// printf_count = printf("|%*X|\n", field_width_minus_4, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%.*X|\n", precision_0, 42);
// printf_count = printf("|%.*X|\n", precision_0, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
// //
// ft_printf_count = ft_printf("|%.*X|\n", precision_1, 42);
// printf_count = printf("|%.*X|\n", precision_1, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%.*X|\n", precision_2, 42);
// printf_count = printf("|%.*X|\n", precision_2, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%.*X|\n", precision_3, 42);
// printf_count = printf("|%.*X|\n", precision_3, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%.*X|\n", precision_4, 42);
// printf_count = printf("|%.*X|\n", precision_4, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%.*X|\n", precision_minus_1, 42);
// printf_count = printf("|%.*X|\n", precision_minus_1, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%.*X|\n", precision_minus_2, 42);
// printf_count = printf("|%.*X|\n", precision_minus_2, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%.*X|\n", precision_minus_3, 42);
// printf_count = printf("|%.*X|\n", precision_minus_3, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%.*X|\n", precision_minus_4, 42);
// printf_count = printf("|%.*X|\n", precision_minus_4, 42);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*.*X|\n", field_width_0, precision_minus_1, -7);
// printf_count = printf("|%*.*X|\n", field_width_0, precision_minus_1, -7);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*.*X|\n", field_width_minus_1, precision_minus_1, -7);
// printf_count = printf("|%*.*X|\n", field_width_minus_1, precision_minus_1, -7);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*.*X|\n", field_width_minus_2, precision_minus_1, -7);
// printf_count = printf("|%*.*X|\n", field_width_minus_2, precision_minus_1, -7);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*.*X|\n", field_width_minus_3, precision_minus_1, -7);
// printf_count = printf("|%*.*X|\n", field_width_minus_3, precision_minus_1, -7);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%*.*X|\n", field_width_minus_4, precision_minus_1, -7);
// printf_count = printf("|%*.*X|\n", field_width_minus_4, precision_minus_1, -7);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// ft_printf_count = ft_printf("|%-*.*X|\n", field_width_0, precision_0, 0);
// printf_count = printf("|%-*.*X|\n", field_width_0, precision_0, 0);
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// printf("==========================================================\n");

// printf("======================  [percent test]   =====================\n");
//
// ft_printf_count = ft_printf("%%c %%s %%p %%d %%i %%u %%x %%X %%\n");
// printf_count = printf("%%c %%s %%p %%d %%i %%u %%x %%X %%\n");
// printf("ft printf count : %d\n", ft_printf_count);
// printf("real printf count : %d\n", printf_count);
//
// printf("--------------------------------------------------------------\n");
