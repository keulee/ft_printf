# ft_printf
42 ft_printf project (2019-2020)

<MANDATORY PART>

Program name : libftprintf.a
Turn in files : *.c, */*.c, *.h, */*.h, Makefile
Makefile : all, clean, fclean, re, bonus
External functs. : malloc, free, write, va_start, va_arg, va_copy, va_end
Libft authorized : yes
Description : Write a library that contains ft_printf, a function that will mimic the real printf

* FOR REFERENCE
• The prototype of ft_printf should be int ft_printf(const char *, ...);
• You have to recode the libc’s printf function
• It must not do the buffer management like the real printf
• It will manage the following conversions: cspdiuxX%
• It will manage any combination of the following flags: ’-0.*’ and minimum field width with all conversions
• It will be compared with the real printf
• man 3 printf / man 3 stdarg

<BONUS PART>
• If the Mandatory part is not perfect don’t even think about bonuses
• You don’t need to do all the bonuses
• Manage one or more of the following conversions: nfge
• Manage one or more of the following flags: l ll h hh
• Manage all the following flags: ’# +’ (yes, one of them is a space)
