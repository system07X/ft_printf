#include "../ft_printf.h"

int ft_printul_base(unsigned long n, char *base)
{
	int	print_len;
	int	ret;
	size_t bsize;

	print_len = 0;
	bsize = ft_strlen(base);
	if (n / bsize)
	{
		ret = ft_printul_base(n / bsize, base);
		print_len += ret;
	}
	ret = ft_printchar(base[n % bsize]);
	return (print_len + ret);
}