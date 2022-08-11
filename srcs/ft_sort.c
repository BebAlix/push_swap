/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 23:30:57 by equesnel          #+#    #+#             */
/*   Updated: 2022/07/25 15:07:36 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_is_sort(t_dlist *a, int len)
{
	while (--len)
	{
		if (a->data > a->next->data)
		{
			return (1);
		}
		a = a->next;
	}
	return (0);
}

static void	sort_three(t_dlist **a)
{
	if ((*a)->data > (*a)->next->data && (*a)->data < (*a)->next->next->data)
		sa(a, 1);
	else if ((*a)->data < (*a)->next->data
		&& (*a)->data > (*a)->next->next->data)
		rra(*a, 1);
	else if ((*a)->data > (*a)->next->data
		&& (*a)->next->data < (*a)->next->next->data)
		ra(*a, 1);
	else if ((*a)->data > (*a)->next->data
		&& (*a)->next->data > (*a)->next->next->data)
	{
		sa(a, 1);
		rra(*a, 1);
	}
	else
	{
		sa(a, 1);
		ra(*a, 1);
	}
}

static void	sort_five(t_dlist **a, t_dlist **b)
{
	int	i;

	i = 0;
	while (i != 5)
	{
		if ((*a)->data == 0 || (*a)->data == 4)
			pb(a, b);
		else
			ra(*a, 1);
		i++;
	}
	if (ft_is_sort(*a, 3) != 0)
		sort_three(a);
	if ((*b)->data < (*b)->next->data)
		rb(*b, 1);
	pa(a, b);
	ra(*a, 1);
	pa(a, b);
}

static int	len_byte(int size)
{
	int	byte;

	byte = 32;
	while (--byte >= 0)
		if (size >> byte & 1)
			break ;
	return (byte);
}

static void	ft_radix(t_list *l, t_dlist **a, t_dlist **b)
{
	int	x;
	int	i;
	int	len;

	x = 0;
	len = len_byte(l->len);
	while (x <= len)
	{
		i = 0;
		while (i++ != l->len)
		{
			if ((*a)->data >> x & 1)
				ra(*a, 1);
			else
				pb(a, b);
		}
		while (*b)
			pa(a, b);
		x++;
	}
}

void	ft_sort(t_list *l, t_dlist **a, t_dlist **b)
{
	if (ft_is_sort(*a, l->len) == 0)
		return ;
	if (l->len < 3)
		sa(a, 1);
	else if (l->len == 3)
		sort_three(a);
	else if (l->len == 5)
		sort_five(a, b);
	else
		ft_radix(l, a, b);
}
