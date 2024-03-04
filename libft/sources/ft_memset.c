#include "libft.h"

void *ft_memset(void *str, int c, size_t n)
{
	void *mem;
	
	mem = str;
	while(n--)
	{
		*(char *)str = c;
		str++;
	}
	return (mem);
}
