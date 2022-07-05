/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_len.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:38:50 by iwillmot          #+#    #+#             */
/*   Updated: 2022/07/05 16:38:51 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pos_back(t_brain *brain, int pos)
{
	while (pos != 5)
	{
		rra(&*brain);
		pos++;
	}
}

void	pos_front(t_brain *brain, int pos)
{
	while (pos != 0)
	{
		ra(&*brain);
		pos--;
	}
}

void	five_len(t_brain *brain)
{
	int	i;
	int	pos;

	i = 4;
	pos = 0;
	while (i <= 5)
	{
		while (brain->stacka[pos] != i)
			pos++;
		if (pos > 2)
			pos_back(&*brain, pos);
		else
			pos_front(&*brain, pos);
		pb(&*brain);
		i++;
		pos = 0;
	}
	three_len(&*brain);
	pa(&*brain);
	pa(&*brain);
	ra(&*brain);
	ra(&*brain);
}
