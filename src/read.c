/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 01:29:55 by amitcul           #+#    #+#             */
/*   Updated: 2022/12/08 03:42:05 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
 * Some arguments aren’t integers
 * Some arguments are bigger than an integer
 * Some arguments there are duplicates.
*/

// * OK
int	is_in_stack(t_stack *stack, int value)
{
	while (stack)
	{
		if (stack->value == value)
			return (1);
		stack = stack->next;
	}
	return (0);
}

// * OK
int	is_bad_number(int *value, char *str)
{
	char		*s;
	long long	temp_value;

	s = str;
	if (*s == '-' || *s == '+')
		s++;
	while (*s != 0)
	{
		if (*s < '0' || *s > '9')
			return (1);
		s++;
	}
	temp_value = ft_atoll(str);
	if (temp_value > INT_MAX || temp_value < INT_MIN)
		return (1);
	*value = (int) temp_value;
	return (0);
}

// * OK
int	read_data(t_stack **stack, int argc, char **argv)
{
	int	value;

	value = 0;
	while (argc > 1)
	{
		if (is_bad_number(&value, argv[argc - 1]))
		{
			free_stack(*stack);
			return (ERROR);
		}
		if (is_in_stack(*stack, value))
		{
			free_stack(*stack);
			return (ERROR);
		}
		push(stack, init_new_item(value));
		argc--;
	}
	return (SUCCESS);
}
