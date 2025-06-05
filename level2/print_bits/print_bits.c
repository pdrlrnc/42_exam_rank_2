#include <unistd.h>

/*prototypes*/
void	print_bits(unsigned char octet);

int	main(void)
{
	print_bits(2);
	write(1, "\n", 1);
	print_bits(12);
	write(1, "\n", 1);
	print_bits(0);	
	write(1, "\n", 1);
}

void	print_bits(unsigned char octet)
{
	int	i;
	char	bit;

	i = 7;
	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}
