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

void	rra(t_brain *brain)
{
	int	i;
	int	strg;

	i = brain->alen - 1;
	strg = brain->stacka[i];
	if (brain->alen > 1)
	{
		while (i > 0)
		{
			brain->stacka[i] = brain->stacka[i - 1];
			i--;
		}
		brain->stacka[i] = strg;
	}
	brain->moves++;
	write(1, "rra\n", 4);
}

void	rrb(t_brain *brain)
{
	int	i;
	int	strg;

	i = brain->blen - 1;
	strg = brain->stackb[i];
	if (brain->blen > 1)
	{
		while (i > 0)
		{
			brain->stackb[i] = brain->stackb[i - 1];
			i--;
		}
		brain->stackb[i] = strg;
	}
	brain->moves++;
	write(1, "rrb\n", 4);
}

void	rrr(t_brain *brain)
{
	rra(&*brain);
	rrb(&*brain);
	brain->moves -= 1;
	write(1, "(equiv. rrr)\n", 14);
}
