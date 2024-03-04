#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	if(!(str = malloc(size + 1)))
		return (NULL);
	while(size-- + 1)
		str[size] = 0;
	return (str);
}
