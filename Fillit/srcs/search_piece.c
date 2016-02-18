#include "../includes/fillit.h"

int		search_i(char *piece)
{
	int		i;

	i = 0;
	while (piece[i] != '#')
		i++;
	if (piece[i + 5] == '#' && piece[i + 10] == '#' && piece[i + 15] == '#')
		return (0);
	else if (piece[i + 1] == '#' && piece[i + 2] == '#' && piece[i + 3] == '#')
		return (1);
	return (-1);
}

int		search_o(char *piece)
{
	int	i;

	i = 0;
	while (piece[i] != '#')
		i++;
	if (piece[i + 1] == '#' && piece[i + 5] == '#' && piece[i + 6] == '#')
		return (1);
	return (-1);
}

int		search_t(char *piece)
{
	int	i;

	i = 0;
	while (piece[i] != '#')
		i++;
	if (piece[i + 1] == '#' && piece[i + 2] == '#' && piece[i + 6] == '#')
		return (0);
	else if (piece[i + 4] == '#' && piece[i + 5] == '#' && piece[i + 10] == '#')
		return (1);
	else if (piece[i + 4] == '#' && piece[i + 5] == '#' && piece[i + 6] == '#')
		return (2);
	else if (piece[i + 5] == '#' && piece[i + 6] == '#' && piece[i + 10] == '#')
		return (3);
	return (-1);
}

int		search_l(char *piece)
{
	int	i;

	i = 0;
	while (piece[i] != '#')
		i++;
	if (piece[i + 5] == '#' && piece[i + 10] == '#' && piece[i + 11] == '#')
		return (0);
	else if (piece[i + 1] == '#' && piece[i + 2] == '#' && piece[i + 5] == '#')
		return (1);
	else if (piece[i + 1] == '#' && piece[i + 6] == '#' && piece[i + 11] == '#')
		return (2);
	else if (piece[i + 3] == '#' && piece[i + 4] == '#' && piece[i + 5] == '#')
		return (3);
	return (-1);
}