/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_analyze_input.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 07:19:24 by jromann           #+#    #+#             */
/*   Updated: 2025/08/25 08:06:25 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_arg	ft_prepare_string(char **argv)
{
	char	*str;
	int		i;
	t_arg	arg;

	i = 0;
	str = ft_strjoin(argv[0], argv[1]);
	if (!str)
		exit(1);
	arg.v = ft_split(str, ' ');
	free(str);
	if (!arg.v)
		exit(1);
	while (arg.v[i])
		i++;
	arg.c = i;
	arg.spec = 1;
	return (arg);
}

t_arg	ft_analyze_input(int argc, char **argv)
{
	t_arg	arg;

	if (argc > 2)
	{
		arg.c = argc;
		arg.v = argv;
		arg.spec = 0;
	}
	else if (argc == 1)
		exit(1);
	else
		arg = ft_prepare_string(argv);
	return (arg);
}
