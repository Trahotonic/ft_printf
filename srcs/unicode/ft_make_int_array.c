#include "../prlib.h"

int		*ft_make_int_array(char **list, int size)
{
	int	*ret;
	int count;

	ret = (int*)malloc(sizeof(int) * size);
	count = 0;
	while (count < size)
	{
		ret[count] = ft_btoi(list[count]);
		count++;
	}
	return (ret);
}