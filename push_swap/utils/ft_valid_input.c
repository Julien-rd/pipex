/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:55:41 by jromann           #+#    #+#             */
/*   Updated: 2025/06/27 11:29:24 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_valid_input(int num, t_stack *a, int k)
{
	int	i;
	int	count;

	i = -1;
	count = 0;
	if (k == -1)
	{
		a->stack = NULL;
		return (0);
	}
	while (++i < *(a->size) && *(a->size) > 1)
	{
		if (num == a->stack[i])
			count++;
		if (count > 1)
		{
			a->stack = NULL;
			return (0);
		}
	}
	return (1);
}
