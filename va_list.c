#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int	ft_valis(int n, ...)
{
	va_list list;

	va_start(list, n);
	int k = 0;
	int sum = 0;
	while (k < n)
	{
		sum += va_arg(list, int);
		k++;
	}
	va_end(list);
	return (sum);
}

int main(void)
{
	printf("%d\n", ft_valis(4, 21,21,1,3));
}
