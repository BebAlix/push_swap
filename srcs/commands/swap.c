/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:31:20 by equesnel          #+#    #+#             */
/*   Updated: 2022/07/12 14:39:30 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sa(t_dlist **a, int p)
{
	int	tmp;

	if ((*a)->next)
	{
		tmp = (*a)->data;
		(*a)->data = (*a)->next->data;
		(*a)->next->data = tmp;
		if (p)
			ft_printf("sa\n");
	}
}

void	sb(t_dlist **b, int p)
{
	int	tmp;

	if ((*b)->next)
	{
		tmp = (*b)->data;
		(*b)->data = (*b)->next->data;
		(*b)->next->data = tmp;
		if (p)
			ft_printf("sb\n");
	}
}

void	ss(t_dlist **a, t_dlist **b)
{
	sa(a, 0);
	sb(b, 0);
	ft_printf("ss\n");
}
