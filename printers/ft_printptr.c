#include "../ft_printf.h"

int ft_printptr(void *ptr)
{
	int ret;

	ret = write(1, "0x", 2);
	ret += ft_printul_base((unsigned long)ptr, "0123456789abcdef");
	return (ret);
}
