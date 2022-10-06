#include "../ft_printf.h"

int ft_printstr(char *str)
{
	if (str == NULL)
	{
		return(write(1, "(null)", 6));
	}
	return(write(1, str, ft_strlen(str)));
}
