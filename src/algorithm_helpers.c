/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_helpers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:38:04 by iwillmot          #+#    #+#             */
/*   Updated: 2022/07/08 11:38:06 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void move_top(t_brain *brain, int pos)
{
    int i;

    i = 0;
	if (pos > brain->alen - pos)
	{
		while (i < (brain->alen - pos))
		{
			rra(&*brain);
			i++;
		}
	}
	else
	{
		while (i < (pos))
		{
			ra(&*brain);
			i++;
		}
	}
	pb(&*brain);
}

void	restack_a(t_brain *brain)
{
	while (brain->blen > 0)
		pa(&*brain);
}
