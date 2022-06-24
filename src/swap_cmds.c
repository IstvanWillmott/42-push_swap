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

void	sa(t_brain *Brain)
{
	int	i;

	i = 0;
	if (Brain->alen >= 2)
	{
		i = Brain->stacka[0];
		Brain->stacka[1] = Brain->stacka[0];
		Brain->stacka[0] = i;
	}
}

void	sb(t_brain *Brain)
{
	int	i;

	i = 0;
	if (Brain->blen >= 2)
	{
		i = Brain->stackb[0];
		Brain->stackb[1] = Brain->stackb[0];
		Brain->stackb[0] = i;
	}
}

void	ss(t_brain *Brain)
{
	sa(&*Brain);
	sb(&*Brain);
}
