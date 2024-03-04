#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*sub;

	i = 0;
	sub = malloc(len + 1);
	if(!sub)
		return (NULL);
	while(i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}