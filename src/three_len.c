/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_len.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 14:04:47 by iwillmot          #+#    #+#             */
/*   Updated: 2022/07/04 14:04:49 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	front_3(t_brain *brain, int i)
{
	if (brain->stacka[i + 1] == 2)
	{
		sa(&*brain);
		rra(&*brain);
	}
	else if (brain->stacka[i + 1] == 1)
		ra(&*brain);
}

void	front_2(t_brain *brain, int i)
{
	if (brain->stacka[i + 1] == 3)
		rra(&*brain);
	else if (brain->stacka[i + 1] == 1)
		sa(&*brain);
}

void	three_len(t_brain *brain)
{
	int	i;

	i = 0;
	if (brain->stacka[i] == 3)
		front_3(&*brain, i);
	else if (brain->stacka[i] == 2)
		front_2(&*brain, i);
	else if (brain->stacka[i] == 1)
	{
		if (brain->stacka[i + 1] == 3)
		{
			sa(&*brain);
			ra(&*brain);
		}
	}
}
