/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 02:59:15 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/17 13:06:19 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

static char	*to_h(unsigned long value)
{
	unsigned long	cpy;
	int				len;
	char			*res;

	cpy = value;
	len = 0;
	if (value == 0)
		len = 1;
	while (cpy > 0 && len++ >= 0)
		cpy /= 16;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	len--;
	while (len >= 0)
	{
		res[len] = "0123456789abcdef"[value % 16];
		value = value / 16;
		len--;
	}
	return (res);
}

int	print_p(t_token *token, unsigned long value)
{
	int		count;
	char	*to_print;
	char	*tmp;

	count = 0;
	if (value == 0)
		to_print = ft_strdup("(nil)");
	else
	{
		to_print = to_h(value);
		tmp = ft_strjoin("0x", to_print);
		free(to_print);
		to_print = tmp;
	}
	if (token->dash)
		count += ft_printf("%-*s", token->width_v, to_print);
	else
		count += ft_printf("%*s", token->width_v, to_print);
	free(to_print);
	return (count);
}
