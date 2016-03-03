#include "../includes/ft_printf.h"

int   ft_printf(const char *format, ...)
{
    va_list     ap;
    //t_func      tab;
    I();

    va_start(ap, format);
    //ft_init_func(&tab);
    while (*format != '\0')
    {
        if (*format == '%' && *++format == ' ')
            format++;
        
        if (*format == '%' && *++format)
            ft_putchar(*format);
        format++;
    }
    /*while (*format != '\0')
    {
        ft_strsplit(format, ' ');

        if (*format == '%' && *++format)
        {
            parser(ap, *format, f);
        }
        else if (*format != '%')
        {
            ft_putchar(*format);
            ++i[1];
        }
        else
            return (i[1]);
        format++;
    }*/
    va_end(ap);
    return (i[1]);
}