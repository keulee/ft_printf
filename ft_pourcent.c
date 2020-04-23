if (tab.str[tab.i] == '%' && tab.str[tab.i + 1] == '%') // -> make in function (case %)
{
    ft_putchar('%');
    tab.i++;
}
