/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:45:12 by pedde-so          #+#    #+#             */
/*   Updated: 2025/06/04 12:45:14 by pedde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *curr;
	t_list *prev;

	if (!begin_list)
		return ;
	while (*begin_list && !cmp((*begin_list)->data, data_ref))
	{
		curr = (*begin_list)->next;
		free(*begin_list);
		*begin_list = curr;
	}
	prev = *begin_list;
	if (prev)
		curr = prev->next;
	while (prev != NULL)
	{
		if (!cmp(curr->data, data_ref))
		{
			prev->next = curr->next;
			free(curr);
			curr = prev->next;
		}
		else
		{
			prev = curr;
			curr = curr->next;
		}
	}
}
