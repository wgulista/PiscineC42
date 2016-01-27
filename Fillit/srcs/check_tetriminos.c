#include "../includes/fillit.h"

/* retourne 1 si trouve in put parmis les tetriminos de la list sinon 0 */
int 		compare_tetriminos(char **list, char **input)
{
	int		i;

	i = 0;
	while (i < 4 && list[i] && input[i])
	{
		if (ft_strequ(list[i], input[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

void		find_tetriminos(char ***list, char **input)
{
	int		i;
	int		chk;

	i = 0;
	chk = 0;
	/* parcours chacun des tetriminos de la list et compare et input */
	while (list[i] && chk == 0)
	{
		chk = compare_tetriminos(list[i], input);
		i++;
	}
	/* si chk == 0 apres parcours de toute la list */
	if (chk == 0)
		ft_error("error : Invalid tetriminos found\n");
}


//A VERIFIER
char		**get_tetriminos_list(void)
{
	char	**list;

	list = (char **)malloc(sizeof(char *) * PIECE);
	list[0] = "....\n..#.\n..#.\n.##.\n";
	list[1] = "....\n....\n.#..\n.###\n";
	list[2] = "....\n.##.\n.#..\n.#..\n";
	list[3] = "....\n###.\n..#.\n....\n";
	list[4] = "....\n.###\n..#.\n....\n";
	list[5] = "....\n..#.\n.##.\n..#.\n";
	list[6] = "....\n.#..\n###.\n....\n";
	list[7] = "....\n.#..\n.##.\n.#..\n";
	list[8] = "....\n.#..\n.#..\n.##.\n";
	list[9] = "....\n.###\n.#..\n....\n";
	list[10] = "....\n.##.\n..#.\n..#.\n";
	list[11] = "....\n.#..\n.###\n....\n";
	list[12] = ".#..\n.#..\n.#..\n.#..\n";
	list[13] = "....\n####\n....\n....\n";
	list[14] = "....\n.##.\n.##.\n....\n";
	list[15] = "....\n.##.\n##..\n....\n";
	list[16] = "....\n.#..\n.##.\n..#.\n";
	list[17] = "....\n.##.\n..##\n....\n";
	list[18] = "....\n..#.\n.##.\n.#..\0";
	list[19] = NULL;

	return (list);
}


void		check_tetriminos(char ***tetriminos_input)
{
	int		k;
	int		nb_tetriminos;
	char	***tetriminos;
	//char	*tetriminos_list;

	k = 0;
	//tetriminos_list = ft_read("tetriminos_list.txt");
	nb_tetriminos = count_tetriminos(**tetriminos_input);
	//tetriminos = position_tetriminos(get_input(tetriminos_list));

	tetriminos = position_tetriminos(string_to_array(nb_tetriminos, get_tetriminos_list()));
	
	/* boucle sur chacun des tetriminos entré */
	while (k < nb_tetriminos && tetriminos_input[k])
	{
		/* verifie que le tetrimino existe dans la liste */
		find_tetriminos(tetriminos, tetriminos_input[k]);
		k++;
	}
}