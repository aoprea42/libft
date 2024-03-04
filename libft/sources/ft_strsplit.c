#include "libft.h"

static int	ft_strclen(char const *s, char c)
{
	int	i;

	i = 0;
	while(*s && *s != c)
	{
		i++;
		s++;
	}
	return (i);
}

static char	*ft_strccpy(char const *s, char c)
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	len = ft_strclen(s, c);
	str = malloc(len + 1);
	if(!str)
		return (NULL);
	while(i < len)
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}

static int	strcnum(char const *s, char c)
{
	int	i;

	i = 0;
	if(*s != c)
		i++;
	while(*s)
	{
		while(*s && *s != c)
			s++;
		while(*s && *s == c)
			s++;
		i++;
	}
	return (i);
}


char	**ft_strsplit(char const *s, char c)
{
	char	**strs;
	int		strnum;
	int		i;

	i = 0;
	strnum = strcnum(s, c);
	strs = malloc(strnum * sizeof(char *));
	if(!strs)
		return (NULL);
	while(i < strnum)
	{
		while(*s == c)
			s++;
		strs[i] = strccpy(s, c);
		i++;
		while(*s != c)
			s++;
	}
	return (strs);
}
