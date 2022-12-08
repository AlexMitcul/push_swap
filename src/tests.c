/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 02:17:02 by amitcul           #+#    #+#             */
/*   Updated: 2022/12/08 03:02:43 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/**
// * read.c
*/

// * OK
static void	test_is_in_stack(void)
{
	t_stack	*stack = NULL;

	push(&stack, init_new_item(5));
	push(&stack, init_new_item(4));
	push(&stack, init_new_item(3));
	push(&stack, init_new_item(2));
	push(&stack, init_new_item(1));

	printf("TEST 1\n");
	if (is_in_stack(stack, 5) == 1 && is_in_stack(stack, 1) == 1 &&
		is_in_stack(stack, 3) == 1 && is_in_stack(stack, 7) != 1)
		ft_printf("SUCCESS: test_is_in_stack\n");
	else
		ft_printf("ERROR: test_is_in_stack\n");
	free_stack(stack);

	printf("TEST 2\n");
	stack = NULL;
	push(&stack, init_new_item(1));
	if (is_in_stack(stack, 1) == 1)
		ft_printf("SUCCESS: test_is_in_stack\n");
	else
		ft_printf("ERROR: test_is_in_stack\n");
	free_stack(stack);

	printf("TEST 3\n");
	stack = NULL;
	if (is_in_stack(stack, 1) != 1)
		ft_printf("SUCCESS: test_is_in_stack\n");
	else
		ft_printf("ERROR: test_is_in_stack\n");
	free_stack(stack);
}

// * OK
static void test_is_bad_number(void)
{
	int	value = 0;

	printf("TEST 1\n");
	if (is_bad_number(&value, "42") == 0 && value == 42)
		ft_printf("SUCCESS: test_is_bad_number\n");
	else
		ft_printf("ERROR: test_is_bad_number\n");

	printf("TEST 2\n");
	if (is_bad_number(&value, "-42") == 0 && value == -42)
		ft_printf("SUCCESS: test_is_bad_number\n");
	else
		ft_printf("ERROR: test_is_bad_number\n");

	printf("TEST 3\n");
	if (is_bad_number(&value, "+42") == 0 && value == 42)
		ft_printf("SUCCESS: test_is_bad_number\n");
	else
		ft_printf("ERROR: test_is_bad_number\n");

	printf("TEST 4\n");
	if (is_bad_number(&value, "it_is_not_a_number") == 1)
		ft_printf("SUCCESS: test_is_bad_number\n");
	else
		ft_printf("ERROR: test_is_bad_number\n");

	printf("TEST 5\n");
	if (is_bad_number(&value, "42bad_number") == 1)
		ft_printf("SUCCESS: test_is_bad_number\n");
	else
		ft_printf("ERROR: test_is_bad_number\n");

	printf("TEST 6\n");
	if (is_bad_number(&value, "+2147483647") == 0 && value == 2147483647)
		ft_printf("SUCCESS: test_is_bad_number\n");
	else
		ft_printf("ERROR: test_is_bad_number\n");

	printf("TEST 7\n");
	if (is_bad_number(&value, "2147483647") == 0 && value == 2147483647)
		ft_printf("SUCCESS: test_is_bad_number\n");
	else
		ft_printf("ERROR: test_is_bad_number\n");

	printf("TEST 8\n");
	if (is_bad_number(&value, "-2147483648") == 0 && value == -2147483648)
		ft_printf("SUCCESS: test_is_bad_number\n");
	else
		ft_printf("ERROR: test_is_bad_number\n");
}

/**
// * stack.c
*/

// * OK
static void	test_push(void)
{
	t_stack	*stack = NULL;

	push(&stack, init_new_item(5));
	push(&stack, init_new_item(4));
	push(&stack, init_new_item(3));
	push(&stack, init_new_item(2));
	push(&stack, init_new_item(1));
	if (stack->value == 1 && stack->next->value == 2 && stack->next->next->value == 3)
		ft_printf("SUCCESS: test_push\n");
	else
		ft_printf("ERROR: test_push\n");
	// free_stack(stack);
}

// !
static void test_pop(void)
{
	;
}

// !
static void test_insert_at(void)
{
	;
}

// !
static void test_get_stack_length(void)
{
	;
}

/**
// * free.c
*/

// * OK
static void test_free_stack()
{
	t_stack	*stack = NULL;

	push(&stack, init_new_item(5));
	push(&stack, init_new_item(4));
	push(&stack, init_new_item(3));
	push(&stack, init_new_item(2));
	push(&stack, init_new_item(1));
	free_stack(stack);

	stack = NULL;
	push(&stack, init_new_item(1));
	free_stack(stack);

	stack = NULL;
	free_stack(stack);
}

void	test(void)
{
	// test_push();
	// test_free_stack();
	// test_is_in_stack();
	test_is_bad_number();
}
