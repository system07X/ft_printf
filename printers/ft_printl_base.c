#include "../ft_printf.h"

int ft_printl_base(long n, char *base)
{
	int print_len;
	int ret;

	print_len = 0;
	ret = 0;
	if (n < 0)
	{
		print_len = ft_printchar('-');
		n = -n;
	}
	ret = ft_printul_base(n, base);
	return (ret + print_len);
}