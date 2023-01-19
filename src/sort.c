/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:07:13 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/17 20:01:35 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_3(t_stack *s)
{
	t_item	*e;

	e = s->top;
	if (e->value < e->next->value && e->value < e->next->next->value
		&& e->next->value > e->next->next->value)
	{
		move_n(s, NULL, SA, 1);
		move_n(s, NULL, RA, 1);
	}
	else if (e->value > e->next->value && e->value < e->next->next->value
		&& e->next->value < e->next->next->value)
		move_n(s, NULL, SA, 1);
	else if (e->value < e->next->value && e->value > e->next->next->value
		&& e->next->value > e->next->next->value)
		move_n(s, NULL, RRA, 1);
	else if (e->value > e->next->value && e->value > e->next->next->value
		&& e->next->value < e->next->next->value)
		move_n(s, NULL, RA, 1);
	else if (e->value > e->next->value && e->value > e->next->next->value
		&& e->next->value > e->next->next->value)
	{
		move_n(s, NULL, SA, 1);
		move_n(s, NULL, RRA, 1);
	}
}

static void	sort_2(t_stack *s)
{
	t_item	*e;

	e = s->top;
	if (e->value > e->next->value)
		move_n(s, NULL, SA, 1);
}

static void	sort_5(t_stack *a)
{
	t_stack	*b;

	b = init_stack();
	if (!b)
		return ;
	while (a->size > 3)
		move_n(a, b, PB, a->size - 3);
	sort_3(a);
	while (b->size > 0)
	{
		indexing(a, b);
		find_best_move(b);
		move_best_element(a, b);
	}
	free(b);
}

void	sort(t_stack *a)
{
	t_stack	*b;

	if (a == NULL || a->size <= 1)
		return ;
	if (a->size == 3)
		sort_3(a);
	else if (a->size == 2)
		sort_2(a);
	else if (a->size <= 5)
		sort_5(a);
	if (a->size <= 5)
		return ;
	b = init_stack();
	if (!b)
		return ;
	move_to_b(a, b);
	sort_3(a);
	while (b->size > 0)
	{
		indexing(a, b);
		find_best_move(b);
		move_best_element(a, b);
	}
	free(b);
}

void	final_sort(t_stack *stack)
{
	int		index;
	int		i;
	int		min;
	t_item	*curr;

	i = 0;
	index = 0;
	min = INT_MAX;
	curr = stack->top;
	while (curr)
	{
		if (curr->value < min)
		{
			min = curr->value;
			index = i;
		}
		i++;
		curr = curr->next;
	}
	if (index > stack->size)
		move_n(stack, NULL, RRA, index - 1);
	else
		move_n(stack, NULL, RA, index);
}
