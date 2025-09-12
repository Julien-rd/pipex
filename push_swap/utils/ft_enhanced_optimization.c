/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_enhanced_optimization.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 10:58:44 by jromann           #+#    #+#             */
/*   Updated: 2025/06/27 12:00:37 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_enhanced_optimization(t_operations **ops, t_operations *temp)
{
	t_operations	*current;
	t_operations	*next;

	current = *ops;
	while (current && current->next)
	{
		next = current->next;
		if (ft_strcmp(current->content, next->content))
		{
			if (current->prev)
				current->prev->next = next->next;
			else
				*ops = next->next;
			if (next->next)
				next->next->prev = current->prev;
			temp = next->next;
			if (current->prev)
				temp = current->prev;
			free(current);
			free(next);
			current = temp;
			continue ;
		}
		current = next;
	}
}
