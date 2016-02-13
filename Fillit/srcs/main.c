#include "../includes/fillit.h"

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