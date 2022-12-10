/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:19:38 by amitcul           #+#    #+#             */
/*   Updated: 2022/12/10 01:17:39 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libs/libft/libft.h"
# include "../libs/ft_printf/ft_printf.h"

# include <stdlib.h>

# define ERROR 0
# define SUCCESS 1

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}					t_stack;

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

void	test(void);

int	is_in_stack(t_stack *stack, int value);
int	is_bad_number(int *value, char *str);

/**
// * utils
*/
long long	ft_atoll(char *str);

/**
// * free.c
*/
void	free_stack(t_stack *stack);


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

/**
// * read.c
*/
int	read_data(t_stack **stack, int argc, char **argv);

/**
// * sort.c
*/
void	final_sort(t_stack **stack);
int		is_sorted(t_stack *stack);
void	sort(t_stack **stack);

#endif
