#include "libft.h"

static char	*allocate(int size, char **strs, char *sep)
{
	int		i;
	int		strlen;
	char	*result;

	i = 0;
	strlen = 0;
	if (size <= 0)
	{
		result = (char *) malloc(1);
		result[0] = '\0';
		return (result);
	}
	while (i < size)
	{
		strlen += ft_strlen(strs[i]);
		i++;
	}
	strlen += (size - 1) * ft_strlen(sep);
	result = (char *) malloc(strlen + 1);
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*result;
	char	*ptr;

	result = allocate(size, strs, sep);
	ptr = result;
	i = 0;
	while (i < size)
	{
		ft_strcpy(ptr, strs[i]);
		ptr += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(ptr, sep);
			ptr += ft_strlen(sep);
		}
		i++;
	}
	*ptr = '\0';
	return (result);
}
