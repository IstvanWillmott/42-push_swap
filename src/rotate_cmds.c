/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_cmds.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:02:52 by iwillmot          #+#    #+#             */
/*   Updated: 2022/06/17 12:03:02 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ra(t_brain *Brain)
{
	int	i;
	int	strg;

	i = 0;
	strg = Brain->stacka[0];
	while (i < Brain->alen - 1)
	{
		Brain->stacka[i] = Brain->stacka[i - 1];
		i++;
	}
	Brain->stacka[i] = strg;
}

void rb(t_brain *Brain)
{
	int	i;
	int	strg;

	i = 0;
	strg = Brain->stackb[0];
	while (i < Brain->blen - 1)
	{
		Brain->stackb[i] = Brain->stackb[i - 1];
		i++;
	}
	Brain->stackb[i] = strg;
}

void rr(t_brain *Brain)
{
	ra(&*Brain);
	rb(&*Brain);
}
