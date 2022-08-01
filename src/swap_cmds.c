/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_cmds.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:03:15 by iwillmot          #+#    #+#             */
/*   Updated: 2022/06/17 12:03:48 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_brain *brain)
{
	int	i;

	i = 0;
	if (brain->alen >= 2)
	{
		i = brain->stacka[1];
		brain->stacka[1] = brain->stacka[0];
		brain->stacka[0] = i;
	}
	brain->moves++;
	write(1, "sa\n", 3);
}

void	sb(t_brain *brain)
{
	int	i;

	i = 0;
	if (brain->blen >= 2)
	{
		i = brain->stackb[1];
		brain->stackb[1] = brain->stackb[0];
		brain->stackb[0] = i;
	}
	brain->moves++;
	write(1, "sb\n", 3);
}

void	ss(t_brain *brain)
{
	sa(&*brain);
	sb(&*brain);
	brain->moves -= 1;
	write(1, "(equiv. ss)\n", 13);
}
