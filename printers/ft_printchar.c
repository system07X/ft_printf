#include "../ft_printf.h"

int ft_printchar(int c)
{
	return (write(1, &c, 1));
}