#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int valor_div;
	int valor_mod;
	int *a;
	int *b;

	valor_div = 37;
	valor_mod = 6;
	a = &valor_div;
	b = &valor_mod;
	printf("%d\n", *a);
	printf("%d\n", *b);
	ft_ultimate_div_mod(a, b);
	printf("%d\n", *a);
	printf("%d\n", *b);
	return(0);
}
