/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:07:13 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/14 21:55:33 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_3(t_stack *s)
{
	t_item	*e;

	if (s->size != 3)
		return ;
	e = s->top;
	if (e->value < e->next->value && e->value < e->next->next->value &&
		e->next->value > e->next->next->value)
	{
		move(s, NULL, SA);
		move(s, NULL, RA);
	}
	else if (e->value > e->next->value && e->value < e->next->next->value &&
			e->next->value < e->next->next->value)
		move(s, NULL, SA);
	else if (e->value < e->next->value && e->value > e->next->next->value &&
			e->next->value > e->next->next->value)
		move(s, NULL, RRA);
	else if (e->value > e->next->value && e->value > e->next->next->value &&
			e->next->value < e->next->next->value)
		move(s, NULL, RA);
	else if (e->value > e->next->value && e->value > e->next->next->value &&
			e->next->value > e->next->next->value)
	{
		move(s, NULL, SA);
		move(s, NULL, RRA);
	}
}

void	find_best_move(t_stack *s)
{
	t_item	*curr;
	int		i;
	int		moves[4];

	curr = s->top;
	while (curr)
	{
		moves[0] = max(curr->params.ra, curr->params.rb);
		moves[1] = max(curr->params.rra, curr->params.rrb);
		moves[2] = curr->params.ra + curr->params.rrb;
		moves[3] = curr->params.rra + curr->params.rb;
		i = 0;
		while (i < 4)
		{
			if (moves[i] < curr->params.least_moves)
			{
				curr->params.least_moves = moves[i];
				curr->params.scheme = i;
			}
			i++;
		}
		curr = curr->next;
	}
}

static int	get_index_of_best_element(t_stack *s)
{
	t_item	*curr;
	int		index;
	int		steps;
	int		i;

	steps = s->top->params.least_moves;
	curr = s->top;
	index = 0;
	i = 0;
	while (curr)
	{
		if (curr->params.least_moves < steps)
		{
			steps = curr->params.least_moves;
			index = i;
		}
		i++;
		curr = curr->next;
	}
	return (index);
}

static void move_best_element(t_stack *a, t_stack *b)
{
	t_item	*to_move;
	int		index;

	index = get_index_of_best_element(b);
	to_move = b->top;
	while (index > 0)
	{
		to_move = to_move->next;
		index--;
	}
	if (to_move->params.scheme == 0)
	{
		move_n(a, b, RR, min(to_move->params.ra, to_move->params.rb));
		if (to_move->params.ra > to_move->params.rb)
			move_n(a, NULL, RA, to_move->params.ra - to_move->params.rb);
		else
			move_n(NULL, b, RB, to_move->params.rb - to_move->params.ra);
	}
	else if (to_move->params.scheme == 1)
	{
		move_n(a, b, RRR, min(to_move->params.rra, to_move->params.rrb));
		if (to_move->params.rra > to_move->params.rrb)
			move_n(a, NULL, RRA, to_move->params.rra - to_move->params.rrb);
		else
			move_n(NULL, b, RRB, to_move->params.rrb - to_move->params.rra);
	}
	else if (to_move->params.scheme == 2)
	{
		move_n(a, NULL, RA, to_move->params.ra);
		move_n(NULL, b, RRB, to_move->params.rrb);
	}
	else if (to_move->params.scheme == 3)
	{
		move_n(a, NULL, RRA, to_move->params.rra);
		move_n(NULL, b, RB, to_move->params.rb);
	}
	move(a, b, PA);
}


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
	// ft_printf("pos = %d min = %d\n", position, min);
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

void	sort(t_stack *a)
{
	t_stack	*b;

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

int	is_sorted(t_stack *stack)
{
	t_item	*item;
	int		flag;
	int		first;
	int		last;

	flag = 2;
	item = stack->top;
	first = item->value;
	while (item->next)
	{
		if (item->value > item->next->value)
			flag--;
		last = item->next->value;
		item = item->next;
	}
	if (last > first)
		flag--;
	if (flag)
		return (1);
	return (0);
}
