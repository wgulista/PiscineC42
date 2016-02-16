#include "../includes/fillit.h"

int 	tetris_length(t_tetri *tetri)
{
	int		i;

	i = 0;
	while (tetri)
	{
		i++;
		tetri = tetri->next;
	}
	return (i);
}

void	delete_tetris(t_tetri **tetris)
{
	t_tetri 	*tetri;

	tetri = *tetris;
	if (tetri->next)
		delete_tetris(&(tetri->next));
	else
		free(tetri);
	tetri = NULL;
}

t_tetri	*create_piece(char content, int rotation)
{
	t_tetri		*new;

	if (!(new = (t_tetri*)malloc(sizeof(t_tetri))))
		return (NULL);
	new->content = content;
	new->rotation = rotation;
	new->next = NULL;
	return (new);
}

int		add_elem(t_tetri **tetris, t_tetri *new)
{
	t_tetri	*res;
	int		i;

	i = 0;
	res = *tetris;
	if (new == NULL)
		return (0);
	if (res == NULL)
	{
		new->letter = 'A' + i;
		*tetris = new;
	}
	else
	{
		i = 1;
		while (res->next)
		{
			i++;
			res = res->next;
		}
		new->letter = 'A' + i;
		res->next = new;
	}	
	return (1);
}

t_tetri	*create_list(char *av)
{
	int		i;
	int		j;
	int		fd;
	char	*piece[2];
	t_tetri	*new;
	
	F();
	new = NULL;
	if ((fd = open(av, O_RDONLY)) < 0)
		return (NULL);
	if ((!(piece[0] = ft_strnew(22)) || !(piece[1] = ft_strnew(8))))
		return (NULL);
	while (read(fd, piece[0], 21))
	{
		i = 0;
		while (i < 7 && (j = f[i](piece[0])) < 0)
			i++;
		piece[1] = "ijlostz";
		if (i == 7)
			return (NULL);
		if (!add_elem(&new, create_piece(piece[1][i], j)))
			return (NULL);
	}
	close(fd);
	return (new);
}