#include <unistd.h>
#include <stdio.h>

/*prototypes*/
unsigned char	reverse_bits(unsigned char octet);

int	main(void)
{	
	unsigned char bit;
	unsigned char res;
	int i;

	bit = 0;
	res = reverse_bits((unsigned char)5);
	i = 8;
	while (i--)
	{
		bit = (res >> i & 1) + 48;
		printf("%c", bit);
	}
	return (0);
}

unsigned char	reverse_bits(unsigned char octet)
{
	int	i;
	unsigned char	bit;

	bit = 0;
	i = 8;
	while (i--)
	{
		//shit one bit to the left so it has 0s
		//in the least significat bit and adding the least
		//significant bit of octet
		bit = (bit << 1) | (octet & 1);
		//shitfting octet one bit to the right so the next
		//iteration im reading the right bit.
		octet = octet >> 1;
	}
	return (bit);
}
