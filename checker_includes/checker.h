/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 20:11:37 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/18 10:56:57 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../libft/includes/libft.h"
# include "../libft/includes/ft_printf.h"
# include "../libft/includes/get_next_line.h"

# include <limits.h>

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
	RRR,
	NONE
}	t_moves;

typedef struct s_item
{
	int				value;
	struct s_item	*next;
}				t_item;

typedef struct s_stack
{
	int		size;
	t_item	*top;
}				t_stack;

int			is_overflow(char *number);
long long	ft_atoll(const char *str);

int			move(t_stack *a, t_stack *b, t_moves moves);
int			read_input(t_stack **stack, char *input_line);

t_stack		*init_stack(void);
t_item		*init_new_item(int value);

void		push(t_stack *stack, int value);
t_item		*pop(t_stack *stack);
void		insert_at(int value, t_stack *stack, int position);

void		free_stack(t_stack *stack);

void		push_to(t_stack *from, t_stack *to);
void		rotate(t_stack *s);
void		reverse_rotate(t_stack *s);
void		swap(t_stack *s);

#endif
