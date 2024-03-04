#include "libft.h"

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (*(dest + i))
	{
		i++;
		j++;
	}
	i = 0;
	while (*(src + i) && i < nb)
	{
		*(dest + j) = *(src + i);
		i++;
		j++;
	}
	*(dest + j) = 0;
	return (dest);
}