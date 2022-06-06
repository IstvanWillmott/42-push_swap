/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 14:59:56 by iwillmot          #+#    #+#             */
/*   Updated: 2022/04/29 14:59:58 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	**stackarray;
	int		len;
	int		i;
	int		*stacka;

	i = 0;
	len = 0;
	if (argc == 2)
	{
		stackarray = ft_split(argv[1], ' ');
		while (stackarray[len])
			len++;
		stacka = malloc(4 * len);
		while (stackarray[i])
		{
			stacka[i] = ft_atoi(stackarray[i]);
			i++;
		}
	}
	else
	{
		stacka = malloc(4 * (argc - 1));
		while (argv[len + 1])
		{
			stacka[len] = ft_atoi(argv[len + 1]);
			len++;
		}
	}
	return (0);
}
