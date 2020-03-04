void	ft_sort_int_tab(int *tab, int size)
{
	int tab_aux;
	int a;
	int b;

	a = 0;
	while (a < size)
	{
		b = a + 1;
		while (b < size)
		{
			if (tab[a] > tab[b])
			{
				tab_aux = tab[a];
				tab[a] = tab[b];
				tab[b] = tab_aux;
			}
			b++;
		}
		a++;
	}
}
