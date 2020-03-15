void ft_printf_id(va_list *my_list)
{
    int nbr = va_arg(*my_list, int);
    char *buffer;
    write(1, buffer, ft_strlen(buffer));
}
