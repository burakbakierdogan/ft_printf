#include "ft_printf.h"
#include "libft.h"
int	main()
{
	int a;
	int b = printf("burak%cburak %sburak %d %i %u %p %x %X burak%%burak \n",'c', "string", -123223, -1, -128, &a, 0XFF, 0XFF);
	int c = ft_printf("burak%cburak %sburak %d %i %u %p %x %X burak%%burak \n",'c', "string", -123223, -1, -128, &a, 0XFF, 0XFF);
	printf("orjinal = %d benim %d\n", b, c);
}
