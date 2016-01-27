#include "../includes/fillit.h"

void	print_table(char ***tab)
{
	int		i;
	int		j;
	int		k;
	char	letter;

	i = 0;
	j = 0;
	k = 0;
	letter = 'A';
	while (tab[i])
	{
		while (k < 4 && tab[i][j])
		{
			if (k < 4)
				ft_putchar('\n');
			ft_putstr(diese_to_letter(tab[i][j], letter));
			k++;
			j++;
		}
		letter++;
		ft_putchar('\n');
		k = 0;
		j = 0;
		i++;
	}
}