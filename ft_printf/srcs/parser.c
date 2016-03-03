#include "../includes/ft_printf.h"

int		parser(va_list ap, char format, int (*f)(va_list, format))
{
	I();
	C();
	while (++i[1] < 15)
		if (conv[i[1]] == format)
			if (f[i[1]](ap, format))
				return (1);
	return (0);
}