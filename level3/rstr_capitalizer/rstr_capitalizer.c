/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 17:51:01 by pedde-so          #+#    #+#             */
/*   Updated: 2025/06/04 17:51:02 by pedde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*prototypes*/
void	rstr_capitalizer(char *str);
int	is_letter(char c);


int	main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "\n", 1);
	else
		rstr_capitalizer(argv[1]);
}

void	rstr_capitalizer(char *str)
{
	int	strlen;
	int	i;

	i = ft_strlen(str) - 1;
	while (i <= 0)
	{
		while (!is_letter(*(str + i)))
			i--;
		if (is_lower_case(*(str + i)))
			*(str + i) -= 32;
		i--;
		while (!is_space_tab(*(str + i)))
		{
			if (is_upper_case(*(str + i)))
				*(str + i) += 32;
			i++;
		}
	}
}

int	is_letter(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	is_space_tab(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
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
