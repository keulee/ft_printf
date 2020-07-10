/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keulee <keulee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 23:07:38 by keulee            #+#    #+#             */
/*   Updated: 2020/07/08 16:21:01 by k                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
** Function to print 'x'
*/
/*
** x 만들때 고려할 점 (diouxX)
** unsigned int hexa, uses "abcdef"
**
** diouxX에서 0플래그와 (-)플래그가 함께 나오면 (0)이 무시된다. (에러 송출 - 결과값 없음)
**          .precision(.정밀도)과 (0)플래그가 함께 나오면 0이 무시된다. (0을 무시하고 결과값나옴. 에러 나오지 않음.)
**          .precision(.정밀도)는 표시해야하는 최소 자리수를 나타낸다. 최소 자리수보다 인수의 값 이 크면 (s 결과값과 다르게) 잘리지 않고 정수가 프린트된다. 반면, 최소 자리수보다 인수의 값이 작을 경우 최소 자리수를 0으로 채운다. (0플래그와 다름)
**          ("|%.0d|", 0)을 인쇄하면 결과 값이 ||으로 나온다. (아무것도 인쇄되지 않음. 예외값.)
**          .precision(.정밀도) default 값은 1이다.
**          .precision(.정밀도) 뒤 숫자를 생략하면 (ex. %5.d) .precision은 0으로 간주된다.
**          width없이 (-)플래그와 .precision만 함께 오면 (-)flag가 무시된다. (당연한 이야기. 폭 없이 인수의 최소, 최대 길이만 정해주기 때문에 오/왼 정렬할 이유가 없다. 따라서 (-)플래그를 무시하고 .precision만 읽은 값으로 송출된다. 에러가 나오지는 않는다.)
**          (-)플래그, (0)플래그는 width와 항상 함께 해야 한다.
*/

void    ft_x_case_1(t_struct *tab)
{
    if (tab->width > tab->string_len)
    {
        tab->len += tab->width;
        tab->width = tab->width - tab->string_len;
    }
    else
    {
        tab->len += tab->string_len;
        tab->width = 0;
    }
    ft_x_case_1_y_n_minus(tab);
    // if (tab->check_minus == 1)
    // {
    //     ft_putnbr_base(tab->u_number, "0123456789abcdef");
    //     while (tab->width-- > 0)
    //         ft_putchar(' ');
    // }
    // else
    // {
    //     if (tab->check_zero == 1)
    //     {
    //         while (tab->width-- > 0)
    //             ft_putchar('0');
    //     }
    //     else
    //     {
    //         while (tab->width-- > 0)
    //             ft_putchar(' ');
    //     }
    //     ft_putnbr_base(tab->u_number, "0123456789abcdef");
    // }
}

void    ft_x_case_2(t_struct *tab)
{
    if ((tab->string_len >= tab->precision && tab->precision >= tab->width) || (tab->string_len >= tab->width && tab->width >= tab->precision))
        ft_x_case_2_a(tab);
    // {
        // tab->len += tab->string_len;
        // tab->precision = 0;
        // tab->width = 0;
    // }
    else if (tab->width >= tab->precision && tab->precision >= tab->string_len)
        ft_x_case_2_b(tab);
    // {
        // tab->len += tab->width;
        // tab->width = tab->width - tab->precision;
        // tab->precision = tab->precision - tab->string_len;
    // }
    else if (tab->width > tab->string_len && tab->string_len >= tab->precision)
    {
        tab->len += tab->width;
        tab->width = tab->width - tab->string_len;
        tab->precision = 0;
    }
    else if ((tab->precision > tab->width && tab->width >= tab->string_len) || (tab->precision > tab->string_len && tab->string_len >= tab->width))
    {
        tab->len += tab->precision;
        tab->precision = tab->precision - tab->string_len;
        tab->width = 0;
    }
    if (tab->check_minus == 1)
        ft_x_case_2_y_minus(tab);
    // {
    //     while (tab->precision-- > 0)
    //         ft_putchar('0');
    //     ft_putnbr_base(tab->u_number, "0123456789abcdef");
    //     while (tab->width-- > 0)
    //         ft_putchar(' ');
    // }
    else
        ft_x_case_2_n_minus(tab);
    // {
    //     if (tab->check_zero == 1)
    //     {
    //         while (tab->width-- > 0)
    //             ft_putchar('0');
    //     }
    //     else
    //     {
    //         while (tab->width-- > 0)
    //             ft_putchar(' ');
    //     }
    //     while (tab->precision-- > 0)
    //         ft_putchar('0');
    //     ft_putnbr_base(tab->u_number, "0123456789abcdef");
    // }
}

void    ft_x_case_3(t_struct *tab)
{
    if (tab->precision > tab->string_len)
    {
        tab->len += tab->precision;
        tab->precision = tab->precision - tab->string_len;
    }
    else
    {
        tab->len += tab->string_len;
        tab->precision = 0;
    }
    while (tab->precision-- > 0)
        ft_putchar('0');
    ft_putnbr_base(tab->u_number, "0123456789abcdef");
}

void    ft_print_x(t_struct *tab)
{
    ft_info_x(tab);
    // tab->u_number = (unsigned int)va_arg(tab->list, unsigned int);
    // tab->string = ft_utoa_base(tab->u_number, "0123456789abcdef");
    // tab->string_len = ft_strlen(tab->string);
    // if (tab->check_minus == 1 && tab->check_zero == 1)
    //     tab->check_zero = 0;
    // if (tab->check_precision == 1 && tab->check_zero == 1)
    //     tab->check_zero = 0;
    if (tab->check_width == 0 && (tab->check_minus == 1 || tab->check_minus == 0) && tab->check_precision == 0 && tab->check_zero == 0)
    {
        ft_putnbr_base(tab->u_number, "0123456789abcdef");
        tab->len += tab->string_len;
    }
    else if (tab->check_width == 1 && tab->check_precision == 0)
        ft_x_case_1(tab);
    // {
    //     if (tab->width > tab->string_len)
    //     {
    //         tab->len += tab->width;
    //         tab->width = tab->width - tab->string_len;
    //     }
    //     else
    //     {
    //         tab->len += tab->string_len;
    //         tab->width = 0;
    //     }
    //     if (tab->check_minus == 1)
    //     {
    //         ft_putnbr_base(tab->u_number, "0123456789abcdef");
    //         while (tab->width-- > 0)
    //             ft_putchar(' ');
    //     }
    //     else
    //     {
    //         if (tab->check_zero == 1)
    //         {
    //             while (tab->width-- > 0)
    //                 ft_putchar('0');
    //         }
    //         else
    //         {
    //             while (tab->width-- > 0)
    //                 ft_putchar(' ');
    //         }
    //         ft_putnbr_base(tab->u_number, "0123456789abcdef");
    //     }
    // }
    else if ((tab->check_width == 0 || tab->check_width == 1) && tab->check_precision == 1 && tab->precision == 0 && tab->u_number == 0)
    {
        tab->len += tab->width;
        while (tab->width-- > 0)
            ft_putchar(' ');
    }
    else if (tab->check_width == 1 && tab->check_precision == 1 && (tab->check_zero == 1 || tab->check_zero == 0))
        ft_x_case_2(tab);
    // {

        // if ((tab->string_len >= tab->precision && tab->precision >= tab->width) || (tab->string_len >= tab->width && tab->width >= tab->precision))
        // {
        //     tab->len += tab->string_len;
        //     tab->precision = 0;
        //     tab->width = 0;
        // }
        // else if (tab->width >= tab->precision && tab->precision >= tab->string_len)
        // {
        //     tab->len += tab->width;
        //     tab->width = tab->width - tab->precision;
        //     tab->precision = tab->precision - tab->string_len;
        // }
        // else if (tab->width > tab->string_len && tab->string_len >= tab->precision)
        // {
        //     tab->len += tab->width;
        //     tab->width = tab->width - tab->string_len;
        //     tab->precision = 0;
        // }
        // else if ((tab->precision > tab->width && tab->width >= tab->string_len) || (tab->precision > tab->string_len && tab->string_len >= tab->width))
        // {
        //     tab->len += tab->precision;
        //     tab->precision = tab->precision - tab->string_len;
        //     tab->width = 0;
        // }
        // if (tab->check_minus == 1)
        // {
        //     while (tab->precision-- > 0)
        //         ft_putchar('0');
        //     ft_putnbr_base(tab->u_number, "0123456789abcdef");
        //     while (tab->width-- > 0)
        //         ft_putchar(' ');
        // }
        // else
        // {
        //     if (tab->check_zero == 1)
        //     {
        //         while (tab->width-- > 0)
        //             ft_putchar('0');
        //     }
        //     else
        //     {
        //         while (tab->width-- > 0)
        //             ft_putchar(' ');
        //     }
        //     while (tab->precision-- > 0)
        //         ft_putchar('0');
        //     ft_putnbr_base(tab->u_number, "0123456789abcdef");
        // }
    // }
    else if (tab->check_width == 0 && tab->check_precision == 1 && tab->check_zero == 0)
        ft_x_case_3(tab);
    // {
    //     if (tab->precision > tab->string_len)
    //     {
    //         tab->len += tab->precision;
    //         tab->precision = tab->precision - tab->string_len;
    //     }
    //     else
    //     {
    //         tab->len += tab->string_len;
    //         tab->precision = 0;
    //     }
    //     while (tab->precision-- > 0)
    //         ft_putchar('0');
    //     ft_putnbr_base(tab->u_number, "0123456789abcdef");
    // }
}
