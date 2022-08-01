/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_helpers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:38:04 by iwillmot          #+#    #+#             */
/*   Updated: 2022/07/08 11:38:06 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	restack_a(t_brain *brain)
{
	while (brain->blen > 0)
		pa(&*brain);
}

int	error_ret(int ret, int neg)
{
	if ((ret * neg) < 0 && neg == 1)
		return (1);
	else if ((ret * neg) > 0 && neg == -1)
		return (1);
	else
		return (0);
}

int	ft_atoi_error(const char	*str)
{
	int	ret;
	int	neg;
	int	i;

	ret = 0;
	neg = 1;
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if ((str[i] == '+') && ((str[i + 1] >= '0') && (str[i + 1] <= '9')))
		i++;
	else if ((str[i] == '-') && ((str[i + 1] >= '0') && (str[i + 1] <= '9')))
	{
		neg = -1;
		i++;
	}
	else if ((str[i] <= '0') && (str[i] >= '9'))
		return (0);
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		ret = ret * 10 + (str[i] - 48);
		i++;
	}
	return (error_ret(ret, neg));
}

int	already_in_order(t_brain *brain)
{
	int	i;

	i = 1;
	while (i < brain->stacklen)
	{
		if (brain->stacka[i - 1] != brain->stacka[i] - 1)
			return (1);
		i++;
	}
	return (0);
}
