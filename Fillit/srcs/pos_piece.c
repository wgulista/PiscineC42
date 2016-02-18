#include "../includes/fillit.h"

int		pos_i(t_tetri *piece, char **tab, int *i, int len)
{
	if (len < 4)
		return (0);
	if (piece->rotation == 0)
	{
		if ((len - (i[0] + 3)) > 0)
			if (tab[i[0]][i[1]] == '.' && tab[i[0] + 1][i[1]] == '.'
				&& tab[i[0] + 2][i[1]] == '.' && tab[i[0] + 3][i[1]] == '.')
			{
				tab[i[0]][i[1]] = piece->letter;
				tab[i[0] + 1][i[1]] = piece->letter;
				tab[i[0] + 2][i[1]] = piece->letter;
				tab[i[0] + 3][i[1]] = piece->letter;
				return (1);
			}
	}
	if (piece->rotation == 1)
		if ((len - (i[1] + 3)) > 0)
			if (tab[i[0]][i[1]] == '.' && tab[i[0]][i[1] + 1] == '.'
				&& tab[i[0]][i[1] + 2] == '.' && tab[i[0]][i[1] + 3] == '.')
			{
				tab[i[0]][i[1]] = piece->letter;
				tab[i[0]][i[1] + 1] = piece->letter;
				tab[i[0]][i[1] + 2] = piece->letter;
				tab[i[0]][i[1] + 3] = piece->letter;
				return (1);
			}
	return (0);
}

int		pos_o(t_tetri *piece, char **tab, int *i, int len)
{
	if ((len - (i[0] + 1) > 0) && (len - (i[1] + 1) > 0))
	{
		if (tab[i[0]][i[1]] == '.' && tab[i[0]][i[1] + 1] == '.'
			&& tab[i[0] + 1][i[1]] == '.' && tab[i[0] + 1][i[1] + 1] == '.')
		{
			tab[i[0]][i[1]] = piece->letter;
			tab[i[0] + 1][i[1]] = piece->letter;
			tab[i[0]][i[1] + 1] = piece->letter;
			tab[i[0] + 1][i[1] + 1] = piece->letter;
			return (1);
		}
	}
	return (0);
}
