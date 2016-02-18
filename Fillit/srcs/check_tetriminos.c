#include "../includes/fillit.h"

static int	check_length_endl(int len, char c)
{
	if ((len == 4 || len == 9 || len == 14) && c != '\n')
		return (0);
	return (1);
}

static int	valid_tetriminos(int x, int y, int tmp)
{
	if (x == y && y != 0 && x < 27 && tmp == 20)
		return (1);
	return (0);
}

static void	incre_dot_sharp(int *dot, int *sharp, char c)
{
	if (c == '.')
		*dot += 1;
	if (c == '#')
		*sharp += 1;
}

int			check_verif_piece(char *piece)
{
	int		length;
	int		dot;
	int		sharp;

	length = 0;
	dot = 0;
	sharp = 0;
	while (*piece == '.' || *piece == '#' || *piece == '\n')
	{
		check_length_endl(length, *piece);
		incre_dot_sharp(&dot, &sharp, *piece);
		length++;
		piece++;
	}
	if ((length == 21 || length == 12) && dot == 12 && sharp == 4)
		return (1);
	return (0);
}

int 	check_tetriminos(char *av)
{
	char	piece[21];
	int		fd;
	int		rd;
	int		x;
	int		y;
	int		tmp;

	x = 0;
	y = 0;
	if ((fd = open(av, O_RDONLY)) < 0)
		ft_error("error");
	while ((rd = read(fd, piece, 21)) > 0)
	{
		if (check_verif_piece(piece) == 1)
			y++;
		x++;
		tmp = rd;
	}
	close(fd);
	return (valid_tetriminos(x, y, tmp));
}