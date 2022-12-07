/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:13:43 by amitcul           #+#    #+#             */
/*   Updated: 2022/12/07 21:00:01 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*init_new_item(int value)
{
	t_stack	*item;

	item = malloc(sizeof(t_stack));
	if (!item)
		return (NULL);
	item->next = NULL;
	item->value = value;
	return (item);
}

// ! Need to test
void	push(t_stack **stack, t_stack *item)
{
	if (*stack == NULL)
		*stack = item;
	else
	{
		item->next = *stack;
		*stack = item;
	}
}

// ! Need to test
t_stack	*pop(t_stack **stack)
{
	t_stack	*item;

	if (*stack == NULL)
		return (NULL);
	item = *stack;
	*stack = (*stack)->next;
	return (item);
}

// ! Need to test
void	insert_at(t_stack **stack, t_stack *item, int position)
{
	t_stack	*curr;

	if (position == 0)
	{
		push(stack, item);
		return ;
	}
	curr = *stack;
	while (curr && position > 1)
	{
		curr = curr->next;
		position--;
	}
	if (curr->next == NULL)
	{
		curr->next = item;
	}
	else
	{
		item->next = curr->next;
		curr->next = item;
	}
}

// ! Need to test
int	get_stack_length(t_stack *stack)
{
	int	len;

	len = 0;
	while (stack)
	{
		stack = stack->next;
		len++;
	}
	return (len);
}
