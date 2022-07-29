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
	int	moves;
}	t_brain;

typedef struct s_normalize
{
	int	i;
	int	g;
	int	lower;
	int	higher;
	int	*stacka;
}	t_normalize;

// ------- SORT ------------
void	initialize(t_brain *brain);
void	copy_list(t_brain *brain);
void	radix(t_brain *brain);
void	three_len(t_brain *brain);
void	five_len(t_brain *brain);

// ------- SORT HELPERS ----
void 	move_top(t_brain *brain, int pos);
void 	restack_a(t_brain *brain);
void	restack_b(t_brain *brain);

// ------- HELPERS ---------
int		*normalize(t_brain *brain);
int		ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
int		*ft_calloc(int count);
int		cur_mod(t_brain *brain);

// ------- COMMANDS --------
//Swap
void	sa(t_brain *brain);
void	sb(t_brain *brain);
void	ss(t_brain *brain);
//Push
void	pa(t_brain *brain);
void	pb(t_brain *brain);
//Rotate
void	ra(t_brain *brain);
void	rb(t_brain *brain);
void	rr(t_brain *brain);
//Reverse Rotate
void	rra(t_brain *brain);
void	rrb(t_brain *brain);
void	rrr(t_brain *brain);

// ------- ERROR ----------
int		error_check(int argc, char **argv);

#endif
