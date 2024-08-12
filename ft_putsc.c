#include "ft_printf.h"

ssize_t	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

ssize_t	ft_putstr(char *str)
{
	ssize_t	i;
	ssize_t	length;

	length = 0;
	i = 0;
	if (!str)
	{
		str = "(null)";
	}
	while (str[i])
	{
		length += ft_putchar(str[i]);
		i++;
	}
	return (length);
}
