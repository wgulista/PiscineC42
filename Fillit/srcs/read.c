#include "../includes/fillit.h"

char  *ft_read(char *file)
{
  int fd;
  int i;
  char  *buf;

  if (!(buf = (char *)malloc(sizeof(char) * (BUFF_SIZE * 256))))
    ft_error();
  if (!(fd = open(file, O_RDONLY)))
    ft_error();
  if (!(i = read(fd, buf, BUFF_SIZE)))
    ft_error();
  if (close(fd) == -1)
    ft_error();
  return (buf);
}
