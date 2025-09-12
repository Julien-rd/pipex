/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_optimized_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 11:00:47 by jromann           #+#    #+#             */
/*   Updated: 2025/06/29 19:31:53 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_optimized_sort(t_stack a, t_stack b, t_operations **ops)
{
	int	bit_pos;
	int	bit_pos_max;

	if (ft_is_sorted(a))
		return ;
	if (*a.size == 3 || *a.size == 5)
		ft_three_or_five_numbers(a, b, ops);
	bit_pos = -1;
	bit_pos_max = ft_bit_pos_max(*a.size - 1) + 1;
	while (++bit_pos < bit_pos_max)
		ft_radix_sort_bit(a, b, bit_pos, ops);
}
