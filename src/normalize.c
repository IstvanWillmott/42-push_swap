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

int	*normalize(t_brain *brain)
{
	t_normalize	norm;

	norm.i = 0;
	norm.g = 0;
	norm.lower = 0;
	norm.higher = 0;
	norm.stacka = ft_calloc(brain->stacklen);
	while (norm.i < brain->stacklen)
	{
		while (norm.g < brain->stacklen)
		{
			if (brain->stackc[norm.i] > brain->stackc[norm.g])
				norm.higher++;
			if (brain->stackc[norm.i] < brain->stackc[norm.g])
				norm.lower++;
			norm.g++;
		}
		norm.g = 0;
		norm.stacka[norm.i] = (norm.higher - norm.lower)
			+ (brain->stacklen - norm.higher);
		norm.higher = 0;
		norm.lower = 0;
		norm.i++;
	}
	return (norm.stacka);
}
