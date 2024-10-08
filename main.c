/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorenzogrossi <lorenzogrossi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:12:18 by lorenzogros       #+#    #+#             */
/*   Updated: 2024/08/29 12:27:10 by lorenzogros      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;

	values(ac, av, &a, &b);
	if (array_sorted(a.array))
	{
		frees(&a, &b);
		return (0);
	}
	push_2_in_b(&a, &b);
	while (a.top > 3)
		d_d_m(&a, b_n_t_p(a, b), &b, i_p(b, b_n_t_p(a, b)));
	a_is_not_sorted(&a);
	while (b.top > 0)
		r_d_d_m(&b, r_b_n(b, a), &a, p_i(a, r_b_n(b, a)));
	while (min_number(a) != a.array[a.top -1])
	{
		if (up_or_down(a, min_number(a)) == 1)
			ra (&a);
		else if (up_or_down(a, min_number(a)) < 0)
			rra(&a);
	}
	//print_t_stack(a, 1);
	frees(&a, &b);
	return (0);
}
