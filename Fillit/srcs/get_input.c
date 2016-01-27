#include "../includes/fillit.h"

void		check_input(char *str)
{
	int		len;
	int		i;
	int		n;
	int		tetrimino_count;

	i = -1;
	tetrimino_count = 1;
	len = ft_strlen(str);
	if (!len/20)
		ft_error("error : file content input too short\n");
	if (len > (26 * 20) + 25)
		ft_error("error : file content input too long\n");
	while (str[++i])
	{
		n = i < 20 ? 0 : tetrimino_count - 1;
		if (str[i] != '\n' && str[i] != '.' && str[i] != '#')
			ft_error("error : invalid character found\n");
		// for tetrimino_count = 1 -> i = 20 * 1 + 1 - 1 = 20 -> separator position
		// tetrimino_count = 2 -> i = 20 * 2 + 2 -1 = 41 etc...
		// check separator
		if (i > 0 && i == (20 * tetrimino_count) + tetrimino_count - 1 && str[i] != '\n')
			ft_error("error : invalid tetriminos separator\n");
		if (i > 0 && str[i] == '\n' && i != (20 * tetrimino_count) + tetrimino_count - 1 &&
			(i + 1 - n)%5 != 0)
			ft_error("error : wrong return positioning\n");
		// increase count if reach a separator
		if (i > 0 && i == (20 * tetrimino_count) + tetrimino_count - 1)
			tetrimino_count++;
	}
}

int			count_tetriminos(char *str)
{
	int		len;
	int		nb_tetriminos;

	len = ft_strlen(str);
	if (len > 20 * 20 + 19)
		nb_tetriminos = (len - 20) / 20;
	else
		nb_tetriminos = len / 20;
	return (nb_tetriminos);
}

//recupere un tableau de tetriminos en string
char		**get_tetriminos(int nb_tetriminos, char *str)
{
	int		i;
	int		n;
	int		len;
	char	**tetriminos;

	i = 0;
	n = 0;
	len = ft_strlen(str);
	tetriminos = (char **)malloc((nb_tetriminos + 1) * sizeof (char *));
	while (i < len && str[i] && n < nb_tetriminos)
	{
		tetriminos[n] = (char *)malloc(21 * sizeof(char));
		ft_memcpy(tetriminos[n], &str[i], 20);
		tetriminos[n][20] = '\0';
		i = i + 21;
		n++;
	}
	tetriminos[n] = NULL;
	return tetriminos;
}

//change le tetrimino string en tableau a deux dimensions
//A verifier si tout fonctionne correctement !
char		***string_to_array(int nb_tetriminos, char **tetriminos)
{
	int		i;
	int		j;
	char	***tetriminos_array;
	char	**tmp;

	tetriminos_array = (char ***)malloc((nb_tetriminos + 1) * sizeof(char **));
	i = 0;
	// chaque ligne contient un tetramino sous forme d'une seul string
	while (i < nb_tetriminos && tetriminos[i])
	{
		tmp = (char **)malloc((5) * sizeof(char *));
		j = 0;
		//boucle sur les differente ligne du tableau 
		while (j < 4 && tetriminos[i][j * 5])
		{
			tmp[j] = (char *)malloc(5 * sizeof(char));
			tmp[j] = ft_memcpy(&tmp[j][0], &tetriminos[i][j * 5], 4);
			tmp[j][4] = '\0';
			j++;
		}
		tmp[j] = NULL;
		tetriminos_array[i] = tmp;
		i++;
	}
	tetriminos_array[i] = NULL;



// verification du contenu de tetriminos_array
// i = 0;
// while (tetriminos_array[i])
// {
// 	j = 0;
// 	while (j < 4 && tetriminos_array[i][j])
// 	{
// 		ft_putendl(tetriminos_array[i][j]);
// 		j++;
// 	}
// 	i++;
// }


	free(tetriminos);
	return (tetriminos_array);
}

char		***get_input(char *str)
{
	int		nb;
	int		nb_tetriminos;
	char	**tetriminos;
	char	***tetriminos_array;

	nb = -1;
	nb_tetriminos = count_tetriminos(str);
	check_input(str);
	tetriminos = get_tetriminos(nb_tetriminos, str);
	tetriminos_array = string_to_array(nb_tetriminos, tetriminos);
	return (tetriminos_array);
}
