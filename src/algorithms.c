/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 14:59:51 by iwillmot          #+#    #+#             */
/*   Updated: 2022/06/27 14:59:52 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*void	long_len(t_brain *brain)
{
	
}*/

void	initialize(t_brain *brain)
{
	if (brain->alen == 3)
		three_len(&*brain);
	if (brain->alen == 5)
		five_len(&*brain);
	//else
		//long_len(&*brain);
}