#include "libft.h"

void *ft_memccpy(void *dest,const void *src, int c, size_t n)
{
	void *dest1 = dest;
	while(*(char *)src != c && n--)
	{
		*(char *)dest = *(char *)src;
		src++;
		dest++;
	}
	if(*(char *)src == c && n)
		*(char *)dest = c;
	return (dest1);
}