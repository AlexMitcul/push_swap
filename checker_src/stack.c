/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:50:46 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/18 08:55:45 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_includes/checker.h"

void	push(t_stack *stack, int value)
{
	t_item	*new;

	new = init_new_item(value);
	if (!new)
		return ;
	if (stack->size != 0)
		new->next = stack->top;
	stack->top = new;
	stack->size++;
}

t_item	*pop(t_stack *stack)
{
	t_item	*item;

	if (stack->size == 0)
		return (NULL);
	item = stack->top;
	stack->top = stack->top->next;
	stack->size--;
	return (item);
}

static void	insert_at_end(t_stack *stack, int value)
{
	t_item	*curr;

	if (stack->top == NULL)
		stack->top = init_new_item(value);
	curr = stack->top;
	while (curr->next)
		curr = curr->next;
	curr->next = init_new_item(value);
	stack->size++;
}

void	insert_at(int value, t_stack *stack, int position)
{
	t_item	*curr;
	t_item	*new;

	if (position == stack->size)
	{
		insert_at_end(stack, value);
		return ;
	}
	curr = stack->top;
	while (position - 1 > 0)
	{
		curr = curr->next;
		position--;
	}
	new = init_new_item(value);
	new->next = curr->next;
	curr->next = new;
	stack->size++;
}
