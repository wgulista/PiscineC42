#include "../includes/fillit.h"

int		check_length_piece(char *piece)
{
	int		length;
	int		dot;
	int		sharp;

	length = 0;
	dot = 0;
	sharp = 0;
	while (*piece == '.' || *piece == '#' || *piece == '\n')
	{
		if ((length == 4 || length == 9 || length == 14) &&
			*piece != '\n')
			return (0);
		if (*piece == '.')
			dot++;
		if (*piece == '#')
			sharp++;
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
		if (check_length_piece(piece) == 1)
			y++;
		x++;
		tmp = rd;
	}
	close(fd);
	if (x == y && y != 0 && x < 27 && tmp == 20)
		return (1);
	else
		return (0);
}