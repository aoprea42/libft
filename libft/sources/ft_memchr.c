#include "libft.h"

void *memchr(const void *str, int c, size_t n)
{
	int	i;

	i = 0;
	while(*(char *)str && i < n)
	{
		if(*(char *)str == c)
			return ((char *)str);
		str++;
		i++;
	}
	return (NULL);
}