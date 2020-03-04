void	ft_rev_int_tab(int *tab, int size)
{
	int tab_aux;
	int a;

	size = size - 1;
	a = 0;
	while (a < size)
	{
		tab_aux = tab[a];
		tab[a] = tab[size];
		tab[size] = tab_aux;
		a++;
		size--;
	}
}
