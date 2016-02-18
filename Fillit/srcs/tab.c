#include "../includes/fillit.h"

void	init_tab(char **tab, int x, int y, char c)
{
	COORD();

	while (++i[0] < x)
	{
		i[1] = -1;
		while (++i[1] < y)
			tab[i[0]][i[1]] = c;
	}
}

char	**ft_tabnew(int x, int y)
{
	char	**new;
	int 	i;
	int 	j;

	i = -1;
	j = -1;
	if (!(new = (char **)malloc(sizeof(char*) * (x + 1))))
		return (NULL);
	while (++i < x)
	{
		if (!(new[i] = (char*)malloc(sizeof(char) * (y))))
			return (NULL);
		while (++j < y)
			new[i][j] = 0;
	}
	new[i] = NULL;
	return (new);
}

void	init_pos(char letter, char **tab, int len)
{
	COORD();

	while (++i[0] < len)
	{
		i[1] = -1;
		while (++i[1] < len)
		{
			if (tab[i[0]][i[1]] == letter)
				tab[i[0]][i[1]] = '.';
		}
	}
}

int		full_tab(char **tab, int len)
{
	int	nb;
	COORD();

	nb = 0;
	while (++i[0] < len)
	{
		i[1] = -1;
		while (++i[1] < len)
			if (tab[i[0]][i[1]] == '.')
				nb++;
	}
	if (nb <= 3)
		return (0);
	return (1);
}