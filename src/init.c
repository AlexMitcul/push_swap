/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:22:18 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/17 19:11:25 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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

t_item	*init_new_item(int value)
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
