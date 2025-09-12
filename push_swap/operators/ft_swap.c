/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 19:02:41 by jromann           #+#    #+#             */
/*   Updated: 2025/06/29 19:34:00 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack a, t_stack b, char *s, int spec)
{
	int	temp;

	if (spec == 1)
		ft_printf("%s\n", s);
	if (*a.size > 1 && (s[1] == 'a' || s[1] == 's'))
	{
		temp = a.stack[0];
		a.stack[0] = a.stack[1];
		a.stack[1] = temp;
	}
	if (*b.size > 1 && (s[1] == 'b' || s[1] == 's'))
	{
		temp = b.stack[0];
		b.stack[0] = b.stack[1];
		b.stack[1] = temp;
	}
}
