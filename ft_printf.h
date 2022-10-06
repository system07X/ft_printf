#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_strlen(char *str);
int	ft_printchar(int c);
int	ft_printstr(char *str);
int	ft_printul_base(unsigned long n, char *base);
int	ft_printl_base(long n, char *base);
int	ft_printptr(void *p);
int	ft_formats(va_list args, const char format);
int	ft_printf(char *str, ...);

#endif
