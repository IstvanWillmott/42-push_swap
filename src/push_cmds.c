/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_cmds.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:04:06 by iwillmot          #+#    #+#             */
/*   Updated: 2022/06/17 12:04:14 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void pa(int *stacka, int *stackb)
{
	int i;

	i = 0;
	i = stackb[0];
	stackb[0] = stacka[0];
	stacka[0] = i;
}
