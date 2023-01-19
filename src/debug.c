/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:29:05 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/17 19:48:53 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_stack(t_stack *stack)
{
	t_item	*curr;
	int		i;

	if (stack == NULL)
	{
		ft_printf("Stack doen't exist\n");
		return ;
	}
	ft_printf("=== Stack size [ %d ] ===\n", stack->size);
	if (stack->size == 0 && stack->top == NULL)
		ft_printf("Stack is empty.\n");
	else if (stack->size == 0 && stack->top != NULL)
		ft_printf("Stack size is 0 but top is not NULL.\n");
	else
	{
		i = 0;
		curr = stack->top;
		while (curr)
		{
			ft_printf("[ %3d | %d ]\n", i, curr->value);
			curr = curr->next;
		}
	}
}

static void	print_indexing_info(t_params params)
{
	ft_printf("\tRA %3d\tRB %3d\n", params.ra, params.rb);
	ft_printf("\tRRA %2d\tRRB %2d\n", params.rra, params.rrb);
	ft_printf("\tSCEME %2d\t BEST %3d\n", params.scheme, params.least_moves);
}

void	print_stack_full(t_stack *stack)
{
	t_item	*curr;
	int		i;

	curr = stack->top;
	i = 0;
	ft_printf("=== Stack size [ %d ] ===\n", stack->size);
	while (curr)
	{
		ft_printf("[ %3d | %d ]\n", i, curr->value);
		print_indexing_info(curr->params);
		i++;
		curr = curr->next;
	}
}
