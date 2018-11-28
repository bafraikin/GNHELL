#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main(int ac, char **av)
{
	char	*str;
	int		fd;
	int		ret;

	fd = open("coucou", O_RDONLY);
	while ((ret = get_next_line(fd, &str)) > 0)
	{
	printf("ret: %i \t %s\n", ret, str);
	free(str);
	}
	printf("ret: %i \t %s\n", ret, str);
	return (0);
}
