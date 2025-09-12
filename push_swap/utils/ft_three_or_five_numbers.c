/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_three_or_five_numbers.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 19:06:14 by jromann           #+#    #+#             */
/*   Updated: 2025/06/29 22:01:51 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_three_or_five_numbers(t_stack a, t_stack b, t_operations **ops)
{
	int	i;
	int	pos;

	if (*a.size == 5)
	{
		while (*a.size > 3)
		{
			pos = (!(*a.size == 5));
			i = -1;
			while (a.stack[++i] != pos)
				;
			if (i < 3 - pos)
				while (a.stack[0] != pos)
					ft_rotate(a, b, "ra", 1);
			else
				while (a.stack[0] != pos)
					ft_reverse_rotate(a, b, "rra", 1);
			ft_push(a, b, "pb");
			ft_printf("pb\n");
		}
		ft_sort_five_numbers(a, b, -1);
	}
	else
		ft_sort_three_numbers(a, b, -10, -1);
	ft_free_and_exit(a, b, *ops, 0);
}
