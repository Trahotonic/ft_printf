#include "../prlib.h"

void	ft_place_uni(wchar_t *str)
{
	size_t n;

	n = 0;
	while (str[n] != '\0')
	{
		ft_print_uni(str[n]);
		n++;
	}
}
