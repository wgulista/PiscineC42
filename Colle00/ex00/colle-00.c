#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


// version flemmard sans gestion erreur
int	ft_atoi(char *argv)
{
	unsigned int value;

	value = 0;
	while (*argv != '\0')
	{
		value = (value * 10) + (int)(*argv - '0');
		argv++;
	}
	return (value);
}

// Permet d'afficher un carre
// Verifie les coins
void	square(unsigned int x, unsigned int y, unsigned int width, unsigned int height)
{
	if ((width == 1) && (height == 1)) // coin en haut a gauche
		ft_putchar('o');
	else if ((width == x) && (height == 1)) // coin en haut a droite
		ft_putchar('o');
	else if ((width == 1) && (height == y)) // coin en bas a gauche
		ft_putchar('o');
	else if ((width == x) && (height == y)) // coin en bas a droite
		ft_putchar('o');
	else if ((width == 1) || (width == x))
		ft_putchar('-');
	else if ((height == 1) || (height == y))
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	colle(unsigned int x, unsigned int y)
{
	unsigned int width;
	unsigned int height;

	width = 1;
	while (width <= x)
	{
		height = 1;
		while (height <= y)
		{
			square(x, y, width, height);
			height++;
		}
		ft_putchar('\n');
		width++;
	}
}

// une fois compiler
// ajouter 2 argument de type int
// ex : executable 5 5
int	main(int argc, char **argv)
{
	if (argc == 3)
		colle(ft_atoi(argv[1]), ft_atoi(argv[2]));
	ft_putchar('\n');
	return (0);
}
