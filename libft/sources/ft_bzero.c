#include "libft.h"

void *ft_bzero(void *s, size_t n)
{
	void *mem;
	
	mem = s;
	while(n--)
	{
		*(char *)s = 0;
		s++;
	}
	return (mem);
}
