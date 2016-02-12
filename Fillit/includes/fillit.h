#ifndef __FILLIT_H__
# define __FILLIT_H__
# include "../libft/libft.h"
# include <fcntl.h>

# define I() &search_i
# define O() &search_o
# define T() &search_t
# define L() &search_l
# define J() &search_j
# define Z() &search_z
# define S() &search_s
# define F() int	(*f[7])(char*) = {I(), O(), T(), L(), J(), Z(), S()}

# define RI() &pos_i
# define RO() &pos_o
# define RT() &pos_t
# define RL() &pos_l
# define RJ() &pos_j
# define RZ() &pos_z
# define RS() &pos_s
# define RF() int	(*f[7])(t_tetri*, char**, int*, int) = {RI(), RO(), RT(), RL(), RJ(), RZ(), RS()}

# define COORD() int i[2] = {0, 0}
# define CHAR_PIECE() char *char_piece = "iotljzs"

typedef struct 			s_tetri
{
	char				*content;
	char				c;
	int					letter;
	int					rotation;
	int					x;
	int					y;
	int					x_start;
	int					y_start;
	struct s_tetri		*next;

}						t_tetri;

/* SEARCH_PIECE.C */
int		search_i(char *piece);
int		search_o(char *piece);
int		search_t(char *piece);
int		search_l(char *piece);

/* SEARCH_PIECE2.C */
int		search_j(char *piece);
int		search_z(char *piece);
int		search_s(char *piece);

/* POS_PIECE.C */
int		pos_i(t_tetri *piece, char **tab, int *i, int j);
int		pos_o(t_tetri *piece, char **tab, int *i, int j);
int		pos_j(t_tetri *piece, char **tab, int *i, int j);
/* POS_PIECE2.C */
int		pos_z(t_tetri *piece, char **tab, int *i, int j);
int		pos_s(t_tetri *piece, char **tab, int *i, int j);
/* POS_PIECE3.C */
int		pos_t(t_tetri *piece, char **tab, int *i, int j);
int		pos_t2(t_tetri *piece, char **tab, int *i, int j);
int		pos_t3(t_tetri *piece, char **tab, int *i, int j);
/* POS_PIECE4.C */
int		pos_l(t_tetri *piece, char **tab, int *i, int j);
int		pos_l2(t_tetri *piece, char **tab, int *i, int j);
int		pos_l3(t_tetri *piece, char **tab, int *i, int j);

/* CHECK_TETRIMINOS.C */
int		check_length_piece(char *piece);
int 	check_tetriminos(char *av);

/* LIST_TETRI.C */
int		listlen(t_tetri *list);
t_tetri	*create_piece(char *content, char c, int rotation);
int		add_elem(t_tetri **list, t_tetri *new);
t_tetri	*create_list(char *av);

/* TAB.C */
void	init_tab(char **tab, int x, int y, char c);
char	**ft_tabnew(int x, int y);
int		full_tab(char **ca, int i);

/* RESOLVER.C */
int		calc_map_size(int nb_tetris);
void	free_tab(int tmp, int i, char **new);
int		last_verif(t_tetri *tetris, char **new, int i);
int 	recur_solver(t_tetri *tetris, char **new);
char	**resolver(t_tetri *tetris);

/* PRINT_TAB.C */
void	print_tab(char **tab);

/* ERROR.C */
void	ft_error(char *str);

#endif
