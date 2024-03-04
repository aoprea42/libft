#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		strlen;
	char	*str;
	
	strlen = ft_strlen(s);
	str = malloc(strlen + 1);
	str[strlen] = '\0';
	while(i < strlen)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
}
