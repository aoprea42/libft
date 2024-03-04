#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
	char *target;

	target = NULL;
	while(*str)
	{
		if(*str == c)
			target = (char *)str;
		str++;
	}
	return ((char *)target);
}