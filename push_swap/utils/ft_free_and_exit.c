/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_and_exit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:31:20 by jromann           #+#    #+#             */
/*   Updated: 2025/09/12 12:11:29 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_and_exit(t_stack a, t_stack b, t_operations *ops, int spec)
{
	t_operations	*temp;

	if (a.stack)
		free(a.stack);
	if	(b.stack)
		free(b.stack);
	if	(a.size)
		free(a.size);
	if	(b.size)
		free(b.size);
	while (ops != NULL)
	{
		temp = ops->next;
		free(ops);
		ops = temp;
	}
	if (spec == 1)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	exit(0);
}
