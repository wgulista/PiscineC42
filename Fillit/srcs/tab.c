#include "../includes/fillit.h"

void	init_tab(char **tab, int x, int y, char c)
{
	while (x < 5)
	{
		while (y < 5)
		{
			tab[x][y] = c;
			y++;
		}
		x++;
	}
}

char	**ft_tabnew(int x, int y)
{
	char	**new;
	int 	i;
	int 	j;

	i = 0;
	j = 0;
	if (!(new = (char **)malloc(sizeof(char*) * (x * y + 1))))
		return (NULL);
	while (i < x)
	{
		while (j < y)
		{
			new[i][x] = 0;
			j++;
		}
		i++;
	}
	return (new);
}

int		full_tab(char **ca, int i)
{
	int	j[2];
	int	nb;

	j[0] = -1;
	nb = 0;
	while (++j[0] < i)
	{
		j[1] = -1;
		while (++j[1] < i)
			if (ca[j[0]][j[1]] == '.')
				nb++;
	}
	if (nb <= 3)
		return (0);
	return (1);
}