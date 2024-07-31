#include "mini_print.h"

int	ft_putchar(int c)
{
	write(STDOUT_FILENO, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		ft_putchar(str[i++]);
	return (i);
}

int	ft_putnbr(int num)
{
	char	*str;
	int		len;

	str = ft_itoa(num);
	len = ft_putstr(str);
	free(str);
	return (len);
}
