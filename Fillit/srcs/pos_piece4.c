#include "../includes/fillit.h"

static int		pos_l1(t_tetri *piece, char **tab, int *i, int len)
{
	if (piece->rotation == 0)
		if ((len - (i[0] + 2)) > 0 && (len - (i[1] + 1)))
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
	return (0);
}

static int		pos_l2(t_tetri *piece, char **tab, int *i, int len)
{
	if (piece->rotation == 1)
		if ((len - (i[0] + 1)) > 0 && (len - (i[1] + 2)) > 0)
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

static int		pos_l3(t_tetri *piece, char **tab, int *i, int len)
{
	if (piece->rotation == 2)
		if ((len - (i[0] + 2)) > 0 && (len - (i[1] + 1)))
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
	return (0);
}

static int		pos_l4(t_tetri *piece, char **tab, int *i, int len)
{
	if (piece->rotation == 3)
		if ((len - (i[0] + 1)) > 0 && i[1] > 1)
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

int				pos_l(t_tetri *piece, char **tab, int *i, int len)
{
	if (piece->rotation == 01)
		return (pos_l1(piece, tab, i, len));
	else if (piece->rotation == 1)
		return (pos_l2(piece, tab, i, len));
	else if (piece->rotation == 2)
		return (pos_l3(piece, tab, i, len));
	else if (piece->rotation == 3)
		return (pos_l4(piece, tab, i, len));
	else
		return (0);
}