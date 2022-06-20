/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:39:02 by iwillmot          #+#    #+#             */
/*   Updated: 2022/06/20 12:39:04 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *normalize(t_brain *Brain)
{
    int    i;
    int    g;
    int    low;
    int   *stacka;

    i = 1;
    g = 0;
    low = 0;
    stacka = (int *)calloc(Brain->stacklen, 4);
    while (g < Brain->stacklen)
    {
		low = 0;
		while (i < Brain->stacklen)
		{
			if (Brain->stackc[i] < Brain->stackc[g] && stacka[i] == 0)
				low = i;
			i++;
		}
		stacka[low] = g + 1;
		i = 0;
		g++;
    }
    return (stacka);
}