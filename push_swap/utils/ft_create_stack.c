/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:53:28 by jromann           #+#    #+#             */
/*   Updated: 2025/08/27 18:02:41 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ft_create_stack(int c, int argc, char *argv[])
{
	t_stack	result;
	int		i;
	int		k;

	i = 0;
	k = 0;
	result.size = malloc(sizeof(int));
	result.stack = malloc(sizeof(int) * (argc - 1));
	if (!result.stack || !result.size)
		return (result);
	*result.size = 0;
	if (c == 0)
	{
		while (++i < argc)
		{
			*result.size = i;
			if (!ft_atoi(argv[i], 0))
				k = -1;
			else
				result.stack[i - 1] = ft_atoi(argv[i], 1);
			if (!ft_valid_input(result.stack[i - 1], &result, k))
				return (result);
		}
	}
	return (result);
}
