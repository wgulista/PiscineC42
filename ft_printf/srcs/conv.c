#include "../includes/ft_printf.h"

int		conv_s(va_list ap, char format)
{
	char	*s;

	if (format == 's')
	{
		s = va_arg(ap, char*);
		ft_putstr(s);
		return (1);
	}
	if (format == 'S')
	{
		s = va_arg(ap, char*);
		ft_putstr(s);
		return (1);
	}
	return (0);
}

int		conv_p(va_list ap, char format)
{
	char	*s;

	if (format == 'p')
	{
		s = va_arg(ap, char*);
		ft_putstr(s);
		return (1);
	}
	return (0);
}

int		conv_d(va_list ap, char format)
{
	int		d;

	if (format == 'd')
	{
		d = va_arg(ap, int);
		printf("%d\n", d);
		//ft_putstr(ft_atoi(d));
		return (1);
	}
	if (format == 'D')
	{
		d = va_arg(ap, int);
		printf("%d\n", d);
		//ft_putstr(ft_atoi(d));
		return (1);
	}
	return (0);
}

int		conv_i(va_list ap, char format)
{
	char	*s;

	if (format == 'i')
	{
		s = va_arg(ap, char*);
		//ft_putstr((char)s);
		return (1);
	}
	return (0);
}
