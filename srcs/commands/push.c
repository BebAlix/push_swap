/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 22:50:10 by equesnel          #+#    #+#             */
/*   Updated: 2022/07/12 14:39:29 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	pa(t_dlist **a, t_dlist **b)
{
	t_dlist	*tmp;

	if (!*b)
		return ;
	tmp = *a;
	*a = *b;
	if ((*b)->next)
	{
		*b = (*b)->next;
		(*b)->preview = NULL;
	}
	else
		*b = NULL;
	if (!tmp)
		(*a)->next = NULL;
	else
	{
		(*a)->next = tmp;
		tmp->preview = *a;
	}
	ft_printf("pa\n");
}

void	pb(t_dlist **a, t_dlist **b)
{
	t_dlist	*tmp;

	if (!*a)
		return ;
	tmp = *b;
	*b = *a;
	if ((*a)->next)
	{
		*a = (*a)->next;
		(*a)->preview = NULL;
	}
	else
		*a = NULL;
	if (!tmp)
		(*b)->next = NULL;
	else
	{
		(*b)->next = tmp;
		tmp->preview = *b;
	}
	ft_printf("pb\n");
}
