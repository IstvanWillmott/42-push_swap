/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 14:59:51 by iwillmot          #+#    #+#             */
/*   Updated: 2022/06/27 14:59:52 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	long_len(t_brain *brain)
{
	int	i;
	int	g;
	int	mod;
	int	temp;

	i = 0;
	g = 1;
	mod = cur_mod(&*brain);
	temp = 0;
	while (g < brain->stacklen)
	{
		while (i < brain->stacklen)
		{
			temp = brain->stacka[0]/g;
			while (temp > 1)
				temp = temp % 2;
			if (temp == 0)
				ra(&*brain);
			else
				pb(&*brain);
			i++;
		}
		restack_a(&*brain);
		i = 0;
		g *= 2;
	}
	brain->rsteps++;
}

void	initialize(t_brain *brain)
{
	if (brain->alen == 3)
		three_len(&*brain);
	else if (brain->alen == 5)
		five_len(&*brain);
	else
		long_len(&*brain);
}