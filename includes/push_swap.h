/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:47:01 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/18 10:51:56 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"
# include "../libft/includes/ft_printf.h"

# include <limits.h>

# include "stack.h"

# define ERROR 0
# define OK 1

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
 *! DEBUG
*/
void		print_stack(t_stack *stack);
void		print_stack_full(t_stack *stack);

/**
 * main.c
*/
int			is_sorted(t_stack *stack);
void		free_stack(t_stack *stack);

/**
 * util.c
*/
void		quick_sort(int *arr, int start, int end);
int			min(int a, int b);
int			max(int a, int b);
int			is_right_item(char *item, t_stack *stack);
long long	ft_atoll(const char *str);

/**
 * init.c
*/
t_item		*init_new_item(int value);
t_stack		*init_stack(void);

/**
 * indexing.c
*/
void		indexing(t_stack *a, t_stack *b);

/**
 * move_to_a.c
*/
void		move_best_element(t_stack *a, t_stack *b);

/**
 * read.c
*/
int			read_input(t_stack **stack, char *input_line);

/**
 * stack.c
*/
void		push(t_stack *stack, int value);
t_item		*pop(t_stack *stack);
t_stack		*init_stack(void);
int			is_in_stack(t_stack *stack, int value);
void		insert_at(int value, t_stack *stack, int position);

/**
 * moves_functions.c
*/
void		reverse_rotate(t_stack *s);
void		rotate(t_stack *s);
void		push_to(t_stack *from, t_stack *to);
void		swap(t_stack *stack);

/**
 * moves_classification.c
*/
void		move(t_stack *a, t_stack *b, t_moves moves);
void		move_n(t_stack *a, t_stack *b, t_moves moves, int count);

/**
 * sort.c
*/
void		sort(t_stack *a);
int			is_sorted(t_stack *stack);
void		final_sort(t_stack *stack);

/**
 * moving_to_second_stack.c
*/
void		move_to_b(t_stack *a, t_stack *b);
void		find_best_move(t_stack *s);
int			get_index_of_best_element(t_stack *s);

#endif
