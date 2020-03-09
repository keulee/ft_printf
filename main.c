#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    ft_printf("%c and %s and %s\n", 'c', "Hello world", "I made it");
    printf("%c and %s and %s\n", 'c', "Hello world", "I made it");
    return (0);
}
