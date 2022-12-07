/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:19:38 by amitcul           #+#    #+#             */
/*   Updated: 2022/12/07 20:59:55 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/ft_printf.h"
# include "../libft/includes/libft.h"

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}				t_stack;

typedef enum e_moves {
	SA,
	SB,
	SS,
	PA,
	PB,
	RA,
	RB,
	RR,
	RRA,
	RRB,
	RRR
}	t_moves;

/**
// * stack.c
*/
void	push(t_stack **stack, t_stack *item);
t_stack	*pop(t_stack **stack);
t_stack	*init_new_item(int value);
void	insert_at(t_stack **stack, t_stack *item, int position);
int		get_stack_length(t_stack *stack);

/**
// * stack_operations.c
*/
void	rotate(t_stack **stack);
void	reverse_rotate(t_stack **stack);
void	swap(t_stack **stack);
void	push_to(t_stack **from, t_stack **to);

/**
// * moves.c
*/
void	move(t_stack **a, t_stack **b, t_moves moves);

#endif
