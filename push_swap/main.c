/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:28:37 by jromann           #+#    #+#             */
/*   Updated: 2025/08/27 17:56:50 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_arg			arg;
	t_stack			a;
	t_stack			b;
	t_operations	*temp;
	t_operations	*ops;

	ops = NULL;
	temp = NULL;
	arg = ft_analyze_input(argc, argv);
	a = ft_create_stack(0, arg.c, arg.v);
	b = ft_create_stack(1, arg.c, arg.v);
	a = ft_sorted_array(a, arg.c);
	ft_free_argv(arg);
	if (!a.stack || !b.stack || !a.size || !b.size)
		ft_free_and_exit(a, b, ops, 1);
	if (ft_correct_order(a))
		ft_free_and_exit(a, b, ops, 0);
	ft_optimized_sort(a, b, &ops);
	ft_enhanced_optimization(&ops, temp);
	ft_print_operations(ops);
	ft_free_and_exit(a, b, ops, 0);
}
