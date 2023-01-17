/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:51:37 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/14 13:55:08 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

typedef	struct s_params
{
	int	ra;
	int	rb;
	int	rra;
	int	rrb;
	int	scheme;
	int	least_moves;
}	t_params;

typedef	struct s_item
{
	int				value;
	t_params		params;
	struct s_item	*next;
}				t_item;

typedef struct s_stack
{
	int		size;
	t_item	*top;
}				t_stack;

#endif
