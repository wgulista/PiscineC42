#include "../includes/fillit.h"

int 	listlen(t_tetri *list)
{
	int		i;

	i = 0;
	while (list)
	{
		i++;
		list = list->next;
	}
	return (i);
}

t_tetri	*create_piece(char *content, char c, int rotation)
{
	t_tetri		*new;
	int			width;
	int			height;

	width = 0;
	height = 0;
	while (*content != '\0')
	{
		if (*content == '\n')
			height++;
		if (*content == '#' || *content == '.')
			width++;
		content++;
	}
	if (!(new = (t_tetri*)malloc(sizeof(t_tetri))))
		return (NULL);
	new->content = content;
	new->c = c;
	new->rotation = rotation;
	new->x = width / 4;
	new->y = height - 1;
	new->x_start = 0;
	new->y_start = 0;
	return (new);
}

int		add_elem(t_tetri **list, t_tetri *new)
{
	t_tetri	*res;
	int		i;

	i = 0;
	res = *list;
	if (new == NULL)
		return (0);
	if (res == NULL)
	{
		new->c = 'A' + i;;
		*list = new;
	}
	else
	{
		i = 1;
		while (res->next)
		{
			i++;
			res = res->next;
		}
		new->c = 'A' + i;;
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
		if (!add_elem(&new, create_piece(piece[0], piece[1][i], j)))
			return (NULL);
	}
	close(fd);
	return (new);
}