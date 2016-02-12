#include "../includes/fillit.h"

int		calc_map_size(int nb_tetris)
{
	int		i;

	i = 2;
	while ((i * i) < (nb_tetris * 4))
		i++;
	return (i);
}

void	free_tab(int tmp, int i, char **new)
{
	int 	j;

	j = -1;
	if (tmp <= 0)
	{
		while (++j < i)
			free(new[j]);
		free(new);
	}
}

int		last_verif(t_tetri *tetris, char **new, int i)
{
	if (tetris == NULL)
		return (1);
	if (!full_tab(new, i))
		return (-1);
	return (0);
}

int 	recur_solver(t_tetri *tetris, char **new)
{
	int 	len;

	len = ft_strlen(new[0]);
	//COORD();
	//CHAR_PIECE();
	ft_putendl(tetris->content);
	return (0);
}

char	**resolver(t_tetri *tetris)
{
	char	**new;
	int		i;
	int		tmp;

	i = calc_map_size(listlen(tetris));
	tmp = 0;
	while (tmp <= 0 && i <= 11)
	{
		if (!(new = ft_tabnew(i, i + 1)))
			return (NULL);
		init_tab(new, 0, 0, '.');
		tmp = recur_solver(tetris, new);
		free_tab(tmp, i, new);
		i++;
	}
	return (new);
}