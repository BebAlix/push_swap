/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <equesnel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 23:11:10 by equesnel          #+#    #+#             */
/*   Updated: 2022/07/12 15:27:55 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int ac, char **av)
{
	t_dlist	*a;
	t_dlist	*b;
	t_list	l;

	init_tab(&l);
	check_errors(ac, av, &l);
	ft_simplify(&l);
	make_list(&l, &a, &b);
	ft_sort(&l, &a, &b);
	ft_free(&l);
	ft_free_list(&a);
}
