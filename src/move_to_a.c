/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:29:33 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/17 19:21:27 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	do_move2(t_stack *a, t_stack *b, t_item *to_move)
{
	if (to_move->params.scheme == 2)
	{
		move_n(a, NULL, RA, to_move->params.ra);
		move_n(NULL, b, RRB, to_move->params.rrb);
	}
	else if (to_move->params.scheme == 3)
	{
		move_n(a, NULL, RRA, to_move->params.rra);
		move_n(NULL, b, RB, to_move->params.rb);
	}
}

static void	do_move1(t_stack *a, t_stack *b, t_item *to_move)
{
	if (to_move->params.scheme == 0)
	{
		move_n(a, b, RR, min(to_move->params.ra, to_move->params.rb));
		if (to_move->params.ra > to_move->params.rb)
			move_n(a, NULL, RA, to_move->params.ra - to_move->params.rb);
		else
			move_n(NULL, b, RB, to_move->params.rb - to_move->params.ra);
	}
	else if (to_move->params.scheme == 1)
	{
		move_n(a, b, RRR, min(to_move->params.rra, to_move->params.rrb));
		if (to_move->params.rra > to_move->params.rrb)
			move_n(a, NULL, RRA, to_move->params.rra - to_move->params.rrb);
		else
			move_n(NULL, b, RRB, to_move->params.rrb - to_move->params.rra);
	}
	else
		do_move2(a, b, to_move);
}

void	move_best_element(t_stack *a, t_stack *b)
{
	t_item	*to_move;
	int		index;

	index = get_index_of_best_element(b);
	if (index == -1)
		return ;
	to_move = b->top;
	while (index > 0)
	{
		to_move = to_move->next;
		index--;
	}
	do_move1(a, b, to_move);
	move_n(a, b, PA, 1);
}
