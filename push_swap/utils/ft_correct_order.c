/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_correct_order.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 16:16:13 by jromann           #+#    #+#             */
/*   Updated: 2025/06/27 11:29:12 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_correct_order(t_stack a)
{
	int	i;

	i = -1;
	while (++i < *a.size - 1)
	{
		if (a.stack[i] > a.stack[i + 1])
			return (0);
	}
	return (1);
}
