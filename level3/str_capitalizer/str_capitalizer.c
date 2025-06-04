/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 17:11:36 by pedde-so          #+#    #+#             */
/*   Updated: 2025/06/04 17:11:37 by pedde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*prototypes*/
void	str_capitalizer(char *str);
int	is_lowercase(char c);
int	is_uppercase(char c);
int	is_space_tab(char c);

int main (int argv, char **argc)
{
	if (argv < 2)
		write(1, "\n", 1);
	else
		str_capitalizer(argc[1]);
}

void	str_capitalizer(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		while (is_space_tab(*(str + i)))
			i++;
		if (*(str + i) && !is_space_tab(*(str + i)))
		{
			if (is_lowercase(*(str + i)))
				*(str + i) -= 32;
			i++;
		}
		while (*(str + i) && !is_space_tab(*(str + i)))
		{
			if (is_uppercase(*(str + i)))
				*(str + i) += 32;
			i++;
		}
	}
	write(1, str, i);
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
