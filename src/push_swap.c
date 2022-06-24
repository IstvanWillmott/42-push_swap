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

int	*stackc_list(int argc, char *argv[], t_brain *Brain)
{
	int	*stackc;
	Brain->stacklen = 0;

	stackc = malloc(sizeof(int) * (argc));
	while (argv[Brain->stacklen + 1])
	{
		stackc[Brain->stacklen] = ft_atoi(argv[Brain->stacklen + 1]);
		Brain->stacklen++;
	}
	return (stackc);
}

int	*stackc_array(char *argv[], t_brain *Brain)
{
	int		i;
	char	**stackarray;
	int		*stackc;
	Brain->stacklen = 0;

	i = 0;
	stackarray = ft_split(argv[1], ' ');
	while (stackarray[Brain->stacklen])
		Brain->stacklen++;
	stackc = malloc(4 * Brain->stacklen);
	while (stackarray[i])
	{
		stackc[i] = ft_atoi(stackarray[i]);
		i++;
	}
	free(stackarray);
	return (stackc);
}

int main(int argc, char **argv)
{
	t_brain	Brain;
	int		error;

	error = error_check(argc, argv);
	if (argc != 1 && error == 0)
	{
		if (argc == 2)
			Brain.stackc = stackc_array(argv, &Brain);
		else if (argc > 2)
			Brain.stackc = stackc_list(argc, argv, &Brain);
		Brain.stackb = ft_calloc(Brain.stacklen);
		Brain.stacka = normalize(&Brain);
		Brain.alen = Brain.stacklen;
		Brain.blen = 0;
		//TESTING ---------
		printf("Stacklen: %d\n", Brain.stacklen);
		for (int i = 0; i < Brain.stacklen; i++)
		{
			printf("%d: %d", i, Brain.stackc[i]);
			printf("         %d\n", Brain.stacka[i]);
		}
	}
	if (error == 1)
		write(1, "Error\n", 7);
	return (0);
}
