/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 08:45:59 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/18 08:46:19 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_includes/checker.h"

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
