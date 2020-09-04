#include "get_next_line.h"

int		get_next_line(int fd, char **line)
{
	static char	*save[255];
	char		buff[BUFFER_SIZE + 1];
	int		nbr_bytes;
	char		*search_nl;
	char		*temp;

	if (fd < 0 || line == NULL || BUFFER_SIZE <= 0)
		return (ERROR);	
	while((search_nl = ft_strchr(save[fd], '\n')) == 0
		&&(nbr_bytes = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[nbr_bytes] = '\0';
		temp = (save[fd] == NULL) ?
			ft_strndup(buff, nbr_bytes) : ft_strjoin(save[fd], buff);
		if(save[fd] != 0)
			free(save[fd]);
		save[fd] = temp;
	}
	if((int)save[fd]  < 0)
		return (ERROR);
	if(search_nl != 0)
	{
		*line = (strndup(save[fd], search_nl - save[fd]));
		temp = strndup(search_nl + 1, strlen(search_nl + 1));
		free(save[fd]);
		save[fd] = temp;
		return LINE_READ;
	}
	if(save != 0)
	{
		*line = *save;
		save[fd] = 0;
	}
	else
		*line = ft_strndup("", 1);
	return(END_OF);
}

