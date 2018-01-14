#include "../prlib.h"

void	ft_print_uni(int n)
{
	int	*array;
	char	*bin;
	int		size;
	int		count;

	bin = ft_itoa_base(n, 2);
	if (ft_strlen(bin) >= 8 && ft_strlen(bin) <= 11)
	{
		array = ft_make_int_array(ft_make_do(bin, ft_create_mask(3), 1), 2);
		size = 2;
	}
	else if (ft_strlen(bin) >= 12 && ft_strlen(bin) <= 16)
	{
		array = ft_make_int_array(ft_make_do(bin, ft_create_mask(4), 2), 3);
		size = 3;
	}
	else
	{
		array = ft_make_int_array(ft_make_do(bin, ft_create_mask(5), 3), 4);
		size = 4;
	}
	count = 0;
	while (count < size)
	{
		write(1, &array[count], 1);
		count++;
	}
}