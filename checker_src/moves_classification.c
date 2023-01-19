/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_classification.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:04:42 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/18 09:04:07 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_includes/checker.h"

static void	move1(t_stack *a, t_stack *b, t_moves moves)
{
	if (moves == SA)
		swap(a);
	else if (moves == SB)
		swap(b);
	else if (moves == SS)
	{
		swap(a);
		swap(b);
	}
}

static void	move2(t_stack *a, t_stack *b, t_moves moves)
{
	if (moves == RA)
		rotate(a);
	else if (moves == RB)
		rotate(b);
	else if (moves == RR)
	{
		rotate(a);
		rotate(b);
	}
}

static void	move3(t_stack *a, t_stack *b, t_moves moves)
{
	if (moves == RRA)
		reverse_rotate(a);
	else if (moves == RRB)
		reverse_rotate(b);
	else if (moves == RRR)
	{
		reverse_rotate(a);
		reverse_rotate(b);
	}
}

static void	move4(t_stack *a, t_stack *b, t_moves moves)
{
	if (moves == PA)
		push_to(b, a);
	else if (moves == PB)
		push_to(a, b);
}

int	move(t_stack *a, t_stack *b, t_moves moves)
{
	if (moves == NONE)
		return (0);
	move1(a, b, moves);
	move2(a, b, moves);
	move3(a, b, moves);
	move4(a, b, moves);
	return (1);
}
