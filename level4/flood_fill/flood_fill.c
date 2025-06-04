/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:23:33 by pedde-so          #+#    #+#             */
/*   Updated: 2025/06/04 16:23:34 by pedde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

static void	flood_fill_aux(char **tab, t_point size, t_point curr, char c)
{
	if (curr.x > size.x || curr.y > size.y || curr.x < 0 || curr.y < 0)
		return ;

	if (tab[curr.x][curr.y] != c || tab[curr.x][curr.y] == 'F') 
		return ;
	tab[curr.x][curr.y] = 'F';
	curr.y++;
	flood_fill_aux(tab, size, curr, c);
	curr.y -= 2;
	flood_fill_aux(tab, size, curr, c);
	curr.y++;
	curr.x++;
	flood_fill_aux(tab, size, curr, c);
	curr.x -= 2;
	flood_fill_aux(tab, size, curr, c);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	 return (flood_fill_aux(tab, size, begin, tab[begin.x][begin.y]));
}
