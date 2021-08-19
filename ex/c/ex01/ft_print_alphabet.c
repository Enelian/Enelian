#include <unistd.h>
#include <stdio.h>

void ft_print_alphabet(void)
{
	char letra;
	letra = 'a';

	while (letra >= 'z')
	{
		write(1, &letra, 1);
		letra = letra +1;
	}

}


