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

int argv_array_duplicate(char **argv)
{
	char g;

	g = argv[1][0];
	return (0);
}

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
	while (argv[i][0])
	{
		strgcur = ft_atoi(argv[i]);
		g = i + 1;
		while (argv[g][0])
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
		while (argv[1][i] == 32)
			i++;
		if (argv[1][i] != '\0')
			if (argv[1][i] < 48 || argv[1][i] > 57)
				return (1);
	}
	return (0);
}

int	argv_list_error(char **argv)
{
	int	i;
	int	g;

	i = 1;
	g = 0;
	while(argv[i][0])
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
	else if (argc > 2)
	{
		error = argv_list_error(argv);
		if (error == 0)
			error = argv_list_diplicate(argv);
	}
	return (error);
}