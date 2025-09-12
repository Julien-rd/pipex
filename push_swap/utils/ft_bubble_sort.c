/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 12:05:12 by jromann           #+#    #+#             */
/*   Updated: 2025/06/27 12:18:59 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_bubble_sort(t_stack a, t_stack res, int i, int temp)
{
	int		z;

	while (++i < *a.size - 1)
	{
		z = -1;
		while (++z < *a.size - i - 1)
		{
			if (res.stack[z] > res.stack[z + 1])
			{
				temp = res.stack[z + 1];
				res.stack[z + 1] = res.stack[z];
				res.stack[z] = temp;
			}
		}
	}
	i = -1;
	z = 0;
	while (z < *a.size && ++i > -10)
	{
		if (a.stack[z] == res.stack[i])
		{
			a.stack[++z - 1] = i;
			i = -1;
		}
	}
}
