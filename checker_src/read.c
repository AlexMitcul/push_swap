/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:14:43 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/18 10:55:30 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_includes/checker.h"

static int	is_in_stack(t_stack *stack, int value)
{
	t_item	*curr;

	if (stack->size == 0)
		return (0);
	curr = stack->top;
	while (curr)
	{
		if (curr->value == value)
			return (1);
		curr = curr->next;
	}
	return (0);
}

static int	is_right_item(char *item, t_stack *stack)
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
	return (1);
}

static int	free_splitted(char **arr)
{
	int		i;

	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (-1);
}

static int	arr_size(char **arr)
{
	int	size;

	size = 0;
	while (arr[size] != NULL)
		size++;
	return (size - 1);
}

int	read_input(t_stack **stack, char *input_line)
{
	char	**splitted;
	int		count;
	t_stack	*s;

	splitted = ft_split(input_line, ' ');
	if (splitted == NULL)
		return (-1);
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
	return (1);
}
