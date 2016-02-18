#include "../includes/fillit.h"

int		search_j(char *piece)
{
	int	i;

	i = 0;
	while (piece[i] != '#')
		i++;
	if (piece[i + 5] == '#' && piece[i + 9] == '#' && piece[i + 10] == '#')
		return (0);
	else if (piece[i + 5] == '#' && piece[i + 6] == '#' && piece[i + 7] == '#')
		return (1);
	else if (piece[i + 1] == '#' && piece[i + 5] == '#' && piece[i + 10] == '#')
		return (2);
	else if (piece[i + 1] == '#' && piece[i + 2] == '#' && piece[i + 7] == '#')
		return (3);
	return (-1);
}

int		search_z(char *piece)
{
	int	i;

	i = 0;
	while (piece[i] != '#')
		i++;
	if (piece[i + 1] == '#' && piece[i + 6] == '#' && piece[i + 7] == '#')
		return (0);
	else if (piece[i + 4] == '#' && piece[i + 5] == '#' && piece[i + 9] == '#')
		return (1);
	return (-1);
}

int		search_s(char *piece)
{
	int	i;

	i = 0;
	while (piece[i] != '#')
		i++;
	if (piece[i + 1] == '#' && piece[i + 4] == '#' && piece[i + 5] == '#')
		return (0);
	else if (piece[i + 5] == '#' && piece[i + 6] == '#' && piece[i + 11] == '#')
		return (1);
	return (-1);
}