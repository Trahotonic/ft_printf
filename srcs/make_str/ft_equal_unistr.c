#include "../prlib.h"

static int ft_get_wchr_bytes(wchar_t *str)
{
	size_t	n;
	int		len;

	n = 0;
	len = 0;
	while (str[n] != '\0')
	{
		if (str[n] <= 127)
			len += 1;
		else if (str[n] > 127 && str[n] <= 2047)
			len += 2;
		else if (str[n] > 2047 && str[n] <= 65535)
			len += 3;
		else
			len += 4;
		n++;
	}
	return (len);
}

void	ft_equal_unistr(t_specs *specs, wchar_t *str)
{
	int	len;

	if (specs->leftside == 1)
		specs->zero = 0;
	len = ft_get_wchr_bytes(str);
	if (str != NULL)
	{
		
		if (specs->acc_flag == 1)
		{
			if (specs->accuracy > len)
				specs->accuracy = len;
			specs->width -= specs->accuracy;
		}
		else
			specs->width -= len;
	}
	else
	{
		if (specs->accuracy > 6)
			specs->accuracy = 6;
		if (specs->acc_flag == 1)
			specs->width -= specs->accuracy;
		else
			specs->width -= 6;
	}
}