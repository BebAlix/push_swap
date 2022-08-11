/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 17:25:48 by equesnel          #+#    #+#             */
/*   Updated: 2022/07/12 15:27:42 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init_tab(t_list *l)
{
	l->tab = NULL;
	l->str = NULL;
	l->sort = NULL;
	l->a = NULL;
}

void	ft_free(t_list *l)
{
	int	i;

	i = 0;
	if (l->tab)
	{
		while (l->tab[i])
		{
			free(l->tab[i]);
			i++;
		}
	}
	free(l->tab);
	free(l->str);
	free(l->a);
	free(l->sort);
}

void	ft_free_list(t_dlist **a)
{
	t_dlist	*tmp;

	while ((*a)->preview)
		*a = (*a)->preview;
	while (*a)
	{
		tmp = *a;
		*a = (*a)->next;
		free(tmp);
	}
}

void	ft_error(t_list *l)
{
	write(2, "Error\n", 6);
	ft_free(l);
	exit(0);
}

int	ft_atoi_overflow(const char *nptr, t_list *l)
{
	long int	result;
	int			len;
	int			neg;
	int			i;

	i = 0;
	result = 0;
	neg = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	while (nptr[i] == '-')
		if (nptr[i++] == '-')
			neg = -1;
	result = 0;
	len = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = (nptr[i++] - 48) + (result * 10);
		if (len++ >= 12)
			ft_error(l);
	}
	if (result * neg < INT_MIN || result * neg > INT_MAX)
		ft_error(l);
	return (result * neg);
}
