#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int printf_count;
    int ft_printf_count;

    printf("======================  [%%d/%%i test]   =====================\n");
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


    printf("-----------width, precision, zero combined----------------\n");
    //예외
    ft_printf_count = ft_printf("Exception 0.0d with argument 0: |%-0.0d|\n", 0);
    // printf_count = printf("Exception 0.0d with argument 0: |%-0.0d|\n", 0);
    printf("ft printf count : %d\n", ft_printf_count);
    // printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("0.1d: |%-0.1d|\n", 1);
    // printf_count = printf("0.1d: |%-0.1d|\n", 1);
    printf("ft printf count : %d\n", ft_printf_count);
    // printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("0.12d: |%-0.12d|\n", 12);
    // printf_count = printf("0.12d: |%-0.12d|\n", 12);
    printf("ft printf count : %d\n", ft_printf_count);
    // printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("1.0d: |%-1.0d|\n", 42);
    printf_count = printf("1.0d: |%-1.0d|\n", 42);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("12.0d: |%-12.0d|\n", 42);
    printf_count = printf("12.0d: |%-12.0d|\n", 42);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("0.7d: |%-0.7d|\n", 1);
    // printf_count = printf("0.7d: |%-0.7d|\n", 1);
    printf("ft printf count : %d\n", ft_printf_count);
    // printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("width > precision > strlen: |%-10.5d|\n", 123);
    printf_count = printf("width > precision > strlen: |%-10.5d|\n", 123);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("width > strlen > precision: |%-10.1d|\n", 42);
    printf_count = printf("width > strlen > precision: |%-10.1d|\n", 42);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("width > strlen >= precision: |%-42.7d|\n", 1234567);
    printf_count = printf("width > strlen >= precision: |%-42.7d|\n", 1234567);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("precision > width > strlen: |%-5.7d|\n", 42);
    printf_count = printf("precision > width > strlen: |%-5.7d|\n", 42);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("precision > width >= strlen: |%-2.7d|\n", 42);
    printf_count = printf("precision > width >= strlen: |%-2.7d|\n", 42);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("precision > width >= strlen: |%-5.7d|\n", 12345);
    printf_count = printf("precision > width >= strlen: |%-5.7d|\n", 12345);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("precision > strlen > width: |%-2.15d|\n", 12345);
    printf_count = printf("precision > strlen > width: |%-2.15d|\n", 12345);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("precision > strlen >= width: |%-2.15d|\n", 42);
    printf_count = printf("precision > strlen >= width: |%-2.15d|\n", 42);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("precision > strlen >= width: |%-5.15d|\n", 12345);
    printf_count = printf("precision > strlen >= width: |%-5.15d|\n", 12345);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("strlen > precision > width: |%-3.4d|\n", 12345);
    printf_count = printf("strlen > precision > width: |%-3.4d|\n", 12345);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("strlen >= precision > width: |%-3.5d|\n", 12345);
    printf_count = printf("strlen >= precision > width: |%-3.5d|\n", 12345);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("strlen > precision >= width: |%-4.4d|\n", 12345);
    printf_count = printf("strlen > precision >= width: |%-4.4d|\n", 12345);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("strlen >= precision >= width: |%-4.4d|\n", 1234);
    printf_count = printf("strlen >= precision >= width: |%-4.4d|\n", 1234);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("strlen > width > precision: |%-6.4d|\n", 1234567);
    printf_count = printf("strlen > width > precision: |%-6.4d|\n", 1234567);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("strlen >= width > precision: |%-7.4d|\n", 1234567);
    printf_count = printf("strlen >= width > precision: |%-7.4d|\n", 1234567);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("strlen > width >= precision: |%-5.5d|\n", 1234567);
    printf_count = printf("strlen > width >= precision: |%-5.5d|\n", 1234567);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("strlen >= width >= precision: |%-7.7d|\n", 1234567);
    printf_count = printf("strlen >= width >= precision: |%-7.7d|\n", 1234567);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("0.1d: |%-0.1d|\n", -1);
    // printf_count = printf("0.1d: |%-0.1d|\n", -1);
    printf("ft printf count : %d\n", ft_printf_count);
    // printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("0.12d: |%-0.12d|\n", -12);
    // printf_count = printf("0.12d: |%-0.12d|\n", -12);
    printf("ft printf count : %d\n", ft_printf_count);
    // printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("1.0d: |%-1.0d|\n", -42);
    printf_count = printf("1.0d: |%-1.0d|\n", -42);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("12.0d: |%-12.0d|\n", -42);
    printf_count = printf("12.0d: |%-12.0d|\n", -42);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("0.7d: |%-0.7d|\n", -1);
    // printf_count = printf("0.7d: |%-0.7d|\n", -1);
    printf("ft printf count : %d\n", ft_printf_count);
    // printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("width > precision > strlen: |%-10.5d|\n", -123);
    printf_count = printf("width > precision > strlen: |%-10.5d|\n", -123);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("width > strlen > precision: |%-10.1d|\n", -42);
    printf_count = printf("width > strlen > precision: |%-10.1d|\n", -42);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("width > strlen >= precision: |%-42.7d|\n", -1234567);
    printf_count = printf("width > strlen >= precision: |%-42.7d|\n", -1234567);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("precision > width > strlen: |%-5.7d|\n", -42);
    printf_count = printf("precision > width > strlen: |%-5.7d|\n", -42);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("precision > width >= strlen: |%-2.7d|\n", -42);
    printf_count = printf("precision > width >= strlen: |%-2.7d|\n", -42);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("precision > width >= strlen: |%-5.7d|\n", -12345);
    printf_count = printf("precision > width >= strlen: |%-5.7d|\n", -12345);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("precision > strlen > width: |%-2.15d|\n", -12345);
    printf_count = printf("precision > strlen > width: |%-2.15d|\n", -12345);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("precision > strlen >= width: |%-2.15d|\n", -42);
    printf_count = printf("precision > strlen >= width: |%-2.15d|\n", -42);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("precision > strlen >= width: |%-5.15d|\n", -12345);
    printf_count = printf("precision > strlen >= width: |%-5.15d|\n", -12345);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("strlen > precision > width: |%-3.4d|\n", -12345);
    printf_count = printf("strlen > precision > width: |%-3.4d|\n", -12345);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("strlen >= precision > width: |%-3.5d|\n", -12345);
    printf_count = printf("strlen >= precision > width: |%-3.5d|\n", -12345);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("strlen > precision >= width: |%-4.4d|\n", -12345);
    printf_count = printf("strlen > precision >= width: |%-4.4d|\n", -12345);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("strlen >= precision >= width: |%-4.4d|\n", -1234);
    printf_count = printf("strlen >= precision >= width: |%-4.4d|\n", -1234);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("strlen > width > precision: |%-6.4d|\n", -1234567);
    printf_count = printf("strlen > width > precision: |%-6.4d|\n", -1234567);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("strlen >= width > precision: |%-7.4d|\n", -1234567);
    printf_count = printf("strlen >= width > precision: |%-7.4d|\n", -1234567);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("strlen > width >= precision: |%-5.5d|\n", -1234567);
    printf_count = printf("strlen > width >= precision: |%-5.5d|\n", -1234567);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);

    ft_printf_count = ft_printf("strlen >= width >= precision: |%-7.7d|\n", -1234567);
    printf_count = printf("strlen >= width >= precision: |%-7.7d|\n", -1234567);
    printf("ft printf count : %d\n", ft_printf_count);
    printf("real printf count : %d\n", printf_count);


//=====================

    // ft_printf_count = ft_printf("With the width and minus flag: |%42.10d|\n", 12345);
    // printf_count = printf("With the width and minus flag: |%42.10d|\n", 12345);
    // printf("ft printf count : %d\n", ft_printf_count);
    // printf("real printf count : %d\n", printf_count);

    // ft_printf_count = ft_printf("With the width and minus flag: |%-10.10d|\n", 12345);
    // printf_count = printf("With the width and minus flag: |%-10.10d|\n", 12345);
    // printf("ft printf count : %d\n", ft_printf_count);
    // printf("real printf count : %d\n", printf_count);

    // ft_printf_count = ft_printf("With the width and minus flag: |%-42.5d|\n", 12345);
    // printf_count = printf("With the width and minus flag: |%-42.5d|\n", 12345);
    // printf("ft printf count : %d\n", ft_printf_count);
    // printf("real printf count : %d\n", printf_count);
    //
    // ft_printf_count = ft_printf("With the width and minus flag: |%-42.23d|\n", 12345);
    // printf_count = printf("With the width and minus flag: |%-42.23d|\n", 12345);
    // printf("ft printf count : %d\n", ft_printf_count);
    // printf("real printf count : %d\n", printf_count);
    //
    // ft_printf_count = ft_printf("With the width and minus flag: |%-42.5d|\n", -12345);
    // printf_count = printf("With the width and minus flag: |%-42.5d|\n", -12345);
    // printf("ft printf count : %d\n", ft_printf_count);
    // printf("real printf count : %d\n", printf_count);
    //
    // ft_printf_count = ft_printf("With the width and minus flag: |%-42.23d|\n", -12345);
    // printf_count = printf("With the width and minus flag: |%-42.23d|\n", -12345);
    // printf("ft printf count : %d\n", ft_printf_count);
    // printf("real printf count : %d\n", printf_count);


    // ft_printf_count = ft_printf("With the width and minus flag: |%-24d|(minus argument)\n", -123);
    // printf_count = printf("With the width and minus flag: |%-24d|(minus argument)\n", -123);
    // printf("ft printf count : %d\n", ft_printf_count);
    // printf("real printf count : %d\n", printf_count);


    // ft_printf_count = ft_printf("With the width (width > string_len) and zero flag: |%0100d|\n", 123);
    // printf_count = printf("With the width (width > string_len) and zero flag: |%0100d|\n", 123);
    // printf("ft printf count : %d\n", ft_printf_count);
    // printf("real printf count : %d\n", printf_count);
    //
    // ft_printf_count = ft_printf("With the width (width <= string_len) and zero flag: |%01d|\n", -7);
    // printf_count = printf("With the width (width <= string_len) and zero flag: |%01d|\n", -7);
    // printf("ft printf count : %d\n", ft_printf_count);
    // printf("real printf count : %d\n", printf_count);
    //
    // ft_printf_count = ft_printf("With the width (width > string_len) and zero flag: |%054d|\n", -123);
    // printf_count = printf("With the width (width > string_len) and zero flag: |%054d|\n", -123);
    // printf("ft printf count : %d\n", ft_printf_count);
    // printf("real printf count : %d\n", printf_count);
    //
    //
    printf("===============================================================\n");

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

// printf("%%s test-----------------------------------------------\n");
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
