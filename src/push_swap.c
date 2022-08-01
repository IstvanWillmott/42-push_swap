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

int	*stackc_list(int argc, char *argv[], t_brain *brain)
{
	int	*stackc;

	brain->stacklen = 0;
	stackc = malloc(sizeof(int) * (argc));
	while (argv[brain->stacklen + 1])
	{
		stackc[brain->stacklen] = ft_atoi(argv[brain->stacklen + 1]);
		brain->stacklen++;
	}
	return (stackc);
}

int	*stackc_array(char *argv[], t_brain *brain)
{
	int		i;
	char	**stackarray;
	int		*stackc;

	brain->stacklen = 0;
	i = 0;
	stackarray = ft_split(argv[1], ' ');
	while (stackarray[brain->stacklen])
		brain->stacklen++;
	stackc = malloc(4 * brain->stacklen);
	while (stackarray[i])
	{
		stackc[i] = ft_atoi(stackarray[i]);
		i++;
	}
	free(stackarray);
	return (stackc);
}

int	main(int argc, char **argv)
{
	t_brain	brain;
	int		error;

	error = error_check(argc, argv);
	if (argc != 1 && error == 0)
	{
		if (argc == 2)
			brain.stackc = stackc_array(argv, &brain);
		else if (argc > 2)
			brain.stackc = stackc_list(argc, argv, &brain);
		brain.stackb = ft_calloc(brain.stacklen);
		brain.stacka = normalize(&brain);
		brain.alen = brain.stacklen;
		brain.blen = 0;
		brain.moves = 0;
		//copy_list(&brain);
		initialize(&brain);
		//move_top(&brain, 4);
		//TESTING ---------
		
		/*printf("Stacklen: %d\n", brain.alen);
		for (int i = 0; i < brain.stacklen; i++)
		{
			printf("%d: %d", i, brain.stackc[i]);
			printf("%10d\n", brain.stacka[i]);
		}
		initialize(&brain);
		printf("Moves: %d\n", brain.moves);
		for (int i = 0; i < brain.stacklen; i++)
		{
			printf("%da: %d    ", i, brain.stacka[i]);
			printf("b: %d\n", brain.stackb[i]);
		}
		printf("alen: %d    blen: %d\n", brain.alen, brain.blen);*/
	}
	if (error == 1)
		write(1, "Error\n", 7);
	return (0);
}
