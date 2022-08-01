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
	if ((ret*neg) < 0 && neg == 1)
		return (1);
	else if ((ret*neg) > 0 && neg == -1)
		return (1);
	else
		return (0);
}
