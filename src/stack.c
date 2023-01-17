/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:50:46 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/14 21:09:39 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_in_stack(t_stack *stack, int value)
{
	t_item	*curr;

	if (stack->size == 0)
		return (0);
	curr = stack->top;
	while (curr)
	{
		if (curr->value == value)
			return (1);
		curr = curr->next;
	}
	return (0);
}

t_stack	*init_stack(void)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->size = 0;
	new->top = NULL;
	return (new);
}

static t_item	*init_new_item(int value)
{
	t_item		*new;
	t_params	params;

	new = malloc(sizeof(t_item));
	if (!new)
		return (NULL);
	params.least_moves = INT_MAX;
	params.ra = 0;
	params.rb = 0;
	params.rra = 0;
	params.rrb = 0;
	params.scheme = 0;
	new->next = NULL;
	new->params = params;
	new->value = value;
	return (new);
}

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
