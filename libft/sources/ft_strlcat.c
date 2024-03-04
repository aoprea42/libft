#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;

	i = 0;
	dest_size = 0;
	while (*(dest + dest_size))
		dest_size++;
	if (size)
	{
		while ((i + dest_size) < (size - 1) && *(src + i))
		{
			*(dest + dest_size + i) = *(src + i);
			i++;
		}
		while (*(src + i))
			i++;
		*(dest + dest_size + i) = '\0';
	}
	return (dest_size + i);
}