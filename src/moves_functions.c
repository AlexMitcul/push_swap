/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:51:29 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/14 22:03:15 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_to(t_stack *from, t_stack *to)
{
	t_item	*curr;

	curr = pop(from);
	if (!curr)
		return ;
	push(to, curr->value);
	free(curr);
}

void	rotate(t_stack *s)
{
	t_item	*tmp;
	t_item	*curr;

	tmp = pop(s);
	if (!tmp)
		return ;
	curr = s->top;
	while (curr->next)
		curr = curr->next;
	curr->next = tmp;
	tmp->next = NULL;
	s->size++;
}

void	reverse_rotate(t_stack *s)
{
	t_item	*last;

	if (s->size <= 1)
		return ;
	last = s->top;
	while (last->next->next)
		last = last->next;
	push(s, last->next->value);
	free(last->next);
	s->size--;
	last->next = NULL;
}

void	swap(t_stack *s)
{
	t_item	*curr;

	curr = pop(s);
	insert_at(curr->value, s, 1);
	free(curr);
}
