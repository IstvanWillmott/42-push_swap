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
	int	*stackc;
}	t_brain;

typedef struct s_normalize
{
	int	i;
	int	g;
	int	lower;
	int	higher;
	int	*stacka;
}	t_normalize;

// ------- HELPERS ---------
int		*normalize(t_brain *Brain);
int		ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
int 	*ft_calloc(int count);

// ------- COMMANDS --------
//Swap
void	sa(t_brain *Brain);
void	sb(t_brain *Brain);
void	ss(t_brain *Brain);
//Push
void	pa(t_brain *Brain);
//Rotate
void	ra(t_brain *Brain);
void	rb(t_brain *Brain);
void	rr(t_brain *Brain);
//Reverse Rotate
void	rra(t_brain *Brain);
void	rrb(t_brain *Brain);
void	rrr(t_brain *Brain);

// -------- ERROR ----------
int		error_check(int argc, char **argv);

#endif
