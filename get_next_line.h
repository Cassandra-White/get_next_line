#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 8
# endif

# define LINE_READ 1
# define END_OF 0
# define ERROR -1

int		get_next_line(int fd, char **line);

int		put_in_line(char **line, char **save, char *search_nl);
int		ft_strlen(char *s);
char	*ft_strncpy(char *dest, char *src, int n);
char	*ft_strchr(char *s, int c);
char	*ft_strndup(char *s1, int size);
char	*ft_strjoin(char *s1, char *s2);


#endif

