/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:45:57 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/18 10:53:26 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_stack(t_stack *stack)
{
	t_item	*curr;
	t_item	*next;

	if (stack == NULL)
		return ;
	curr = stack->top;
	while (curr)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
	free(stack);
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

int	main(int argc, char **argv)
{
	t_stack	*stack;

	if (argc != 2)
		return (0);
	else if (read_input(&stack, argv[1]) == ERROR)
	{
		write(STDERR_FILENO, "Error\n", 6);
		return (0);
	}
	sort(stack);
	final_sort(stack);
	free_stack(stack);
	return (0);
}
