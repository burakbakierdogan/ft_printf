#include "ft_printf.h"
#include "libft.h"

int	main()
{
	char *ptr;
	printf("%p\n", &ptr);
	printf("%u\n", -21);
	ft_printf("burak%c, int =  %d,/ i = %i ptr = %p u = %u str = %s X = %X x = %x \n", 'a', 23, 0021, ptr, -21, "baki", 0XFF, 0Xff );
}

