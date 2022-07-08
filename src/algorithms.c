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

void	move_and_swap(t_brain *brain)
{
	
}

void	long_len(t_brain *brain)
{
	int	i;
	int	curcheck;
	int	mod;

	i = 0;
	curcheck = 9;
	mod = cur_mod(&*brain);
	while (curcheck >= 0)
	{
		while (i < brain->alen)
		{
			mod = brain->stacka[i] % 10;
			if (mod > 10)
				temp = temp / (mod / 10);
			if (mod == curcheck)

			i++;
		}
		i = 0;
		curcheck++;
	}
}

void	initialize(t_brain *brain)
{
	if (brain->alen == 3)
		three_len(&*brain);
	if (brain->alen == 5)
		five_len(&*brain);
	else
		long_len(&*brain);
}