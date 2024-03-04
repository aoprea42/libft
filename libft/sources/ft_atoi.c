#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (str++ && (*(str - 1) == '+' || *(str - 1) == '-'))
		if (*(str - 1) == '-')
			j++;
	while (str++ && (*(str - 2) >= '0' && *(str - 2) <= '9'))
		i = i * 10 + *(str - 2) - '0';
	return (i * (1 - j % 2 * 2));
}
