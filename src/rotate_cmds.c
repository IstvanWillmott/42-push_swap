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

void	ra(t_brain *brain)
{
	int	i;
	int	strg;

	i = 0;
	strg = brain->stacka[0];
	if (brain->alen > 1)
	{
		while (i < brain->alen - 1)
		{
			brain->stacka[i] = brain->stacka[i + 1];
			i++;
		}
		brain->stacka[i] = strg;
	}
	brain->moves++;
	write(1, "ra\n", 3);
}

void	rb(t_brain *brain)
{
	int	i;
	int	strg;

	i = 0;
	strg = brain->stackb[0];
	if (brain->blen > 1)
	{
		while (i < brain->blen - 1)
		{
			brain->stackb[i] = brain->stackb[i + 1];
			i++;
		}
		brain->stackb[i] = strg;
	}
	brain->moves++;
	write(1, "rb\n", 3);
}

void	rr(t_brain *brain)
{
	ra(&*brain);
	rb(&*brain);
	brain->moves -= 1;
	write(1, "(equiv. rr)\n", 13);
}
