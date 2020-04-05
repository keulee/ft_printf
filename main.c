#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    char c = 'c';
    // char d = 'd';
    // char *s = "Coucou";
    // char *s2 = "Comment tu vas ?";
    // int a = 42;

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


    int origin = printf("%5c|\n", c);
    int origin1 = printf("%-5c|\n", c);
    int origin2 = printf("%-*c|\n", 5, c);
    printf("%d\n", origin);
    printf("%d\n", origin1);
    printf("%d\n", origin2);
    int ret = ft_printf("%c\n", c);
    printf("%d\n", ret);

    return (0);
}
