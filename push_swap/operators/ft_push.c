/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 19:02:16 by jromann           #+#    #+#             */
/*   Updated: 2025/06/29 19:34:53 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_stack a, t_stack b, char *s)
{
	int	i;

	if ((*b.size == 0 && s[1] == 'a') || (*a.size == 0 && s[1] == 'b'))
		return ;
	if (s[1] == 'a')
	{
		i = *a.size + 1;
		while (--i >= 1)
			a.stack[i] = a.stack[i - 1];
		a.stack[0] = b.stack[0];
		(*a.size)++;
		while (++i < *b.size)
			b.stack[i - 1] = b.stack[i];
		(*b.size)--;
		return ;
	}
	i = *b.size + 1;
	while (--i >= 1)
		b.stack[i] = b.stack[i - 1];
	b.stack[0] = a.stack[0];
	(*b.size)++;
	while (++i < *a.size)
		a.stack[i - 1] = a.stack[i];
	(*a.size)--;
}
