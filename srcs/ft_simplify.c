/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simplify.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 23:52:04 by equesnel          #+#    #+#             */
/*   Updated: 2022/07/12 15:24:51 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_sort_int_tab(t_list	*l)
{
	int	swap;
	int	i;

	i = 0;
	while (i != l->len - 1)
	{
		if (l->sort[i] > l->sort[i + 1])
		{
			swap = l->sort[i];
			l->sort[i] = l->sort[i + 1];
			l->sort[i + 1] = swap;
			i = 0;
		}
		else
			i++;
	}
}

static void	ft_place_number(t_list *l)
{
	int	*tmp;
	int	i;
	int	x;

	i = 0;
	x = 1;
	tmp = ft_calloc(sizeof(int), l->len);
	while (x != l->len)
	{
		if (l->sort[x] == l->a[i])
		{
			tmp[i] = x;
			i = -1;
			x++;
		}
		i++;
	}
	free(l->a);
	l->a = tmp;
}

void	ft_simplify(t_list *l)
{
	ft_sort_int_tab(l);
	ft_place_number(l);
}
