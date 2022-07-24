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

int cur_mod(t_brain *brain)
{
    int i;
    int mod;

    i = 0;
    mod = 10;
    while (i < brain->rsteps)
    {
        mod *= 10;
        i++;
    }
    return (mod);
}

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
	int	i;

	i = 0;
	while (i < brain->alen)
	{
		pa(&*brain);
		i++;
	}
}

void	restack_b(t_brain *brain)
{
	int	i;

	i = 0;
	while (i < brain->blen)
	{
		pb(&*brain);
		i++;
	}
}
