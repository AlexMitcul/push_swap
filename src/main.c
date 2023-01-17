/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:45:57 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/14 22:14:47 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_stack(t_stack *stack)
{
	t_item	*curr;
	t_item	*next;

	curr = stack->top;
	next = curr->next;
	while (curr->next)
	{
		free(curr);
		curr = next;
		next = next->next;
	}
	free(curr);
	free(stack);
}

int	main(int argc, char **argv)
{
	t_stack	*stack;

	if (argc != 2)
	{
		write(STDERR_FILENO, "Error\n", 6);
		return (0);
	}
	if (read_input(&stack, argv[1]) == ERROR)
	{
		write(STDERR_FILENO, "Error\n", 6);
		free(stack);
		return (0);
	}
	sort(stack);
	final_sort(stack);
	free_stack(stack);
	return (0);
}
