#include "../includes/fillit.h"

int   main(int ac, char **av)
{

  if (ac == 2)
    printf("%s", ft_read(av[1]));
  else
    ft_putstr("error\n");
  return (0);
}
