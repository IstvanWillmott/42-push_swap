/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:39:10 by iwillmot          #+#    #+#             */
/*   Updated: 2022/06/10 13:39:12 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
int argv_array_duplicate(char **argv)
{
	int i;
	int g;
	//int r;
	char **stacktest;
	int strgcur;
	
	i = 0;
	g = 0;
	//r = 0;
	stacktest = ft_split(argv[1], ' ');
	strgcur = ft_atoi(stacktest[i]);
	while (stacktest[i])
	{
		strgcur = ft_atoi(stacktest[i]);
		g = i + 1;
		while (stacktest[g])
		{
			if (strgcur == ft_atoi(stacktest[g]))
				return (1);
			g++;
		}
		g++;
		i++;
	}
	free (stacktest);
	return (0);
}
#include <stdio.h>
int argv_list_diplicate(char **argv)
{
	int	i;
	int	g;
	int strgcur;
	int	checkcur;

	i = 1;
	g = 0;
	strgcur = ft_atoi(argv[i]);
	checkcur = 0;
	while (argv[i])
	{
		g = i + 1; 
		strgcur = ft_atoi(argv[i]);
		while (argv[g])
		{
			checkcur = ft_atoi(argv[g]);
			if (strgcur == checkcur)
				return (1);
			g++;
		}
		i++;
	}
	return (0);
}

int	argv_array_error(char **argv)
{
	int	i;

	i = 0;
	while (argv[1][i])
	{
		while (argv[1][i] == ' ')
			i++;
		if (argv[1][i] != '\0')
			break;
		if ((argv[1][i] < 48 || argv[1][i] > 57) && argv[1][i] != 45)
			return (1);
		i++;
	}
	return (0);
}

int	argv_list_error(char **argv)
{
	int	i;
	int	g;

	i = 1;
	g = 0;
	while(argv[i])
	{
		while (argv[i][g])
		{
			if (argv[i][g] < 48 || argv[i][g] > 57)
				return (1);
			g++;
		}
		g = 0;
		i++;
	}
	return (0);
}

int	error_check(int argc, char **argv)
{
	
	int error;

	error = 0;
	if (argc == 2)
	{
		error = argv_array_error(argv);
		if (error == 0)
			error = argv_array_duplicate(argv);
	}
	if (argc > 2)
	{

		error = argv_list_error(argv);
		if (error == 0)
			error = argv_list_diplicate(argv);
	}
	return (error);
}
