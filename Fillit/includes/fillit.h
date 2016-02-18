#ifndef __FILLIT_H__
# define __FILLIT_H__
# include "../libft/libft.h"
# include <fcntl.h>

# define I() &search_i
# define J() &search_j
# define L() &search_l
# define O() &search_o
# define S() &search_s
# define T() &search_t
# define Z() &search_z
# define F() int	(*f[7])(char*) = {I(), J(), L(), O(), S(), T(), Z()}

# define RI() &pos_i
# define RJ() &pos_j
# define RL() &pos_l
# define RO() &pos_o
# define RS() &pos_s
# define RT() &pos_t
# define RZ() &pos_z
# define RF() int	(*f[7])(t_tetri*, char**, int*, int) = \
{RI(), RJ(), RL(), RO(), RS(), RT(), RZ()}

# define COORD() int i[2] = {-1, -1}
# define CHECK() int j[4] = {-1, -1, -1, 0}
# define CHAR_PIECE() char *char_piece = "ijlostz"

typedef struct 			s_tetri
{
	char				content;
	int					letter;
	int					rotation;
	struct s_tetri		*next;
}						t_tetri;

void	ft_error(char* str);
void	print_tab(char **tab);

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
int		pos_i(t_tetri *piece, char **tab, int *i, int len);
int		pos_o(t_tetri *piece, char **tab, int *i, int len);
/* POS_PIECE2.C */
int		pos_z(t_tetri *piece, char **tab, int *i, int len);
int		pos_s(t_tetri *piece, char **tab, int *i, int len);
/* POS_PIECE3.C */
int		pos_t(t_tetri *piece, char **tab, int *i, int len);
/* POS_PIECE4.C */
int		pos_l(t_tetri *piece, char **tab, int *i, int len);
/* POS_PIECE5.C */
int		pos_j(t_tetri *piece, char **tab, int *i, int len);

/* CHECK_TETRIMINOS.C */
int		check_verif_piece(char *piece);
int 	check_tetriminos(char *av);

/* LIST_TETRI.C */
int		tetris_length(t_tetri *tetri);
void	delete_tetris(t_tetri **tetris);
t_tetri	*create_piece(char content, int rotation);
int		add_elem(t_tetri **tetris, t_tetri *new);
t_tetri	*create_list(char *av);

/* TAB.C */
void	init_tab(char **tab, int x, int y, char c);
char	**ft_tabnew(int x, int y);
void	init_pos(char content, char **tab, int len);
int		full_tab(char **tab, int len);

/* RESOLVER.C */
int		calc_map_size(int nb_tetris);
void	free_tab(int tmp, int len, char **tab);
int		last_verif(t_tetri *tetris, char **tab, int len);
int 	recur_solver(t_tetri *tetris, char **tab);
char	**resolver(t_tetri *tetris);



#endif
