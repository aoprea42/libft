#include "libft.h"

char *ft_strnstr(char *string, char *substring, int n)
{
    char	*a;
	char	*b;
	int		i;

    b = substring;
	i = 0;
    if (!*b)
		return string;
    while(*string++ && 1 + n--)
	{
		if (*(string - 1) != *b)
			continue;
		a = string - 1;
		while (2 + n-- && i++ > -1)
		{
		    if (*b == 0) 
				return string - 1;
	   		if (*a++ != *b++) 
				break;
		}
	n += i;
	//i = 0;
	b = substring;
    }
    return (NULL);
}
