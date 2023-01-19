/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:28:32 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/17 18:28:52 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * Calculate how many steps need to do to bring the right
 * position to the top of the stack a
*/
static void	find_position(t_item *item, t_stack *s)
{
	t_item	*curr;
	int		position;
	int		diff;
	int		min;
	int		i;

	position = 0;
	curr = s->top;
	min = INT_MAX;
	i = 0;
	while (curr)
	{
		diff = curr->value - item->value;
		if (diff > 0 && diff < min)
		{
			position = i;
			min = diff;
		}
		i++;
		curr = curr->next;
	}
	item->params.ra = position;
	item->params.rra = s->size - position;
}

void	indexing(t_stack *a, t_stack *b)
{
	t_item	*item;
	int		index;

	item = b->top;
	while (item)
	{
		item->params.least_moves = INT_MAX;
		item = item->next;
	}
	index = 0;
	item = b->top;
	while (item)
	{
		find_position(item, a);
		item->params.rb = index;
		item->params.rrb = b->size - index;
		index++;
		item = item->next;
	}
}
