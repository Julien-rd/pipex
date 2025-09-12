/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three_numbers.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 20:05:01 by jromann           #+#    #+#             */
/*   Updated: 2025/06/29 22:12:19 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three_numbers(t_stack a, t_stack b, int correct_pos, int i)
{
	while (++i < *a.size && correct_pos == -10)
		if (i == a.stack[i])
			correct_pos = i;
	if (a.stack[0] < a.stack[1] && a.stack[1] < a.stack[2])
		return ;
	if (correct_pos == 0)
		return (ft_rotate(a, b, "ra", 1), ft_swap(a, b, "sa", 1),
			ft_reverse_rotate(a, b, "rra", 1));
	else if (correct_pos == 1)
		return (ft_reverse_rotate(a, b, "rra", 1), ft_swap(a, b, "sa", 1),
			ft_rotate(a, b, "ra", 1));
	else if (((a.stack[0] > a.stack[1] && a.stack[0] < a.stack[2])
			|| (a.stack[0] < a.stack[1] && a.stack[0] > a.stack[2]))
		|| correct_pos == 2)
	{
		if ((a.stack[1] < a.stack[0] && a.stack[1] < a.stack[2])
			|| correct_pos == 2)
			return (ft_swap(a, b, "sa", 1));
		else if (a.stack[1] > a.stack[0] && a.stack[1] > a.stack[2])
			return (ft_reverse_rotate(a, b, "rra", 1));
	}
	if (a.stack[1] < a.stack[0] && a.stack[1] < a.stack[2])
		return (ft_rotate(a, b, "ra", 1));
	return (ft_swap(a, b, "sa", 1), ft_reverse_rotate(a, b, "rra", 1));
}
