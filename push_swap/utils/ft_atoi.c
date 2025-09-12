/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:26:32 by jromann           #+#    #+#             */
/*   Updated: 2025/08/27 18:14:41 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	skip_leading_zeros(const char *nptr)
{
	int	i;

	i = 0;
	while (nptr[i] == '0')
	{
		i++;
		if (nptr[i] == '\0')
			return (0);
	}
	return (1);
}

int	ft_atoi(const char *nptr, int s)
{
	int			i;
	int			k;
	long int	result;
	int			sign;

	i = 0;
	result = 0;
	sign = 1;
	k = -1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
		sign = 1 - 2 * (nptr[i++] == '-');
	if ((nptr[i] < '0' || nptr[i] > '9') && skip_leading_zeros(&nptr[i]))
		return (0);
	while (nptr[i] >= '0' && nptr[i] <= '9' && ++k > -10)
		result = result * 10 + (nptr[i++] - '0');
	if (s == 0 && (k > 13 || result * sign != (int)(result * sign)
		|| nptr[i] != 0))
		return (0);
	else if (s == 0)
		return (1);
	return (result * sign);
}
