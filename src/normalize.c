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

int	*normalize(t_brain *Brain)
{
	t_normalize	norm;

	norm.i = 0;
	norm.g = 0;
	norm.lower = 0;
	norm.higher = 0;
	norm.stacka = ft_calloc(Brain->stacklen);
	while (norm.i < Brain->stacklen)
	{
		while (norm.g < Brain->stacklen)
		{
			if (Brain->stackc[norm.i] > Brain->stackc[norm.g])
				norm.higher++;
			if (Brain->stackc[norm.i] < Brain->stackc[norm.g])
				norm.lower++;
			norm.g++;
		}
		norm.g = 0;
		norm.stacka[norm.i] = (norm.higher - norm.lower)
			+ (Brain->stacklen - norm.higher);
		norm.higher = 0;
		norm.lower = 0;
		norm.i++;
	}
	return (norm.stacka);
}
