#include "../includes/ft_printf.h"

int		conv_o(va_list ap, char format)
{
	char	*s;

	if (format == 'o')
	{
		s = va_arg(ap, char*);
		ft_putstr(s);
		return (1);
	}
	if (format == 'O')
	{
		s = va_arg(ap, char*);
		ft_putstr(s);
		return (1);
	}
	return (0);
}

int		conv_u(va_list ap, char format)
{
	char	*s;

	if (format == 'u')
	{
		s = va_arg(ap, char*);
		ft_putstr(s);
		return (1);
	}
	if (format == 'U')
	{
		s = va_arg(ap, char*);
		ft_putstr(s);
		return (1);
	}
	return (0);
}

int		conv_x(va_list ap, char format)
{
	char	*s;

	if (format == 'x')
	{
		s = va_arg(ap, char*);
		ft_putstr(s);
		return (1);
	}
	if (format == 'X')
	{
		s = va_arg(ap, char*);
		ft_putstr(s);
		return (1);
	}
	return (0);
}

int		conv_c(va_list ap, char format)
{
	char		c;

	if (format == 'c')
	{
		c = (char) va_arg(ap, int);
		ft_putchar(c);
		return (1);
	}
	return (0);
}
	