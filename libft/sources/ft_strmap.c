#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		strlen;
	char	*str;
	
	strlen = ft_strlen(s);
	str = malloc(strlen + 1);
	str[strlen] = '\0';
	while(i < strlen)
	{
		str[i] = (*f)(s[i]);
		i++;
	}
}
