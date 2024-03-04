#include "libft.h"

static char	strrev(char *s)
{
	int		i;
	int		len;
	char	*cpy;

	i = 0;
	len = strlen(s);
	cpy = malloc(len + 1);
	cpy = strcpy(cpy, s);
	while(i < len / 2)
	{
		s[i] = cpy[len - i];
		i++;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	str[12];
	int		i;

	i = 0;
	if(n < 0)
	{
		str[12] = '-';
		i++;
	}
	while(n)
	{
		str[12 - i] = (n % 10) + 48;
		n /= 10;
		i++;
	}
	if(i == 0)
	{
		str[12] = '0';
		i++;
	}
	while(i++ < 12)
		str[13 - i] = '\0';
	strrev(str);
	return (str);
}
