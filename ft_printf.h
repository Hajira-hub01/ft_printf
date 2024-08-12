#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>

ssize_t	ft_putnbr(int num);
ssize_t	ft_putunbr(unsigned int num);
ssize_t ft_puthex(unsigned long long num, char format);
ssize_t	ft_putchar(char c);
ssize_t	ft_putstr(char *str);


#endif
