/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:28:02 by jromann           #+#    #+#             */
/*   Updated: 2025/06/27 12:11:32 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_sorted_array(t_stack a, int argc)
{
	t_stack	res;
	int		z;

	z = -1;
	if (!a.stack || !a.size)
		return (a);
	res.size = malloc(sizeof(int));
	res.stack = malloc(sizeof(int) * (argc - 1));
	if (!res.stack || !res.size)
	{
		free(a.stack);
		free(a.size);
		return (res);
	}
	while (++z < *a.size)
		res.stack[z] = a.stack[z];
	ft_bubble_sort(a, res, -1, 0);
	free(res.size);
	free(res.stack);
	return (a);
}
