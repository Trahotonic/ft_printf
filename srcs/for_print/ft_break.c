#include "../../includes/prlib.h"

int	ft_break(va_list ptr, int ret)
{
	va_end(ptr);
	return (ret);
}