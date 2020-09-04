

#include "get_next_line.h"

int		ft_strlen(char *s)
{
	int i;
	i = 0;
	while(s[i])
		i++;
	return (i);
}

char	*ft_strncpy(char *dest, char *src, int n)
{
	int i;
	if (dest == 0)
		return (0);
	i = -1;
	while(++i < n)
		dest[i] = src[i];
	return (dest);
}
/*
char	*ft_strchr(const char *string, int searchedchar)
{
	if (searchedchar == 0)
	{
		while (*string)
			string++;
		return ((char*)string);
	}
	while (*string)
	{
		if (*string == (unsigned char)searchedchar)
			return ((char*)(string));
		string++;
	}
	return (0);
}
*/
char	*ft_strchr(char *s, int c)
{
	int	i;

	if (s == 0)
		return (0);
	if (c == 0)
		return ((char *)s + ft_strlen(s));
	i = -1;
	while (s[++i])
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
	return (0);
}


char	*ft_strndup(char *s1, int size)
{
	char	*dup;
	dup = (char *)malloc(sizeof(char) * (size + 1));
	if (dup == 0)
		return (0);
	ft_strncpy(dup, s1, size);
	dup[size] = '\0';
	return (dup);
}

/*
char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	size_t	size;
	char	*str;
	printf("TRUUC");
	if (!s1 || !s2)
		return (0);
	size = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = malloc((size + 1) * sizeof(char))))
		return (0);
	i = 0;
	while (*s1)
		printf("POPO");
		str[i++] = *(s1++);
	while (*s2)
		printf("PIPI");
		str[i++] = *(s2++);
	str[i] = '\0';
	return (str);
}
*/
char	*ft_strjoin(char *s1, char *s2)
{
	char	*s_new;
	int		len1;
	int		len2;
	if (s1 == 0 && s2 == 0)
	{
		printf("return 0\n");
		return (0);
	}
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s_new = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (s_new == 0)
		return (0);
	ft_strncpy(s_new, s1, len1);
	ft_strncpy(s_new + len1, s2, len2);
	s_new[len1 + len2] = 0;
	return (s_new);
}

