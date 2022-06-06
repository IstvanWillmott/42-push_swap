/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:08:49 by iwillmot          #+#    #+#             */
/*   Updated: 2022/02/14 15:06:12 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	curlen(char const *s, char c, int i)
{
	int	len;

	len = 0;
	if (s[i] == '\0')
		return (1);
	while (s[i] == c)
		i++;
	while ((s[i]) && (s[i] != c))
	{
		len++;
		i++;
	}
	return (len + 1);
}

void	split_assign(char const *s, char **new, char c, int segs)
{
	int	i;
	int	x;
	int	g;

	i = 0;
	x = 0;
	g = 0;
	while (segs > 1)
	{
		new[x] = (char *) malloc(curlen(s, c, i));
		while ((s[i]) && (s[i] == c))
			i++;
		while ((s[i]) && (s[i] != c))
		{
			new[x][g] = s[i];
			g++;
			i++;
		}
		new[x][g] = '\0';
		x++;
		g = 0;
		segs--;
	}
	new[x] = (void *)0;
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		segs;
	char	**new;

	i = 0;
	segs = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
			if (i == 0 || s[i - 1] == c)
				segs++;
		if (s[i + 1] == '\0')
			segs++;
		i++;
	}
	new = (char **) malloc((segs) * sizeof(char *));
	split_assign(s, new, c, segs);
	return (new);
}
