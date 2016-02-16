#include "../includes/fillit.h"

int		calc_map_size(int nb_tetris)
{
	int		i;

	i = 2;
	while ((i * i) < (nb_tetris * 4))
		i++;
	return (i);
}

void	free_tab(int tmp, int len, char **tab)
{
	int 	i;

	i = -1;
	if (tmp <= 0)
	{
		while (++i < len)
			free(tab[i]);
		free(tab);
	}
}

int		last_verif(t_tetri *tetris, char **tab, int len)
{
	if (tetris == NULL)
		return (1);
	if (!full_tab(tab, len))
		return (-1);
	return (0);
}

int 	recur_solver(t_tetri *tetris, char **tab)
{
	int 	len;

	len = ft_strlen(tab[0]);
	RF();
	CHECK();
	CHAR_PIECE();
	if (last_verif(tetris, tab, len))
		return (last_verif(tetris, tab, len));
	while (++j[0] < len)
	{
		j[1] = -1;
		while (++j[1] < len)
			if (tab[j[0]][j[1]] == '.')
			{
				j[2] = -1;
				while (++j[2] < 7)
					if (tetris->content == char_piece[j[2]])
						if (f[j[2]](tetris, tab, j, len))
						{
							if ((j[3] = recur_solver(tetris->next, tab)) > 0)
								return (1);
							else if (j[3] == 0)
								init_pos(tetris->letter, tab, len);
							else
								return (-1);
						}
			}
	}
	return (0);
}

char	**resolver(t_tetri *tetris)
{
	char	**new;
	int		i;
	int		tmp;

	i = calc_map_size(tetris_length(tetris));
	tmp = 0;
	while (tmp <= 0 && i <= 11)
	{
		if (!(new = ft_tabnew(i, i + 1)))
			return (NULL);
		init_tab(new, i, i, '.');
		tmp = recur_solver(tetris, new);
		free_tab(tmp, i, new);
		i++;
	}
	return (new);
}