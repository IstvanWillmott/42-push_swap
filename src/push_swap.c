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

int	*stacka_list(int argc, char *argv[], int *len)
{
	int	*stacka;

	stacka = malloc(sizeof(int) * (argc));
	while (argv[len[0] + 1])
	{
		stacka[len[0]] = ft_atoi(argv[len[0] + 1]);
		len[0]++;
	}
	return (stacka);
}

int	*stacka_array(char *argv[], int *len)
{
	int		i;
	char	**stackarray;
	int		*stacka;

	i = 0;
	stackarray = ft_split(argv[1], ' ');
	while (stackarray[len[0]])
		len[0]++;
	stacka = malloc(4 * len[0]);
	while (stackarray[i])
	{
		stacka[i] = ft_atoi(stackarray[i]);
		i++;
	}
	free(stackarray);
	return (stacka);
}

int	main(int argc, char *argv[])
{
	int	*stacka;
	int *stackb;
	int	*len;
	int stacklen;
	int	error;

	len = malloc(4);
	len[0] = 0;
	stacklen = 0;
	error = error_check(argc, argv);
	if (argc != 1 && error == 0)
	{
		if (argc == 2)
			stacka = stacka_array(argv, len);
		else if (argc > 2)
			stacka = stacka_list(argc, argv, len);
		stackb = ft_calloc(len[0]);
		stacklen = len[0];
		free(len);
		//testing -----------------
		printf("Stacklen: %d\n", stacklen);
		for (int i = 0; i < stacklen; i++)
		{
			printf("%d: %d     ", i, stacka[i]);
			printf("%d: %d\n", i, stackb[i]);
		}
	}
	if (error == 1)
		write(1, "Error\n", 7);
	return (0);
}
