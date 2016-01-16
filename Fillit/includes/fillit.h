#ifndef __FILLIT_H__
# define __FILLIT_H__
# define BUFF_SIZE 1
# include "../libft/libft.h"
# include <fcntl.h>
# include <stdio.h>

char   *ft_read(char *file);
void   fillit();
void   ft_error();
#endif
