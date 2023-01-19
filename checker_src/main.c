/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 20:10:27 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/18 13:28:45 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_includes/checker.h"

t_moves	recognize_command2(char *line)
{
	size_t	len;

	if (line == NULL)
		return (NONE);
	len = ft_strlen(line) - 1;
	if (ft_strncmp("sb", line, len) == 0)
		return (SB);
	else if (ft_strncmp("ss", line, len) == 0)
		return (SS);
	else if (ft_strncmp("rra", line, len) == 0)
		return (RRA);
	else if (ft_strncmp("rrb", line, len) == 0)
		return (RRB);
	else if (ft_strncmp("rrr", line, len) == 0)
		return (RRR);
	return (NONE);
}

t_moves	recognize_command(char *line)
{
	size_t	len;

	if (line == NULL)
		return (NONE);
	len = ft_strlen(line) - 1;
	if (ft_strncmp("ra", line, len) == 0)
		return (RA);
	else if (ft_strncmp("rb", line, len) == 0)
		return (RB);
	else if (ft_strncmp("rr", line, len) == 0)
		return (RR);
	else if (ft_strncmp("pa", line, len) == 0)
		return (PA);
	else if (ft_strncmp("pb", line, len) == 0)
		return (PB);
	else if (ft_strncmp("sa", line, len) == 0)
		return (SA);
	return (recognize_command2(line));
}

int	is_sorted(t_stack *stack)
{
	t_item	*item;
	int		flag;
	int		first;
	int		last;

	flag = 2;
	item = stack->top;
	first = item->value;
	while (item->next)
	{
		if (item->value > item->next->value)
			flag--;
		last = item->next->value;
		item = item->next;
	}
	if (last > first)
		flag--;
	if (flag)
		return (1);
	return (0);
}

int	exit_with_error(void)
{
	write(STDERR_FILENO, "Error\n", 6);
	return (0);
}

int	read_commands(t_stack *a, t_stack *b)
{
	t_moves	command;

	while (1)
	{
		command = recognize_command(get_next_line(STDIN_FILENO));
		if (command != NONE)
			move(a, b, command);
		else
		{
			free_stack(a);
			free_stack(b);
			return (exit_with_error());
		}
	}
	return (1);
}

void	print_stack(t_stack *stack)
{
	t_item	*curr;
	int		i;

	if (stack == NULL)
	{
		ft_printf("Stack doen't exist\n");
		return ;
	}
	ft_printf("=== Stack size [ %d ] ===\n", stack->size);
	if (stack->size == 0 && stack->top == NULL)
		ft_printf("Stack is empty.\n");
	else if (stack->size == 0 && stack->top != NULL)
		ft_printf("Stack size is 0 but top is not NULL.\n");
	else
	{
		i = 0;
		curr = stack->top;
		while (curr)
		{
			ft_printf("[ %3d | %d ]\n", i, curr->value);
			curr = curr->next;
		}
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	// if (argc == 1)
	// 	return (0);
	// else if (argc > 2)
	// 	return (exit_with_error());
	// else if (read_input(&a, argv[1]) == -1)
	// 	return (exit_with_error());
	read_input(&a, "1 2 3");
	b = init_stack();
	if (read_commands(a, b) == 0)
		return (0);
	print_stack(a);
	if (is_sorted(a) && b->size == 0)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	free_stack(a);
	free_stack(b);
	return (0);
}
