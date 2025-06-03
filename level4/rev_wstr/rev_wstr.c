/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 15:14:06 by pedde-so          #+#    #+#             */
/*   Updated: 2025/06/03 15:14:07 by pedde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*prototypes*/
int	ft_strlen(char *str);
int	print_word(char *str, int i);

int	main (int argc, char **argv)
{
	int	i;

	if (argc < 2)
		write(1, "\n", 1);
	else
	{
		i = ft_strlen(argv[1]) - 1;
		while (i > 0)
			i = print_word(argv[1], i) - 1;
		i = 0;
		while (*(argv[1] + i) && *(argv[1] + i) != ' ')
			write(1, argv[1] + i++, 1);
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

int	print_word(char *str, int i)
{
	int	j;

	j = i;
	while (j > 0 && *(str + j) != ' ')
		j--;
	if (j != 0)
	{
		write(1, str + j + 1, i - j);
		write(1, " ", 1);
	}
	return (j);
}
