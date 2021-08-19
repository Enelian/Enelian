#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letra;
	letra = 'z';
	while (letra >= 'a')
	{
		write(1, &letra, 1);
		letra = letra - 1;
	}
}

int	main(void)
{
	ft_print_alphabet();
}
