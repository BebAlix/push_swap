/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 20:02:04 by equesnel          #+#    #+#             */
/*   Updated: 2022/07/12 14:51:51 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/inc/libft.h"
# include <limits.h>

typedef struct s_list
{
	char	**tab;
	char	*str;
	int		*sort;
	int		*a;
	int		len;
}	t_list;

/*checks*/
void	check_errors(int ac, char **av, t_list *l);

/*sorting algorithm*/
void	make_list(t_list *l, t_dlist **a, t_dlist **b);
void	ft_simplify(t_list *l);
void	ft_sort(t_list *l, t_dlist **a, t_dlist **b);

/*commands*/
void	sa(t_dlist **a, int p);
void	sb(t_dlist **b, int p);
void	ss(t_dlist **a, t_dlist **b);
void	pa(t_dlist **a, t_dlist **b);
void	pb(t_dlist **a, t_dlist **b);
void	ra(t_dlist *a, int p);
void	rb(t_dlist *b, int p);
void	rr(t_dlist **a, t_dlist **b);
void	rra(t_dlist *a, int p);
void	rrb(t_dlist *b, int p);
void	rrr(t_dlist **a, t_dlist **b);

/*utils*/
void	init_tab(t_list *l);
void	ft_free_list(t_dlist **a);
void	ft_free(t_list *l);
void	ft_error(t_list *l);

int		ft_atoi_overflow(const char *nptr, t_list *l);

#endif
