/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:24:03 by amitcul           #+#    #+#             */
/*   Updated: 2022/12/07 20:47:42 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	move1(t_stack **a, t_stack **b, t_moves moves)
{
	if (moves == SA)
	{
		swap(a);
		ft_printf("sa\n");
	}
	else if (moves == SB)
	{
		swap(b);
		ft_printf("sb\n");
	}
	else if (moves == SS)
	{
		swap(a);
		swap(b);
		ft_printf("ss\n");
	}
	else if (moves == PA)
	{
		push_to(b, a);
		ft_printf("pa\n");
	}
	else if (moves == PB)
	{
		push_to(a, b);
		ft_printf("pb\n");
	}
}

static void	move2(t_stack **a, t_stack **b, t_moves moves)
{
	if (moves == RA)
	{
		rotate(a);
		ft_printf("ra\n");
	}
	else if (moves == RB)
	{
		rotate(b);
		ft_printf("rb\n");
	}
	else if (moves == RR)
	{
		rotate(a);
		rotate(b);
		ft_printf("rr\n");
	}
}

static void	move3(t_stack **a, t_stack **b, t_moves moves)
{
	if (moves == RRA)
	{
		reverse_rotate(a);
		ft_printf("rra\n");
	}
	else if (moves == RRB)
	{
		reverse_rotate(b);
		ft_printf("rrb\n");
	}
	else if (moves == RRR)
	{
		reverse_rotate(a);
		reverse_rotate(b);
		ft_printf("rrr\n");
	}
}

void	move(t_stack **a, t_stack **b, t_moves moves)
{
	move1(a, b, moves);
	move2(a, b, moves);
	move3(a, b, moves);
}
