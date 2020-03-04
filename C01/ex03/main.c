#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a;
	int b;
	int *div;
	int *mod;

	a = 85;
	b = 5;
	div = &a;
	mod = &b;

	printf("%d\n", *div);
	printf("%d\n", *mod);
	ft_div_mod(a, b, div, mod);
	printf("%d\n", *div);
	printf("%d\n", *mod);
	return(0);
}
