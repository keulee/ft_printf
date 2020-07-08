/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 13:08:37 by keulee            #+#    #+#             */
/*   Updated: 2020/07/08 15:38:37 by keulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>
# include <stdio.h>

typedef struct      s_struct
{
    const char          *str;
    va_list             list;
    int                 i;
    int                 j;
    int                 check_width;
    int                 check_s_width;
    int                 check_minus;
    int                 check_precision;
    int                 check_zero;
    int                 width;
    int                 number;
    unsigned int        u_number;
    unsigned long long  p_number;
    void                *pointer;
    int                 len;
    int                 string_len;
    int                 precision;
    int                 index;
    char                specifier;
    char                *string;
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
void        ft_putnbr_base(unsigned long long nbr, char *base);
char        *ft_utoa_base(unsigned long long nb, char *base);

void        ft_print_char(t_struct *tab);
void        ft_print_str(t_struct *tab);
void        ft_print_di(t_struct *tab);
void        ft_print_u(t_struct *tab);
void        ft_print_p(t_struct *tab);
void        ft_print_x(t_struct *tab);
void        ft_print_xx(t_struct *tab);
void        ft_print_percent(t_struct *tab);


void        ft_init(t_struct *tab, const char *str);
void        ft_find_option(t_struct *tab);
void        ft_find_specifier(t_struct *tab);
void        ft_option_clear(t_struct *tab);
void        ft_print_case(t_struct *tab);
void        ft_find_asterisk(t_struct *tab);
void        ft_find_precision_and_width(t_struct *tab);

void        ft_info_str(t_struct *tab);
void        ft_info_di(t_struct *tab);
void 		ft_info_p(t_struct *tab);
void 		ft_info_percent(t_struct *tab);
void        ft_info_u(t_struct *tab);

void 		ft_di_case_1_y_zero(t_struct *tab);
void 		ft_di_case_1_n_zero(t_struct *tab);
void 		ft_di_case_2_y_minus(t_struct *tab);
void 		ft_di_case_2_n_minus(t_struct *tab);

void        ft_u_case_2_1(t_struct *tab);
void        ft_u_case_2_y_minus(t_struct *tab);
void        ft_u_case_2_n_minus(t_struct *tab);

#endif
