
#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{

	char *line;
	int rtn;
	int fd;
	//fd =open(argv[1], O_RDONLY);
	fd = open("text.txt", O_RDONLY);
	while((rtn = (get_next_line(fd, &line) == 1)))
	{
		printf("%s", line);
//		printf("return =%d]\n",rtn);
		free(line);
	}
//	printf("rtn =%d\n", rtn);
	free(line);
	close(fd);

	return (0);
}
