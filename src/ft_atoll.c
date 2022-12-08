/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 02:05:08 by amitcul           #+#    #+#             */
/*   Updated: 2022/12/08 02:10:14 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	check_overflow(unsigned long n)
{
	if ((n * 10) / 10 != n)
		return (1);
	return (0);
}

static int	get_overflow_number(int sign)
{
	if (sign == 1)
		return (-1);
	return (0);
}

int	ft_atoll(char *str)
{
	int			sign;
	long long	res;

	sign = 1;
	res = 0;
	while (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r' || \
	*str == '\t' || *str == '\v')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = sign * (-1);
		str++;
	}
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		if (check_overflow(res))
			return (get_overflow_number(sign));
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * sign);
}
