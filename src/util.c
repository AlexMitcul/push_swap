/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:44:23 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/14 17:34:39 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

int max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

void	quick_sort(int *arr, int start, int end)
{
	int	i;
	int	j;
	int	pivot;
	int	tmp;

	if (start >= end)
		return ;
	i = start;
	j = end;
	pivot = arr[(start + end) / 2];
	while (i <= j)
	{
		while (arr[i] < pivot)
			i++;
		while (arr[j] > pivot)
			j--;
		if (i <= j)
		{
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
	}
	quick_sort(arr, start, j);
	quick_sort(arr, i, end);
}
