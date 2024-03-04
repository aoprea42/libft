#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	while (*(char *)str1 == *(char *)str2 && n > 0)
	{
		str1++;
		str2++;
		n--;
	}
	if (n <= 0)
	{
		return (0);
	}
	return (*(char *)str1 - *(char *)str2);
}
