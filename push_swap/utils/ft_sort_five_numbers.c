/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five_numbers.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 20:30:27 by jromann           #+#    #+#             */
/*   Updated: 2025/06/29 22:14:06 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_five_numbers(t_stack a, t_stack b, int correct_pos)
{
	int	i;

	i = -1;
	correct_pos = -1;
	while (++i < *a.size)
	{
		if (i == 0 && a.stack[i] < a.stack[1] && a.stack[i] < a.stack[2])
			correct_pos = 0;
		else if (i == 1 && ((a.stack[i] > a.stack[0] && a.stack[i] < a.stack[2])
				|| (a.stack[i] < a.stack[0] && a.stack[i] > a.stack[2])))
			correct_pos = 1;
		else if (i == 2 && a.stack[i] > a.stack[0] && a.stack[i] > a.stack[1])
			correct_pos = 2;
	}
	ft_sort_three_numbers(a, b, correct_pos, -1);
	ft_push(a, b, "pa");
	ft_push(a, b, "pa");
	ft_printf("pa\npa\n");
}
