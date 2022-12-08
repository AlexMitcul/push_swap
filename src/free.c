/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 01:37:28 by amitcul           #+#    #+#             */
/*   Updated: 2022/12/08 03:19:36 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// * OK
void	free_stack(t_stack *stack)
{
	t_stack	*next;

	if (!stack)
		return ;
	next = stack->next;
	while (stack)
	{
		free(stack);
		stack = next;
		if (next)
			next = next->next;
	}
}
