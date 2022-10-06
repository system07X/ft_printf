#include "ft_printf.h"

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int ft_formats(va_list args, const char format)
{
	int print_len;

	print_len = 0;
	if (format == 'c')
		print_len += ft_printchar(va_arg(args, int));
	else if (format == 's')
		print_len += ft_printstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		print_len += ft_printl_base(va_arg(args, int), "0123456789");
	else if (format == 'u')
		print_len += ft_printl_base(va_arg(args, unsigned int), "0123456789");
	else if (format == 'x')
		print_len += ft_printl_base(va_arg(args, unsigned int), "0123456789abcdef");
	else if (format == 'X')
		print_len += ft_printl_base(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (format == 'p')
		print_len += ft_printptr(va_arg(args, void *));
	else
	{
		ft_printchar('%');
		ft_printchar(format);
		return (2);
	}
	return (print_len);
}

int ft_printf(char *str, ...)
{
	va_list args;
	int print_len;
	int i;
	
	print_len = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_len += ft_formats(args, str[i+1]);
			i++;
		}
		else
			print_len += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (print_len);
}

int main()
{
	ft_printf("%d\n%d\n%d\n%d\n%d\n%d",80,97,116,97,116,101);
	return 0;
}