#ifndef __GET_NEXT_LINE_H__
# define __GET_NEXT_LINE_H__
# include "libft/includes/libft.h"
# include <fcntl.h>
# include <stdio.h> 

# define BUFF_SIZE 32

int		get_next_line(int const fd, char **line);

#endif