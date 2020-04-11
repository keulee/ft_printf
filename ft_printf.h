#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>

typedef struct	s_tab
{
    va_list     list;
    int         i;
    int         len;
}				t_tab;

int		ft_atoi(const char *str);
int		ft_int_len(int n);
char	*ft_itoa(int n);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int     ft_strlen(char *src);
int     ft_printf(const char *src, ...);
void    ft_printf_c(va_list *my_list);
void    ft_printf_nbr(va_list *my_list);
void    ft_printf_s(va_list *my_list);
void    ft_printf_nbr(va_list *my_list);
char	*ft_strcpy(char *dest, char *src);
int     ft_findIndex(char *tab, char element);

#endif
