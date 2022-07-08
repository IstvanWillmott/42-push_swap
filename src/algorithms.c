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
	int	curcheck;
	int	mod;
	int	temp;

	i = 0;
	curcheck = 0;
	mod = cur_mod(&*brain);
	temp = 0;
	while (curcheck < 1)
	{
		while (i < brain->stacklen)
		{
			//temp = brain->stacka[i] % 2;
			//if (mod > 10)
			//	temp = temp / (mod / 10);
			//if (temp == curcheck)
			//	move_top(&*brain, i);
			if ((brain->stacka[0] % 2) == 0)
				pb(&*brain);
			else
				ra(&*brain);
			i++;
		}
		i = 0;
		curcheck++;
	}
	//restack_a(&*brain);
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