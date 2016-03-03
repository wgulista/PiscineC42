#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/includes/libft.h"
# include <stdarg.h>
# include <stdio.h>

# define I() int i[2] = {-1, -1}
# define C() char *conv = "sSpdDioOuUxXcC"

typedef struct		s_env
{
	char 			*convention;
	int				hashtag;
	int 			zero;
	int 			minus;
	int 			plus;
	int 			space;
	int 			precision;
	int 			isprecision;
	struct s_env 	*next;
}					t_env;

/*typedef struct 	s_func
{
	int			int (*f[20])(va_list ap, char format);
}				t_func;	*/

/* FUNC.C */
//void    ft_init_func(t_func *func);

/* CONV.C */
int		conv_s(va_list ap, char format);
int		conv_p(va_list ap, char format);
int		conv_d(va_list ap, char format);
int		conv_i(va_list ap, char format);
/* CONV2.C */
int		conv_o(va_list ap, char format);
int		conv_u(va_list ap, char format);
int		conv_x(va_list ap, char format);
int		conv_c(va_list ap, char format);

/* PARSER.C */
//int		parser(va_list ap, char format, int (*f)(va_list, format));

/* FT_PRINTF.C */
int		ft_printf(const char *format, ...);

#endif