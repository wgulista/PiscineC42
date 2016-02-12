#include "../includes/fillit.h"

void 	ft_read(int *rd, char *buff, char *file)
{
	int fd;

	if ((fd = open(file, O_RDONLY)) == -1)
		ft_error("error");
	if ((*rd = read(fd, buff, BUFF_SIZE)) == -1 || *rd == 546)
		ft_error("error");
	if (close(fd) == -1)
		ft_error("error");
}