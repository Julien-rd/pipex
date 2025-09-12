/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operator_list.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:56:03 by jromann           #+#    #+#             */
/*   Updated: 2025/06/27 12:57:06 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_operator_list(char *operator, t_operations **top, t_stack a,
		t_stack b)
{
	t_operations	*new_node;
	t_operations	*current_pos;

	new_node = malloc(sizeof(t_operations));
	if (!new_node)
		return (ft_free_and_exit(a, b, *top, 1));
	if (*top == NULL)
	{
		*top = new_node;
		(*top)->content = operator;
		(*top)->prev = NULL;
		(*top)->next = NULL;
		return ;
	}
	current_pos = *top;
	while (current_pos->next != NULL)
		current_pos = current_pos->next;
	current_pos->next = new_node;
	new_node->prev = current_pos;
	new_node->content = operator;
	new_node->next = NULL;
}
