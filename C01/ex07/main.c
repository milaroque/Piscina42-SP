#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int size = 10;
	int tab[10] = {3, 6, -9, 45, 10, 1, 8, 5, 0, -12};
	int b;
	b = 0;
	while (b < size)
	{
		printf("%d, ", tab[b]);
		b++;
	}
	printf("\n");
	ft_rev_int_tab(tab, size);
	b = 0;
	while (b < size)
	{
		printf("%d, ", tab[b]);
		b++;
	}
}
