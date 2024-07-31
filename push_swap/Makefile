# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fitrandr <fitrandr@student.42antananari    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/14 11:25:32 by fitrandr          #+#    #+#              #
#    Updated: 2024/06/02 10:55:45 by fitrandr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME =	push_swap
NAME_BONUS = checker
CC =	gcc
CFLAGS =	-Wall -Wextra -Werror -g
SRCS = \
	 error.c ft_atol.c ft_isdigit.c ft_split.c list_utils.c lst_push.c \
	 lst_reverse_rotate.c lst_rotate.c lst_swap.c push_swap.c ft_substr.c \
	 init_stack.c sort_and_get_median.c longest_increasing_subsequence.c \
	 is_sorted.c sort_utils.c little_sort.c min_in_top.c \
	 sort_stack.c large_sort.c push_b_to_a.c ft_utils.c 
SRCS_BONUS = \
			checker_bonus.c error_bonus.c ft_atol_bonus.c ft_isdigit_bonus.c \
			ft_split_bonus.c ft_strcmp_bonus.c ft_substr_bonus.c get_next_line_bonus.c \
			init_stack_bonus.c is_sorted_bonus.c list_utils_bonus.c lst_push_bonus.c \
			lst_reverse_rotate_bonus.c lst_rotate_bonus.c lst_swap_bonus.c sort_stack_bonus.c
	 
INCLUDE = push_swap.h
INCLUDE_BONUS = checker_bonus.h
OBJS = 	${SRCS:.c=.o}
OBJS_BONUS = 	${SRCS_BONUS:.c=.o}
RM =		rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -I $(INCLUDE) -o $(NAME) $(OBJS)

$(NAME_BONUS): $(OBJS_BONUS)
	$(CC) $(CFLAGS) -I $(INCLUDE_BONUS) -o $(NAME_BONUS) $(OBJS_BONUS)

clean:
	${RM} ${OBJS} ${OBJS_BONUS}

fclean: clean
	${RM} ${NAME} ${NAME_BONUS}

re: fclean all

bonus:	$(NAME_BONUS)

.PHONY: all clean fclean re bonus
