#include "libft.h"

void *ft_memmove(void *dest, const void * src, size_t n)
{
	void *dest1;

	dest1 = dest;
	while(n--)
	{
		*(char *)dest = *(char *)src;
		src++;
		dest++;
	}
	return (dest1);
}