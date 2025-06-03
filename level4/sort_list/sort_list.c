/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:53:50 by pedde-so          #+#    #+#             */
/*   Updated: 2025/06/03 12:53:51 by pedde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*sort_list (t_list *lst, int (*cmp)(int, int))
{
	int	tmp;
	t_list	*head;
	int	sorted;

	if (!lst || !cmp)
		return (NULL);
	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		head = lst;
		while (head != NULL && head->next != NULL)
		{
			if (!((*cmp) (head->content, head->next->content)))
			{
				tmp = head->content;
				head->content = head->next->content;
				head->next->content = tmp;
				sorted = 0;
			}
			else
				head = head->next;
		}
	}
	return (lst);
}
