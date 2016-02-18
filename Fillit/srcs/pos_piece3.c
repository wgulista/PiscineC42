#include "../includes/fillit.h"

static int		pos_t1(t_tetri *piece, char **tab, int *i, int len)
{
	if (piece->rotation == 0)
		if ((len - (i[0] + 1)) > 0 && (len - (i[1] + 2)))
			if (tab[i[0]][i[1]] == '.' && tab[i[0]][i[1] + 1] == '.'
				&& tab[i[0]][i[1] + 2] == '.'
					&& tab[i[0] + 1][i[1] + 1] == '.')
			{
				tab[i[0]][i[1]] = piece->letter;
				tab[i[0]][i[1] + 1] = piece->letter;
				tab[i[0]][i[1] + 2] = piece->letter;
				tab[i[0] + 1][i[1] + 1] = piece->letter;
				return (1);
			}
	return (0);
}

static int		pos_t2(t_tetri *piece, char **tab, int *i, int len)
{
	if (piece->rotation == 1)
		if ((len - (i[0] + 2)) > 0 && i[1] > 0)
			if (tab[i[0]][i[1]] == '.' && tab[i[0] + 1][i[1]] == '.'
				&& tab[i[0] + 1][i[1] - 1] == '.'
					&& tab[i[0] + 2][i[1]] == '.')
			{
				tab[i[0]][i[1]] = piece->letter;
				tab[i[0] + 1][i[1]] = piece->letter;
				tab[i[0] + 1][i[1] - 1] = piece->letter;
				tab[i[0] + 2][i[1]] = piece->letter;
				return (1);
			}
	return (0);
}

static int		pos_t3(t_tetri *piece, char **tab, int *i, int len)
{
	if (piece->rotation == 2)
		if ((len - (i[0] + 1)) > 0 && (len - (i[1] + 1)) && i[1] > 0)
			if (tab[i[0]][i[1]] == '.' && tab[i[0] + 1][i[1]] == '.'
				&& tab[i[0] + 1][i[1] - 1] == '.'
					&& tab[i[0] + 1][i[1] + 1] == '.')
			{
				tab[i[0]][i[1]] = piece->letter;
				tab[i[0] + 1][i[1]] = piece->letter;
				tab[i[0] + 1][i[1] - 1] = piece->letter;
				tab[i[0] + 1][i[1] + 1] = piece->letter;
				return (1);
			}
	return (0);
}
static int		pos_t4(t_tetri *piece, char **tab, int *i, int len)
{
	if (piece->rotation == 3)
		if ((len - (i[0] + 2)) > 0 && (len - (i[1] + 1)) > 0)
			if (tab[i[0]][i[1]] == '.' && tab[i[0] + 1][i[1]] == '.'
				&& tab[i[0] + 1][i[1] + 1] == '.'
					&& tab[i[0] + 2][i[1]] == '.')
			{
				tab[i[0]][i[1]] = piece->letter;
				tab[i[0] + 1][i[1]] = piece->letter;
				tab[i[0] + 1][i[1] + 1] = piece->letter;
				tab[i[0] + 2][i[1]] = piece->letter;
				return (1);
			}
	return (0);
}

int				pos_t(t_tetri *piece, char **tab, int *i, int len)
{
	if (piece->rotation == 0)
		return (pos_t1(piece, tab, i, len));
	else if (piece->rotation == 1)
		return (pos_t2(piece, tab, i, len));
	else if (piece->rotation == 2)
		return (pos_t3(piece, tab, i, len));
	else if (piece->rotation == 3)
		return (pos_t4(piece, tab, i, len));
	else
		return (0);
}