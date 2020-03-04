#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char *str;
	int t;

	str = "ele nao";
	t = ft_strlen(str);

	printf("Tamanho = %d\n", t);
}
