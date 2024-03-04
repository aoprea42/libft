#include "libft.h"

void	ft_putnbr(int nb)
{
	long	i;
	int		j;
	char	num[10];

	i = 1;
	j = 0;
	if (nb < 0)
	{
		write (1, "-", 1);
		nb *= -1;
	}
	while (nb / i)
	{
		num[j] = '0' + (((nb / i) % 10));
		i *= 10;
		j++;
	}
	while (j-- > 0 && nb > -2147483648)
	{
		write(1, &num[j], 1);
	}
	if (nb == -2147483648)
		write(1, "2147483648", 10);
	if (!nb)
		write(1, "0", 1);
}
