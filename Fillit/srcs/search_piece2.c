#include "../includes/fillit.h"

int		search_j(char *piece)
{
	int	i;

	i = 0;
	while (piece[i] != '#')
		i++;
	if (i < 8)
		if (piece[i + 1] == '#' && piece[i + 5] == '#' && piece[i + 10] == '#')
			return (2);
	if (i < 9)
		if (piece[i + 5] == '#' && piece[i + 9] == '#' && piece[i + 10] == '#')
			return (0);
	if (i < 12)
	{
		if (piece[i + 5] == '#' && piece[i + 6] == '#' && piece[i + 7] == '#')
			return (1);
		if (piece[i + 1] == '#' && piece[i + 2] == '#' && piece[i + 7] == '#')
			return (3);
	}
	return (-1);
}

int		search_z(char *piece)
{
	int	i;

	i = 0;
	while (piece[i] != '#')
		i++;
	if (i < 9)
		if (piece[i + 4] == '#' && piece[i + 5] == '#' && piece[i + 9] == '#')
			return (1);
	if (i < 12)
		if (piece[i + 1] == '#' && piece[i + 6] == '#' && piece[i + 7] == '#')
			return (0);
	return (-1);
}

int		search_s(char *piece)
{
	int	i;

	i = 0;
	while (piece[i] != '#')
		i++;
	if (i < 8)
		if (piece[i + 5] == '#' && piece[i + 6] == '#' && piece[i + 11] == '#')
			return (1);
	if (i < 13)
		if (piece[i + 1] == '#' && piece[i + 4] == '#' && piece[i + 5] == '#')
			return (0);
	return (-1);
}