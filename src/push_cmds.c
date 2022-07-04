/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_cmds.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:04:06 by iwillmot          #+#    #+#             */
/*   Updated: 2022/06/17 12:04:14 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_brain *brain)
{
	int	i;

	i = brain->alen - 1;
	if (brain->blen > 0)
	{
		while (i >= 0)
		{
			brain->stacka[i + 1] = brain->stacka[i];
			i--;
		}
		brain->stacka[0] = brain->stackb[0];
		i = 0;
		while (i < brain->blen - 1)
		{
			brain->stackb[i] = brain->stackb[i + 1];
			i++;
		}
		brain->stackb[brain->blen - 1] = 0;
		brain->blen--;
		brain->alen++;
	}
	brain->moves++;
	write(1, "pa\n", 4);
}

void	pb(t_brain *brain)
{
	int	i;

	i = brain->blen - 1;
	if (brain->alen > 0)
	{
		while (i >= 0)
		{
			brain->stackb[i + 1] = brain->stackb[i];
			i--;
		}
		brain->stackb[0] = brain->stacka[0];
		i = 0;
		while (i < brain->alen - 1)
		{
			brain->stacka[i] = brain->stacka[i + 1];
			i++;
		}
		brain->stacka[brain->alen - 1] = 0;
		brain->alen--;
		brain->blen++;
	}
	brain->moves++;
	write(1, "pb\n", 4);
}
