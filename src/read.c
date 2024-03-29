/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:14:43 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/18 10:54:13 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_overflow(char *number)
{
	long long	value;

	value = ft_atoll(number);
	if (value > 0 && value > (long long) INT_MAX)
		return (1);
	if (value < 0 && value < (long long) INT_MIN)
		return (1);
	return (0);
}

int	is_right_item(char *item, t_stack *stack)
{
	int	i;
	int	value;

	i = 0;
	if (item[i] == '-' && item[i + 1] != '\0')
		i++;
	while (item[i])
	{
		if (!ft_isdigit(item[i]))
			return (0);
		i++;
	}
	if (is_overflow(item))
		return (0);
	value = ft_atoi(item);
	if (is_in_stack(stack, value))
		return (0);
	return (OK);
}

int	free_splitted(char **arr)
{
	int		i;

	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (ERROR);
}

static int	arr_size(char **arr)
{
	int	size;

	size = 0;
	while (arr[size] != NULL)
		size++;
	return (size - 1);
}

/**
 * Parse sequence of numbers from line (argc[1])
*/
int	read_input(t_stack **stack, char *input_line)
{
	char	**splitted;
	int		count;
	t_stack	*s;

	splitted = ft_split(input_line, ' ');
	if (splitted == NULL)
		return (ERROR);
	count = arr_size(splitted);
	s = init_stack();
	if (!s)
		return (free_splitted(splitted));
	while (count >= 0)
	{
		if (is_right_item(splitted[count], s))
			push(s, ft_atoi(splitted[count]));
		else
		{
			free_stack(s);
			return (free_splitted(splitted));
		}
		count--;
	}
	free_splitted(splitted);
	*stack = s;
	return (OK);
}
