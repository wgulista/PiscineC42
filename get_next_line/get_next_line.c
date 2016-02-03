#include "get_next_line.h"

char	*read_file(char	*file)
{
	int		fd;
	int		rd;
	char	*buf;

	buf = ft_memalloc(BUFF_SIZE + 1);
	fd = open(file, O_RDONLY);
	rd = read(fd, buf, BUFF_SIZE);
	buf[rd] = '\0';
	return (buf);
}

/*int		get_next_line(int const fd, char **line)
{
	static char	*str;
	char		buf[BUFF_SIZE];
	int			i;
}*/

int		main(int ac, char **av)
{
	char	*value;

	if (ac == 2)
	{
		value = read_file(av[1]);
		printf("%s\n", value);
	}
	return (0);
}