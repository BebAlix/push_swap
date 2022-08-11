/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:48:28 by equesnel          #+#    #+#             */
/*   Updated: 2022/07/12 14:39:30 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ra(t_dlist *a, int p)
{
	t_dlist	*t_a;
	int		tmp;

	t_a = a;
	while (t_a->next)
	{
		tmp = t_a->data;
		t_a->data = t_a->next->data;
		t_a->next->data = tmp;
		t_a = t_a->next;
	}
	if (p)
		ft_printf("ra\n");
}

void	rb(t_dlist *b, int p)
{
	t_dlist	*t_b;
	int		tmp;

	t_b = b;
	while (t_b->next)
	{
		tmp = t_b->data;
		t_b->data = t_b->next->data;
		t_b->next->data = tmp;
		t_b = t_b->next;
	}
	if (p)
		ft_printf("rb\n");
}

void	rr(t_dlist **a, t_dlist **b)
{
	ra(*a, 0);
	rb(*b, 0);
	ft_printf("rr\n");
}
