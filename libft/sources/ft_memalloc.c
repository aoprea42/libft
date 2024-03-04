#include "libft.h"

void	*ft_memalloc(size_t size)
{
	int		i;
	void	*buffer = malloc(size);
	void	*ptr = buffer;

	if(!buffer)
		return (NULL);
	while(size--)
	{
		*(char *)buffer = 0;
		buffer++;
	}
	return (ptr);
}
