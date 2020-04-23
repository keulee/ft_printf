#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>
# include <stdio.h>

// typedef struct	s_tab
// {
//     va_list     list;
//     int         i;
//     int         len;
// }				t_tab;

typedef struct      s_struct
{
    const char      *str;
    va_list         list;
    int             i;
    int             j;
    int             check_width;
    int             check_s_width;
    int             width;
    int             tmp;
    int             len;
    int             check_minus;
    char            specifier;
}                   t_struct;

int		    ft_atoi(const char *str);
int		    ft_int_len(int n);
char	    *ft_itoa(int n);
void	    ft_putchar(char c);
void        ft_putnbr(int nb);
void        ft_putstr(char *str);
int         ft_strlen(const char *src);
// int         ft_printf(const char *src, ...);
char        *ft_strdup(const char *src);
void        ft_manage_width(const char *format, va_list my_list, int *i, int *len, int witdh);
void        ft_manage_width_star(const char *format, int *i, va_list my_list, int *len);
int         ft_printf(const char *str, ...);
int         ft_find_case(const char *str, int i, int j);
void        ft_find_option(t_struct *tab);
void        ft_init(t_struct *tab, const char *str);
void        ft_option_clear(t_struct *tab);
void        ft_print_char(t_struct *tab);


#endif
