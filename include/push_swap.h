/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwillmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 18:14:43 by iwillmot          #+#    #+#             */
/*   Updated: 2022/05/06 11:26:40 by iwillmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

typedef struct s_brain
{
	int	stacklen;
	int	*stacka;
	int	alen;
	int	*stackb;
	int	blen;
}	t_brain;

// ------- HELPERS ---------
int		ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
int 	*ft_calloc(int count);

// ------- COMMANDS --------
//Swap
void sa(int *stacka);
void sb(int *stackb);
void ss(int *stacka, int *stackb);
//Rotate
void	ra(int *stacka, int stacklen);
void	rb(int *stackb, int stacklen);
void	rr(int *stacka, int *stackb, int stacklen);
//Reverse Rotate
void	rra(int *stacka, int stacklen);
void	rrb(int *stackb, int stacklen);
void	rrr(int *stacka, int *stackb, int stacklen);

// -------- ERROR ----------
int		error_check(int argc, char **argv);

#endif
