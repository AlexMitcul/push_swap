/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 01:01:25 by amitcul           #+#    #+#             */
/*   Updated: 2022/12/10 01:25:20 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//! Need to test
int	is_sorted(t_stack *stack)
{
	int	flag;

	flag = 2;
	while (stack->next)
	{
		if (stack->value > stack->next->value)
			flag--;
		stack = stack->next;
	}
	if (flag)
		return (1);
	return (0);
}

//! Need to test
void	final_sort(t_stack **stack)
{
	int		len;
	int		index;
	t_stack	*tmp;

	len = get_stack_length(*stack);
	index = 0;
	tmp = *stack;
	while (tmp->next)
	{
		if (tmp->value > tmp->next->value)
			break ;
		index++;
		tmp = tmp->next;
	}
	if (index > len / 2)
		while (index-- > 0)
			move(stack, NULL, RRA);
	else
		while (index-- > 0)
			move(stack, NULL, RA);
}

//! Need to test
void	get_min_max(t_stack *stack, int *max, int *min)
{
	while (stack)
	{
		if (stack->value > max)
			max = stack->value;
		else if (stack->value < min)
			min = stack->value;
		stack = stack->next;
	}
}

//! Need to test
void	move_elements_to_second_stack(t_stack **a, t_stack **b)
{
	int	max;
	int	min;
	int	len;

	get_min_max(*a, &max, &min);
	len = get_stack_length(*a);
	while (len > 2)
	{
		if ((*a)->value == min || (*b)->value == max)
			move(a, NULL, RA);
		else
		{
			move(a, b, PB);
			len--;
		}
	}
}

//! Need to test
void	sort(t_stack **a)
{
	t_stack *b;

	b = NULL;
	// move_elements_to_second_stack(a, &b);
	while (b)
	{
		// index_elemets(&b);
		// find_best_move();
		// move(a, &b);
	}
}
