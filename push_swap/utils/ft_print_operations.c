/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_operations.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 12:19:42 by jromann           #+#    #+#             */
/*   Updated: 2025/06/27 12:33:28 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_operations(t_operations	*ops)
{
	t_operations	*temp;

	temp = ops;
	while (temp != NULL)
	{
		ft_printf("%s\n", temp->content);
		temp = temp->next;
	}
}
