#include "../prlib.h"

static char	*ft_create_first(char *first, int size)
{
	int	count;

	first = (char*)malloc(sizeof(char) * 9);
	count = 0;
	while (count < 8)
	{
		if (count + 1 < size)
			first[count] = '1';
		else if (count + 1 == size)
			first[count] = '0';
		else
			first[count] = 'x';
		count++;
	}
	first[count] = '\0';
	return (first);
}

static char *ft_create_other(char *other)
{
	int count;

	other = (char*)malloc(sizeof(char) * 9);
	other[0] = '1';
	other[1] = '0';
	count = 2;
	while (count < 8)
	{
		other[count] = 'x';
		count++;
	}
	other[count] = '\0';
	return (other);
}

char	**ft_create_mask(int size)
{
	char **list;
	int	count;

	list = (char**)malloc(sizeof(char*) * size);
	count = 0;
	while (count < size)
	{
		if (count == 0)
			list[count] = ft_create_first(list[count], size);
		else
			list[count] = ft_create_other(list[count]);
		count++;
	}
	list[count] = 0;
	return (list);
}