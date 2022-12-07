/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:43:24 by amitcul           #+#    #+#             */
/*   Updated: 2022/12/07 21:09:09 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * Shift up all elements of stack a by 1.
 * The first element becomes the last one.
*/
// ! Need to test
void	rotate(t_stack **stack)
{
	t_stack	*item;

	item = pop(stack);
	if (!item)
		return ;
	insert_at(stack, item, get_stack_length(*stack) - 1);
}

/**
 * Shift down all elements of stack a by 1.
 * The last element becomes the first one.
*/
// ! Need to test
void	reverse_rotate(t_stack **stack)
{
	t_stack	*item;

	if (get_stack_length(*stack) <= 2)
	{
		if (get_stack_length(*stack) <= 1)
			return ;
		item = pop(stack);
		insert_at(stack, item, 1);
	}
	item = *stack;
	while (item->next->next)
		item = item->next;
	push(stack, item->next);
	item->next = NULL;
}

/**
 * Swap the first 2 elements at the top of stack.
 * Do nothing if there is only one or no elements.
*/
// ! Need to test
void	swap(t_stack **stack)
{
	t_stack	*item;

	item = pop(stack);
	if (!item)
		return ;
	insert_at(stack, item, 1);
}

/**
 * Take the first element at the top of 'from' and put it at the top of 'to'.
 * Do nothing if 'from' is empty.
*/
// ! Need to test
void	push_to(t_stack **from, t_stack **to)
{
	t_stack	*item;

	item = pop(from);
	if (!item)
		return ;
	push(to, item);
}
