/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 08:42:05 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/18 08:42:10 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_includes/checker.h"

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

	new = malloc(sizeof(t_item));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->value = value;
	return (new);
}
