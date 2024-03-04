#include "libft.h"

static void	ft_searchsub(char *str, char *to_find, int *i)
{
	while (*to_find && *i == 0)
	{
		if (*str != *to_find)
		{
			*i = 1;
		}
		str++;
		to_find++;
	}
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*c;

	i = 0;
	c = str;
	if (!*to_find)
		return (c);
	while (*str)
	{
		if (*str == *to_find)
		{ 
			ft_searchsub(str, to_find, &i);
			if (i == 0)
			{
				c = str;
				return (c);
			}
			i = 0;
		}
		str++;
	}
	return (0);
}
