/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:47:21 by pedde-so          #+#    #+#             */
/*   Updated: 2025/06/04 13:47:22 by pedde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

/*prototypes*/
int	nbr_size(int nbr);
char	*ft_itoa(int nbr);

int	main(void)
{
	printf("%d\n", 42);
	printf("%d\n", -42);
	printf("%d\n", 0);
	printf("%d\n", INT_MAX);
	printf("%d\n", INT_MIN);

	return (0);
}

char	*ft_itoa(int nbr)
{
	char	*result;
	int 	i;

	if (nbr == 0)
	{
		result = malloc(2);
		if (!result)
			return NULL;
		*result = '0';
		*(result + 1) = '\0';
		return (result);
	}
	i = nbr_size(nbr);
	result = malloc(i + 1);
	*(result + i) = '\0';
	if (nbr < 0)
	{
		nbr *= (-1);
		*result = '-';
	}
	while (nbr)
	{
		*(result + i) = nbr % 10;
		nbr /= 10;
		i--;
	}
	return (result);
}

int	nbr_size(int nbr)
{
	int	size;

	size = 0;
	if (nbr < 0)
	{
		size++;
		nbr *= (-1);
	}
	while (nbr)
	{
		nbr /= 10;
		size++;
	}
	return (size);
}
