/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 19:01:41 by jromann           #+#    #+#             */
/*   Updated: 2025/06/29 19:34:25 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate(t_stack a, t_stack b, char *s, int spec)
{
	int	size;
	int	top;

	if (spec == 1)
		ft_printf("%s\n", s);
	if (*a.size > 0 && (s[2] == 'a' || s[2] == 'r'))
	{
		size = *a.size;
		top = a.stack[size - 1];
		while (--size > 0)
			a.stack[size] = a.stack[size - 1];
		a.stack[0] = top;
	}
	if (*b.size > 0 && (s[2] == 'b' || s[2] == 'r'))
	{
		size = *b.size;
		top = b.stack[size - 1];
		while (--size > 0)
			b.stack[size] = b.stack[size - 1];
		b.stack[0] = top;
	}
	return ;
}
