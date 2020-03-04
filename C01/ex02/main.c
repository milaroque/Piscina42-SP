#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int one;
	int two;
	int *a;
	int *b;

	one = 1;
	two = 2;
	a = &one;
	b = &two;

	printf("%d %d\n", one, two);
	ft_swap(a, b);
	printf("%d %d\n", one, two);
	return (0);
}
