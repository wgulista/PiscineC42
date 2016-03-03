#include "../includes/ft_printf.h"

int		main()
{
	char	*s = "wasim";
	printf("%o\n", 9);
	ft_printf("% s\n % d\n % c\n", s, 10, 'a');
	return (0);
}