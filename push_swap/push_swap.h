/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 19:03:27 by jromann           #+#    #+#             */
/*   Updated: 2025/09/12 12:05:04 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct s_arg
{
	int					c;
	int					spec;
	char				**v;
}						t_arg;

typedef struct s_stack
{
	int					*size;
	int					*stack;
}						t_stack;

typedef struct s_operations
{
	char				*content;
	struct s_operations	*next;
	struct s_operations	*prev;
}						t_operations;

void					ft_reverse_rotate(t_stack a, t_stack b, char *s,
							int spec);
void					ft_push(t_stack a, t_stack b, char *s);
void					ft_swap(t_stack a, t_stack b, char *s, int spec);
char					**ft_split(char const *s, char c);
void					ft_rotate(t_stack a, t_stack b, char *s, int spec);
void					ft_three_or_five_numbers(t_stack a, t_stack b,
							t_operations **ops);
int						ft_bit_pos_max(int num_max);
void					ft_sort_five_numbers(t_stack a, t_stack b,
							int correct_pos);
void					ft_radix_sort_bit(t_stack a, t_stack b, int bit_pos,
							t_operations **new_node);
void					ft_sort_three_numbers(t_stack a, t_stack b,
							int correct_pos, int i);
int						ft_atoi(const char *nptr, int s);
int						ft_correct_order(t_stack a);
void					ft_enhanced_optimization(t_operations **ops,
							t_operations *temp);
void					ft_optimized_sort(t_stack a, t_stack b,
							t_operations **ops);
int						ft_is_sorted(t_stack a);
void					ft_bubble_sort(t_stack a, t_stack res, int i, int temp);
void					ft_print_operations(t_operations *ops);
void					ft_operator_list(char *operator, t_operations ** top,
							t_stack a, t_stack b);
void					ft_free_argv(t_arg arg);
char					*ft_strjoin(char const *s1, char const *s2);
void					ft_free_and_exit(t_stack a, t_stack b,
							t_operations *ops, int spec);
int						ft_valid_input(int num, t_stack *a, int k);
int						ft_strcmp(char *str1, char *str2);
t_stack					ft_create_stack(int c, int argc, char *argv[]);
t_stack					ft_sorted_array(t_stack a, int argc);
t_arg					ft_analyze_input(int argc, char **argv);
void					free2d(char **str);

#endif