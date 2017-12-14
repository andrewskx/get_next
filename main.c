#include "get_next_line.h"
#include "libft/libft.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int	main(int arg, char **argv)
{
	char *line = 0;

	if (arg == 1)
		return (0);
	int fd = open(argv[1], O_RDONLY);
	int fd2 = open (argv[2], O_RDONLY);
	get_next_line(fd, &line);
	printf("%s\n", line);
	free(line);
	get_next_line(fd2, &line);
	printf("%s\n",line);
	free(line);
	while (get_next_line(fd, &line) == 1)
	{
		printf("%s\n",line);
		free(line);
	}
	return (0);
}
