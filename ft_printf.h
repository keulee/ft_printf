/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 13:08:37 by keulee            #+#    #+#             */
/*   Updated: 2020/05/28 15:38:42 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define UINT_MAX 4294967295

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>
# include <stdio.h>

typedef struct      s_struct
{
    const char      *str;
    va_list         list;
    int             i;
    int             j;
    int             check_width;
    int             check_s_width;
    int             check_minus;
    int             check_precision;
    int             check_zero;
    int             width;
    int             number;
    unsigned int    u_number;
    unsigned long int    p_number;
    void            *pointer;
    int             len;
    int             string_len;
    int             precision;
    int             index;
    char            specifier;
    char            *string;
}                   t_struct;

int         ft_printf(const char *str, ...);

int		    ft_atoi(const char *str);
void	    ft_putchar(char c);
void        ft_putstr(char *str);
int         ft_strlen(const char *src);
void        ft_putnbr(int nb);
void    	ft_putnbr_u(unsigned int nb);
char	    *ft_itoa(int n);
char        *ft_strdup(const char *src);
char        *ft_itoa_u(unsigned int n);
void        ft_putnbr_base(long long int nbr, char *base);
char        *ft_itoa_base(long long int n, char *base);

void        ft_print_char(t_struct *tab);
void        ft_print_str(t_struct *tab);
void        ft_print_di(t_struct *tab);
void        ft_print_u(t_struct *tab);
void        ft_print_p(t_struct *tab);
// void        ft_print_x(t_struct *tab);

void        ft_init(t_struct *tab, const char *str);
void        ft_find_option(t_struct *tab);
void        ft_find_specifier(t_struct *tab);
void        ft_option_clear(t_struct *tab);


// void        ft_manage_width(const char *format, va_list my_list, int *i, int *len, int witdh);
// void        ft_manage_width_star(const char *format, int *i, va_list my_list, int *len);
// int         ft_find_case(const char *str, int i, int j);

#endif
