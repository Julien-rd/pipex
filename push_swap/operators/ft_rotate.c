/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 19:01:00 by jromann           #+#    #+#             */
/*   Updated: 2025/06/29 19:34:21 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_stack a, t_stack b, char *s, int spec)
{
	int	i;
	int	top;

	if (spec == 1)
		ft_printf("%s\n", s);
	if (s[1] == 'a' || s[1] == 'r')
	{
		top = a.stack[0];
		i = -1;
		while (++i < *a.size - 1)
			a.stack[i] = a.stack[i + 1];
		a.stack[i] = top;
	}
	if (s[1] == 'b' || s[1] == 'r')
	{
		top = b.stack[0];
		i = -1;
		while (++i < *b.size - 1)
			b.stack[i] = b.stack[i + 1];
		b.stack[i] = top;
	}
	return ;
}
