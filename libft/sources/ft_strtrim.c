#include "libft.h"

static int	ft_isspace(int c)
{
	return((c == 32 || (9 <= c && c <= 11)));
}

char	*ft_strtrim(char const *s)
{
	char	*str;
	char	*ptr;
	int		slen;
	int		strlen;

	slen = ft_strlen(s);
	while(slen--)
		if(!ft_isspace(s[slen]))
			strlen++;
	str = malloc(strlen + 1);
	if(!str)
		return (NULL);
	ptr = str;
	while(*s)
	{
		if(!isspace(*s))
		{
			*ptr = *s;
			ptr++;
		}
		s++;
	}
	str[strlen] = '\0';
	return (str);
}
