/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moving_to_second_stack.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:51:57 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/14 21:26:07 by amitcul          ###   ########.fr       */
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

	find_min_max(a, &min, &max);
	find_median(a, &median);
	while (a->size > 3)
	{
		// print_stack(a);
		if (a->top->value == min ||
			a->top->value == max || a->top->value == median)
			move(a, NULL, RA);
		else
			move(a, b, PB);
	}
	// print_stack(a);
	// ft_printf("moved\n\n\n\n");
}


