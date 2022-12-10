/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:14:58 by amitcul           #+#    #+#             */
/*   Updated: 2022/12/10 01:25:38 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// TODO
int	return_error(void)
{
	ft_putstr_fd("Error\n", STDERR_FILENO);
	return (0);
}

int	main(int argc, char **argv)
{
	t_stack *stack;

	stack = NULL;

	if (read_data(&stack, argc, argv) == ERROR)
		return (return_error());
	if (is_sorted(stack))
		final_sort(&stack);
	else
		sort(&stack);
	free_stack(stack);

	// test();

	return (0);
}
