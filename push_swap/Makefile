NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -g -I. -Iprintf

SRCDIR = .
OPDIR = operators
UTILDIR = utils
PRINTFDIR = printf

SOURCES = $(SRCDIR)/main.c \
          $(OPDIR)/ft_push.c \
          $(OPDIR)/ft_reverse_rotate.c \
          $(OPDIR)/ft_rotate.c \
          $(OPDIR)/ft_swap.c \
          $(UTILDIR)/ft_operator_list.c \
          $(UTILDIR)/ft_bubble_sort.c \
          $(UTILDIR)/ft_atoi.c \
          $(UTILDIR)/ft_free_argv.c \
          $(UTILDIR)/ft_three_or_five_numbers.c \
          $(UTILDIR)/ft_free_and_exit.c \
          $(UTILDIR)/ft_sort_three_numbers.c \
          $(UTILDIR)/ft_enhanced_optimization.c \
          $(UTILDIR)/ft_strjoin.c \
          $(UTILDIR)/ft_optimized_sort.c \
          $(UTILDIR)/ft_analyze_input.c \
          $(UTILDIR)/ft_strcmp.c \
          $(UTILDIR)/ft_split.c \
          $(UTILDIR)/ft_print_operations.c \
          $(UTILDIR)/ft_bit_pos_max.c \
          $(UTILDIR)/ft_sorted_array.c \
          $(UTILDIR)/ft_sort_five_numbers.c \
          $(UTILDIR)/ft_valid_input.c \
          $(UTILDIR)/ft_create_stack.c \
          $(UTILDIR)/ft_correct_order.c \
          $(UTILDIR)/free2d.c \
          $(UTILDIR)/ft_radix_sort_bit.c \
          $(UTILDIR)/ft_is_sorted.c \
          $(PRINTFDIR)/ft_printf.c \
          $(PRINTFDIR)/ft_printf_utils.c \
          $(PRINTFDIR)/ft_strlen.c \
          $(PRINTFDIR)/ft_toupper.c

OBJECTS = $(SOURCES:.c=.o)
DEPS = $(SOURCES:.c=.d)

all: $(NAME)

-include $(DEPS)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -MMD -MP -c $< -o $@

clean:
	rm -f $(OBJECTS) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re test

