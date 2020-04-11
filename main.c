#include "ft_printf.h"
#include <stdio.h>

void    ft_test_flag(char *str);

int main(void)
{
    // char *s7 = "couuo5 |%c| |%-c| |%-5c| |%5c|";
    //
    // printf("|%c| |%-c| |%2c| |%-2c|\n", 'A', 'A','A','A');
    // ft_printf("|%c| |%-c| |%5c| |%-5c|\n", 'A', 'A','A','A');
    char *s1 = "abcdef %1c %-2c \n";
    //char *s2 = "%-2c\n";
    // char *s3 = "coucou %-100s\n";

    // printf("Resultat printf = |%2c|\n",'d');
    ft_test_flag(s1);
    //ft_test_flag(s2);
    // printf("Resultat printf = |%-2c|\n",'d');
    //ft_test_flag(s2);
    // printf("Resultat printf = |%-100c|\n",'d');
    //ft_test_flag(s3);
    //printf("Result = \n");
    //printf("|    d|\n");
    // RESULT = "    d"
    return (0);
}

void find_char(char *str, int start, int index)
{
    while (str[start] != '\0' && start <= index)
    {
        ft_putchar(str[start]);
        start++;
    }
    ft_putchar(' ');
    ft_putstr("recognized\n");
}

void find_str(char *str, int start, int index)
{
    while (str[start] != '\0' && start <= index)
    {
        ft_putchar(str[start]);
        start++;
    }
    ft_putchar(' ');
    ft_putstr("recognized\n");
}

// int    ft_checkType(char *str)
// {
//     int i;
//
//     i = 0;
//     while (str[i] != '\0' && str[i] != 'c')
//         i++;
//     return (i);
// }

void    ft_test_flag(char *str)
{
    char tmp = 'd';
    int num;
    int i;
    int j;

    i = 0;
    j = 0;
    // str2 = NULL;
    while (str[i] != '\0')
    {
        if (str[i] == '%')
        {
            j = i;
            while (str[j] != '\0' && str[j] != 'c' && str[j] != 's')
                j++;
            if (str[j] == 'c')
                find_char(str, i, j);
            else if (str[j] == 's')
                find_str(str, i, j);
            if (str[i + 1] >= '0' && str[i + 1] <= '9')
            {
                num = ft_atoi(&str[i + 1]) - 1;
                ft_putstr("Resultat keulee = ");
                ft_putchar('|');
                while (num > 0)
                {
                    ft_putchar(' ');
                    num--;
                }
                ft_putchar(tmp);
                ft_putstr("|\n");                // a faire
            }
            else if (str[i + 1] == '-')
            {
                if(str[i + 2] >= '0' && str[i + 2] <= '9')
                {
                    num = ft_atoi(&str[i + 2]) - 1;
                    ft_putstr("Resultat keulee = ");
                    ft_putchar('|');
                    ft_putchar(tmp);
                    while (num > 0)
                    {
                        ft_putchar(' ');
                        num--;
                    }
                    ft_putstr("|\n");
                }
                //f_number++;
            }
            // f_pct++;
        }
        // else
        //     ft_putchar(str[i]);
        // // if (str[i] >= '0' && str[i] <= '9')
        //     printf("option number detected\n");
        // if (str[i] == '-')
        //     printf("option minus detected\n");
        // if (str[i] == '*')
        //     printf("option * detected\n");
        i++;
    }
    // printf("%% : %d / - : %d / number : %d\n", f_pct, f_minus, f_number);
}
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
