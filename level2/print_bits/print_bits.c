#include <unistd.h>

/*prototypes*/
void	print_bits(unsigned char octet);

int	main(void)
{
	print_bits('2');
	write(1, "\n", 1);
	print_bits('9');
	write(1, "\n", 1);
	print_bits('0');	
	write(1, "\n", 1);
}

void	print_bits(unsigned char octet)
{
	int	nb;
	int	i;
	char	result[8];

	nb = 0;
	nb *= 10;
	nb += (octet - '0');
	i = 0;
	while (i < 8)
	{
		*(result + i) = '\0';
		i++;
	}
	i = 7;
	while (nb)
	{
		*(result + i) = nb % 2 + '0';
		nb /= 2;
		i--;
	}
	i = 0;
	while (i < 8)
	{
		if (!*(result + i))
			write(1, "0", 1);
		else
			write(1, &(*(result + i)), 1);
		i++;
	}


}
