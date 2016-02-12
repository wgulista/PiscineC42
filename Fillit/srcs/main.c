#include "../includes/fillit.h"

int		main(int ac, char **av)
{
	t_tetri		*tetri;
	char		**tab;
 
	if (ac != 2)
		ft_error("error");
	ft_putnbr_endl(check_tetriminos(av[1]), 1);
	if (!check_tetriminos(av[1]))
		ft_error("error");
	if (!(tetri = create_list(av[1])))
		ft_error("error");
	/*while (tetri)
	{
		ft_putendl(tetri->content);
		tetri = tetri->next;
	}*/
	if ((tab = resolver(tetri)) == NULL)
		ft_error("error");
	//print_tab(av);
	//delete_list(&tetri);
	return (1);
}