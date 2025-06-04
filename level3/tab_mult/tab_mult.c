/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:44:38 by pedde-so          #+#    #+#             */
/*   Updated: 2025/06/04 16:44:39 by pedde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*prototypes*/
void	print_nb(int nb);
int	ft_atoi(char *str);

int	main(int argc, char **argv)
{
	int	mult;
	int	nb;

	mult = 1;
	if (argc == 2)
	{
		nb = ft_atoi(argv[1]);
		while (mult < 10)
		{

			print_nb(mult);
			write(1, " * ", 3);
			print_nb(nb);
			write(1, " = ", 3);
			print_nb(nb * mult);
			write(1,"\n", 1);
			mult++;
		}
	}
	else
		write(1, "\n", 1);
	
}

void	print_nb(int nb)
{
	int	nbr_size;
	int	aux;
	char	result[10];
	int	i;

	i = 0;
	while (i < 10)
	{
		result[i] = '\0';
		i++;
	}
	nbr_size = 0;
	aux = nb;
	while (aux)
	{
		nbr_size++;
		aux /= 10;
	}
	i = 9;
	while (nb)
	{
		result[i] = (nb % 10) + '0';
		nb /= 10;
		i--;
	}
	i = 0;
	while(i < 10)
	{
		if(result[i])
			write(1, &result[i], 1);
		i++;
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (*(str + i))
	{
		result *= 10;
		result += (*(str + i) - '0');
		i++;
	}
	return (result);
}
