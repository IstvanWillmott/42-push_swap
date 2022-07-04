/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:07:06 by iwillmot          #+#    #+#             */
/*   Updated: 2022/07/01 12:07:07 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void copy_list(t_brain *brain)
{
	int	i;

	i = 0;
	brain->radixls = ft_calloc(4 * brain->stacklen);
	brain->rsteps = 0;
	while (i < brain->stacklen)
	{
		brain->radixls[i] = brain->stacka[i];
		i++;
	}
}

void assign(t_brain *brain, int *tempsort, int temp, int pos)
{
	int	g;

	g = temp;
	while (tempsort[g] != 0)
		g++;
	tempsort[g] = brain->stacka[pos];
}

int	sqrmod(t_brain *brain)
{
	int	mod;
	int	i;

	mod = 10;
	i = 0;
	while (i < brain->rsteps)
	{
		mod *= 10;
		i++;
	}
	return (mod);
}

void	rewrite_radixls(t_brain *brain, int *tempsort)
{
	int	i;

	i = 0;
	while (i < brain->stacklen)
	{
		brain->radixls[i] = tempsort[i];
		i++;
	}
}

void	radix(t_brain *brain)
{
	int	i;
	int g;
	int	temp;
	int *tempsort;
	int mod;

	i = 0;
	g = 0;
	temp = 0;
	mod = sqrmod(&*brain);
	tempsort = ft_calloc(4 * brain->stacklen);
	while (g < 10)
	{
		while (i < brain->stacklen)
		{
			temp = brain->stacka[i];
			temp = temp % mod;
			if (mod > 10)
				temp = temp / (mod / 10);
			if (temp == g)
				assign(&*brain, tempsort, temp, i);
			i++;
		}
		g++;
		i = 0;
	}
	rewrite_radixls(&*brain, tempsort);
	free (tempsort);
	brain->rsteps++;
}
