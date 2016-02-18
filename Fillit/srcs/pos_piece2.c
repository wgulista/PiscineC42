#include "../includes/fillit.h"

int		pos_z(t_tetri *piece, char **tab, int *i, int len)
{
	if (piece->rotation == 0)
		if ((len - (i[0] + 1)) > 0 && (len - (i[1] + 2)) > 0)
			if (tab[i[0]][i[1]] == '.' && tab[i[0]][i[1] + 1] == '.'
				&& tab[i[0] + 1][i[1] + 1] == '.'
					&& tab[i[0] + 1][i[1] + 2] == '.')
			{
				tab[i[0]][i[1]] = piece->letter;
				tab[i[0]][i[1] + 1] = piece->letter;
				tab[i[0] + 1][i[1] + 1] = piece->letter;
				tab[i[0] + 1][i[1] + 2] = piece->letter;
				return (1);
			}
	if (piece->rotation == 1)
		if ((len - (i[0] + 2)) > 0 && i[1] > 0)
			if (tab[i[0]][i[1]] == '.' && tab[i[0] + 1][i[1]] == '.'
				&& tab[i[0] + 1][i[1] - 1] == '.'
					&& tab[i[0] + 2][i[1] - 1] == '.')
			{
				tab[i[0]][i[1]] = piece->letter;
				tab[i[0] + 1][i[1]] = piece->letter;
				tab[i[0] + 1][i[1] - 1] = piece->letter;
				tab[i[0] + 2][i[1] - 1] = piece->letter;
				return (1);
			}
	return (0);
}

int		pos_s(t_tetri *piece, char **tab, int *i, int len)
{
	if (piece->rotation == 0)
		if ((len - (i[0] + 1)) > 0 && (len - (i[1] + 1)) > 0 && i[1] > 0)
			if (tab[i[0]][i[1]] == '.' && tab[i[0]][i[1] + 1] == '.'
				&& tab[i[0] + 1][i[1]] == '.'
					&& tab[i[0] + 1][i[1] - 1] == '.')
			{
				tab[i[0]][i[1]] = piece->letter;
				tab[i[0]][i[1] + 1] = piece->letter;
				tab[i[0] + 1][i[1]] = piece->letter;
				tab[i[0] + 1][i[1] - 1] = piece->letter;
				return (1);
			}
	if (piece->rotation == 1)
		if ((len - (i[0] + 2)) > 0 && (len - (i[1] + 1)) > 0)
			if (tab[i[0]][i[1]] == '.' && tab[i[0] + 1][i[1]] == '.'
				&& tab[i[0] + 1][i[1] + 1] == '.'
					&& tab[i[0] + 2][i[1] + 1] == '.')
			{
				tab[i[0]][i[1]] = piece->letter;
				tab[i[0] + 1][i[1]] = piece->letter;
				tab[i[0] + 1][i[1] + 1] = piece->letter;
				tab[i[0] + 2][i[1] + 1] = piece->letter;
				return (1);
			}
	return (0);
}
