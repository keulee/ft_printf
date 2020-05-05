#include "ft_printf.h"
/*
** Function to print 'u'
*/

/*
** u 만들때 고려할 점 (diouxX)
** diouxX에서 0플래그와 (-)플래그가 함께 나오면 (0)이 무시된다. (에러 송출 - 결과값 없음)
**          .precision(.정밀도)과 (0)플래그가 함께 나오면 0이 무시된다. (0을 무시하고 결과값나옴. 에러 나오지 않음.)
**          .precision(.정밀도)는 표시해야하는 최소 자리수를 나타낸다. 최소 자리수보다 인수의 값 이 크면 (s 결과값과 다르게) 잘리지 않고 정수가 프린트된다. 반면, 최소 자리수보다 인수의 값이 작을 경우 최소 자리수를 0으로 채운다. (0플래그와 다름)
**          ("|%.0d|", 0)을 인쇄하면 결과 값이 ||으로 나온다. (아무것도 인쇄되지 않음. 예외값.)
**          .precision(.정밀도) default 값은 1이다.
**          .precision(.정밀도) 뒤 숫자를 생략하면 (ex. %5.d) .precision은 0으로 간주된다.
**          width없이 (-)플래그와 .precision만 함께 오면 (-)flag가 무시된다. (당연한 이야기. 폭 없이 인수의 최소, 최대 길이만 정해주기 때문에 오/왼 정렬할 이유가 없다. 따라서 (-)플래그를 무시하고 .precision만 읽은 값으로 송출된다. 에러가 나오지는 않는다.)
**          (-)플래그, (0)플래그는 width와 항상 함께 해야 한다.
** -2147283647부터 2147483647(INT MAX)까지 argument로 사용 가능 (범위를 벗어나면 l modifier를 사용해야함)
** 0부터 2147483647(INT MAX)까지는 d/i와 같게 작동함.
** -1이 argument로 주어지면 4294967295(unsigned int max 값)가 결과 값으로 나옴
** -2147283647이 argument로 주어지면 2147483649가 결과 값으로 나옴
** 결국 -2147283647부터 -1사이의 결과값은 2147483649부터 4294967295. (이 사이 2147483648값은 결과값으로 나올 수 없는거 같다??)
*/

void    ft_print_u(t_struct *tab)
{
    tab->number = va_arg(tab->list, int);
    tab->string = ft_itoa(tab->number);
    tab->string_len = ft_strlen(tab->string);
    if (tab->check_width == 0 && (tab->check_minus == 1 || tab->check_minus == 0) && tab->check_precision == 0 && tab->check_zero == 0)
    {
        ft_putnbr(tab->number);
        tab->len += tab->string_len;
    }
}
