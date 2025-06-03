/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 14:24:01 by pedde-so          #+#    #+#             */
/*   Updated: 2025/06/03 14:24:02 by pedde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*prototypes*/
int	is_space(char c);
int	ignore_spaces(char *str, int i);
int	print_word(char *str, int i);

int	main(int argc, char **argv)
{
	int	i;
	
	if (argc < 2)
		write(1, "\n", 1);
	else
	{
		i = ignore_spaces(argv[1], 0);
		while (*(argv[1] + i) && !is_space(*(argv[1] + i)))
			i++;
		i = ignore_spaces(argv[1], i);
		while (*(argv[1] + i))
		{
			i = print_word(argv[1], i);
			i = ignore_spaces(argv[1], i);
			write(1, " ", 1);
		}
		i = ignore_spaces(argv[1], 0);
		print_word(argv[1], i);
	}
	return (0);
}

int	is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	ignore_spaces(char *str, int i)
{
	while (*(str + i) && is_space(*(str + i)))
		i++;
	return (i);
}

int	print_word(char *str, int i)
{
	while (*(str + i) && !is_space(*(str + i)))
		write(1, str + i++, 1);
	return (i);
}
