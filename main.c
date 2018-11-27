#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main(int ac, char **av)
{
	char	*str;
	int		fd;
	int		ret;

		ret = get_next_line(-77, &str);
			printf("ret: %i \t %s\n",ret, str);
	return (0);
}

