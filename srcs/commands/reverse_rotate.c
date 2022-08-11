/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:48:00 by equesnel          #+#    #+#             */
/*   Updated: 2022/07/12 14:39:29 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	rra(t_dlist *a, int p)
{
	t_dlist	*t_a;
	int		tmp;

	t_a = a;
	while (t_a->next)
		t_a = t_a->next;
	while (t_a->preview)
	{
		tmp = t_a->data;
		t_a->data = t_a->preview->data;
		t_a->preview->data = tmp;
		t_a = t_a->preview;
	}
	if (p)
		ft_printf("rra\n");
}

void	rrb(t_dlist *b, int p)
{
	t_dlist	*t_b;
	int		tmp;

	t_b = b;
	while (t_b->next)
		t_b = t_b->next;
	while (t_b->preview)
	{
		tmp = t_b->data;
		t_b->data = t_b->preview->data;
		t_b->preview->data = tmp;
		t_b = t_b->preview;
	}
	if (p)
		ft_printf("rrb\n");
}

void	rrr(t_dlist **a, t_dlist **b)
{
	rra(*a, 0);
	rrb(*b, 0);
	ft_printf("rrr\n");
}
