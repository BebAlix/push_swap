/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:28:03 by equesnel          #+#    #+#             */
/*   Updated: 2022/07/12 15:16:38 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static t_dlist	*ft_lstnew_elem(int content)
{
	t_dlist	*l;

	l = malloc(sizeof (t_dlist));
	if (!l)
		return (NULL);
	l->data = content;
	l->next = NULL;
	l->preview = NULL;
	return (l);
}

static void	ft_lstadd_elem(t_dlist *a, int tab_data)
{
	t_dlist	*elem;

	elem = ft_lstnew_elem(tab_data);
	while (a->next)
		a = a->next;
	a->next = elem;
	elem->preview = a;
}

void	make_list(t_list *l, t_dlist **a, t_dlist **b)
{
	int	i;

	i = 1;
	*a = ft_lstnew_elem(l->a[0]);
	while (i != l->len)
	{
		ft_lstadd_elem(*a, l->a[i]);
		i++;
	}
	*b = NULL;
}
