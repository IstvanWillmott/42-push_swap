/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_cmds.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:02:24 by iwillmot          #+#    #+#             */
/*   Updated: 2022/06/17 12:02:40 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rra(t_brain *Brain)
{
	int	i;
	int	strg;

	i = Brain->alen - 1;
	strg = Brain->stacka[i];
	while (i > 0)
	{
		Brain->stacka[i] = Brain->stacka[i - 1];
		i--;
	}
	Brain->stacka[i] = strg;
}

void rrb(t_brain *Brain)
{
	int	i;
	int	strg;

	i = Brain->blen - 1;
	strg = Brain->stackb[i];
	while (i > 0)
	{
		Brain->stackb[i] = Brain->stackb[i - 1];
		i--;
	}
	Brain->stackb[i] = strg;
}

void rrr(t_brain *Brain)
{
	rra(&*Brain);
	rrb(&*Brain);
}
