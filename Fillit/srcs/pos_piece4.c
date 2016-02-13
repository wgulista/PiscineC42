#include "../includes/fillit.h"

int		pos_l(t_tetri *piece, char **tab, int *i, int j)
{
	if (piece->rotation >= 0 && piece->rotation <= 1)
		return (pos_l2(piece, tab, i, j));
	else if (piece->rotation >= 2 && piece->rotation <= 3)
		return (pos_l3(piece, tab, i, j));
	else
		return (0);
}

int		pos_l2(t_tetri *piece, char **tab, int *i, int j)
{
	if (piece->rotation == 0)
		if ((j - (i[0] + 2)) > 0 && (j - (i[1] + 1)))
			if (tab[i[0]][i[1]] == '.' && tab[i[0] + 1][i[1]] == '.'
				&& tab[i[0] + 2][i[1]] == '.'
					&& tab[i[0] + 2][i[1] + 1] == '.')
			{
				tab[i[0]][i[1]] = piece->letter;
				tab[i[0] + 1][i[1]] = piece->letter;
				tab[i[0] + 2][i[1]] = piece->letter;
				tab[i[0] + 2][i[1] + 1] = piece->letter;
				return (1);
			}
	if (piece->rotation == 1)
		if ((j - (i[0] + 1)) > 0 && (j - (i[1] + 2)) > 0)
			if (tab[i[0]][i[1]] == '.' && tab[i[0] + 1][i[1]] == '.'
				&& tab[i[0]][i[1] + 1] == '.'
					&& tab[i[0]][i[1] + 2] == '.')
			{
				tab[i[0]][i[1]] = piece->letter;
				tab[i[0] + 1][i[1]] = piece->letter;
				tab[i[0]][i[1] + 1] = piece->letter;
				tab[i[0]][i[1] + 2] = piece->letter;
				return (1);
			}
	return (0);
}

int		pos_l3(t_tetri *piece, char **tab, int *i, int j)
{
	if (piece->rotation == 2)
		if ((j - (i[0] + 2)) > 0 && (j - (i[1] + 1)))
			if (tab[i[0]][i[1]] == '.' && tab[i[0]][i[1] + 1] == '.'
				&& tab[i[0] + 1][i[1] + 1] == '.'
					&& tab[i[0] + 2][i[1] + 1] == '.')
			{
				tab[i[0]][i[1]] = piece->letter;
				tab[i[0]][i[1] + 1] = piece->letter;
				tab[i[0] + 1][i[1] + 1] = piece->letter;
				tab[i[0] + 2][i[1] + 1] = piece->letter;
				return (1);
			}
	if (piece->rotation == 3)
		if ((j - (i[0] + 1)) > 0 && i[1] > 1)
			if (tab[i[0]][i[1]] == '.' && tab[i[0] + 1][i[1]] == '.'
				&& tab[i[0] + 1][i[1] - 1] == '.'
					&& tab[i[0] + 1][i[1] - 2] == '.')
			{
				tab[i[0]][i[1]] = piece->letter;
				tab[i[0] + 1][i[1]] = piece->letter;
				tab[i[0] + 1][i[1] - 1] = piece->letter;
				tab[i[0] + 1][i[1] - 2] = piece->letter;
				return (1);
			}
	return (0);
}