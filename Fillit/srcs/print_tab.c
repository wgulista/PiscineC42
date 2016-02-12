#include "../includes/fillit.h"

void	print_tab(char **tab)
{
	int		i;
	int		length;
	
	i = -1;
	length = ft_strlen(tab[1]);
	while (++i < length)
		ft_putendl(tab[i]);
}