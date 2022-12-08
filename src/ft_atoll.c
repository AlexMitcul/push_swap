/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 02:05:08 by amitcul           #+#    #+#             */
/*   Updated: 2022/12/08 03:38:46 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long	ft_atoll(char *str)
{
	long long	sign;
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
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * sign);
}
