#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		strlen;
	char	*ptr;
	char	*org_ptr;

	i = 0;
	strlen = 0;
	while (*(src + i))
	{
		strlen++;
		i++;
	}
	i = 0;
	ptr = (char *) malloc(strlen + 1);
	if (!ptr)
		return (0);
	org_ptr = ptr;
	while (i < strlen)
	{
		*(ptr + i) = *(src + i);
		i++;
	}
	*(ptr + i) = '\0';
	return (org_ptr);
}
