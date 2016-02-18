#include "../includes/fillit.h"

void	ft_error(char *str)
{
	ft_putendl(str);
	exit(EXIT_FAILURE);
}

void	print_tab(char **tab)
{
	int		i;
	int		length;
	
	i = -1;
	length = ft_strlen(tab[0]);
	while (++i < length)
		ft_putendl(tab[i]);
}

int		main(int ac, char **av)
{
	t_tetri		*tetri;
	char		**tab;
 
	if (ac != 2)
		ft_error("error");
	if (!check_tetriminos(av[1]))
		ft_error("error");
	if (!(tetri = create_list(av[1])))
		ft_error("error");
	if (!(tab = resolver(tetri)))
		ft_error("error");
	print_tab(tab);
	delete_tetris(&tetri);
	return (1);
}