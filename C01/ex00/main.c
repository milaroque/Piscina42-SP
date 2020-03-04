#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int a;
	int *ptr;
	a = 56;
	ptr = &a;

	printf("%d\n", a);
	ft_ft(ptr);
	printf("%d\n", a);
	return(0);
}
