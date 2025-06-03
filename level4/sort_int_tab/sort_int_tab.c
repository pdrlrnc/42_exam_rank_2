/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 14:04:12 by pedde-so          #+#    #+#             */
/*   Updated: 2025/06/03 14:04:15 by pedde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	int	i;
	int	aux;
	int	sorted;

	if (!tab || size < 2)
		return ;
	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		i = 0;
		while (i + 1 < size)
		{
			if (*(tab + i) > *(tab + i + 1))
			{
				aux = *(tab + i);
				*(tab + i) = *(tab + i + 1);
				*(tab + i + 1) = aux;
				sorted = 0;
			}
			else
				i++;
		}
	}
}

int	main()
{
	int values[] = {2, 5, 7, 4 , -6, 200, 3};
	int *tab = values;
	int i = 0;
	sort_int_tab(tab, 7);
	while (i < 7)
		printf("%d ", *(tab + i++));
	printf("\n\n");
	
}
