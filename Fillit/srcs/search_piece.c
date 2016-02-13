#include "../includes/fillit.h"

int		search_i(char *piece)
{
	int		i;

	i = 0;
	while (piece[i] != '#')
		i++;
	if (i == 0 || i == 5 || i == 10 || i == 15)
	{
		if (piece[i + 1] == '#' && piece[i + 2] == '#' && piece[i + 3] == '#')
			return (1);
		else if (i != 0)
			return (-1);
	}
	if (i == 0 || i == 1 || i == 2 || i == 3)
	{
		if (piece[i + 5] == '#' && piece[i + 10] == '#' && piece[i + 15] == '#')
			return (0);
		else if (i != 0)
			return (-1);
	}
	return (-1);
}

int		search_o(char *piece)
{
	int	i;

	i = 0;
	while (piece[i] != '#')
		i++;
	if (i < 13)
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
	if (i < 8)
		if (piece[i + 5] == '#' && piece[i + 6] == '#' && piece[i + 10] == '#')
			return (3);
	if (i < 9)
		if (piece[i + 4] == '#' && piece[i + 5] == '#' && piece[i + 10] == '#')
			return (1);
	if (i < 12)
		if (piece[i + 1] == '#' && piece[i + 2] == '#' && piece[i + 6] == '#')
			return (0);
	if (i < 13)
		if (piece[i + 4] == '#' && piece[i + 5] == '#' && piece[i + 6] == '#')
			return (2);
	return (-1);
}

int		search_l(char *piece)
{
	int	i;

	i = 0;
	while (piece[i] != '#')
		i++;
	if (i < 8)
	{
		if (piece[i + 5] == '#' && piece[i + 10] == '#' && piece[i + 11] == '#')
			return (0);
		else if (piece[i + 1] == '#' && piece[i + 6] == '#' 
			&& piece[i + 11] == '#')
			return (2);
	}
	if (i < 12)
		if (piece[i + 1] == '#' && piece[i + 2] == '#' && piece[i + 5] == '#')
			return (1);
	if (i < 14)
		if (piece[i + 3] == '#' && piece[i + 4] == '#' && piece[i + 5] == '#')
			return (3);
	return (-1);
}