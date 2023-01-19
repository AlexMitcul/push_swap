/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moving_to_second_stack.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:51:57 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/17 19:41:15 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	find_min_max(t_stack *s, int *min, int *max)
{
	t_item	*curr;

	*min = INT_MAX;
	*max = INT_MIN;
	curr = s->top;
	while (curr)
	{
		if (curr->value > *max)
			*max = curr->value;
		if (curr->value < *min)
			*min = curr->value;
		curr = curr->next;
	}
}

static void	find_median(t_stack *s, int *median)
{
	t_item	*item;
	int		*arr;
	int		i;

	arr = (int *)malloc(sizeof(int) * s->size);
	i = 0;
	item = s->top;
	while (item)
	{
		arr[i] = item->value;
		item = item->next;
		i++;
	}
	quick_sort(arr, 0, s->size - 1);
	*median = arr[s->size / 2];
	free(arr);
}

void	move_to_b(t_stack *a, t_stack *b)
{
	int	min;
	int	max;
	int	median;

	if (a == NULL)
		return ;
	find_min_max(a, &min, &max);
	find_median(a, &median);
	while (a->size > 3)
	{
		if (a->top->value == min
			|| a->top->value == max || a->top->value == median)
			move_n(a, NULL, RA, 1);
		else
			move_n(a, b, PB, 1);
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

int	get_index_of_best_element(t_stack *s)
{
	t_item	*curr;
	int		index;
	int		steps;
	int		i;

	steps = INT_MAX;
	curr = s->top;
	index = -1;
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
