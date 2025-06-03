/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 15:56:20 by pedde-so          #+#    #+#             */
/*   Updated: 2025/06/03 15:56:21 by pedde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/*prototypes*/
int	print_prime(int nb);

int	main(int argc, char **argv)
{
	int	nb;

	if (argc < 2)
		printf("\n");
	else
	{
		nb = atoi(argv[1]);
		while (nb > 10)
		{
			nb = print_prime(nb);
			printf("*");
		}
		printf("\n");
	}
}

int	print_prime(int nb)
{
	int	prime;

	prime = 2;
	while (prime < nb)
	{
		if (!(nb % prime))
		{	
			printf("%d", prime);
			return prime;
		}
		prime++;
	}
	return (prime);
}
