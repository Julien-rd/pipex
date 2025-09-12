/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix_sort_bit.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 15:16:03 by jromann           #+#    #+#             */
/*   Updated: 2025/06/29 19:37:32 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_radix_sort_bit(t_stack a, t_stack b, int bit_pos,
		t_operations **new_node)
{
	int	size_a;
	int	i;

	size_a = *a.size;
	i = -1;
	while (++i < size_a)
	{
		if (((a.stack[0] >> bit_pos) & 1) == 0)
		{
			ft_push(a, b, "pb");
			ft_operator_list("pb", new_node, a, b);
		}
		else
		{
			ft_rotate(a, b, "ra", 0);
			ft_operator_list("ra", new_node, a, b);
		}
	}
	while (*b.size > 0)
	{
		ft_push(a, b, "pa");
		ft_operator_list("pa", new_node, a, b);
	}
}
