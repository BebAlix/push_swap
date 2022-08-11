/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:54:27 by equesnel          #+#    #+#             */
/*   Updated: 2022/07/25 15:08:27 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	make_str(int ac, char **av, t_list *l)
{
	int		len;
	int		i;
	int		x;

	i = 1;
	len = 0;
	while (i != ac)
		len += ft_strlen(av[i++]);
	l->str = calloc(sizeof(char), (len + i));
	i = 1;
	while (i != ac)
	{
		x = 0;
		len = ft_strlen(l->str);
		while (av[i][x])
		{
			l->str[len + x] = av[i][x];
			x++;
		}
		l->str[len + x++] = ' ';
		l->str[len + x] = '\0';
		i++;
	}
}

static void	make_tab_int(t_list *l)
{
	int	i;

	i = 0;
	while (l->tab[i])
		i++;
	l->a = calloc(sizeof(int), i);
	l->sort = calloc(sizeof(int), i);
	i = 0;
	while (l->tab[i])
	{
		l->a[i] = ft_atoi_overflow(l->tab[i], l);
		l->sort[i] = l->a[i];
		i++;
	}
	l->len = i;
}

static void	check_dopple(t_list *l)
{
	int	i;
	int	x;

	i = 0;
	while (i < l->len)
	{
		x = i + 1;
		while (x < l->len)
		{
			if (l->a[i] == l->a[x])
				ft_error(l);
			x++;
		}
		i++;
	}
}

static void	check_str(t_list *l)
{
	int	i;

	i = 0;
	while (l->str[i] == ' ')
		i++;
	if (l->str[i] == '-' && (l->str[i + 1] < '0' || l->str[i + 1] > '9'))
		ft_error(l);
	if (l->str[i] != '-' && (l->str[i] < '0' || l->str[i] > '9'))
		ft_error(l);
	while (l->str[++i])
	{
		if ((l->str[i] < '0' || l->str[i] > '9')
			&& l->str[i] != ' ' && l->str[i] != '-')
			ft_error(l);
		if (l->str[i] == '-')
			if (((l->str[i + 1] < '0' || l->str[i + 1] > '9')
					|| l->str[i - 1] != ' '))
				ft_error(l);
	}
}

void	check_errors(int ac, char **av, t_list *l)
{
	int	i;

	i = 0;
	if (ac < 2)
		exit(0);
	while (i != ac)
	{
		if (av[i][0] == '\0')
			ft_error(l);
		i++;
	}
	make_str(ac, av, l);
	check_str(l);
	l->tab = ft_split(l->str, ' ');
	make_tab_int(l);
	check_dopple(l);
}
