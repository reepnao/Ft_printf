# ************************************************************************** */
#                                                                            */
#                                                        :::      ::::::::   */
#   Makefile                                           :+:      :+:    :+:   */
#                                                    +:+ +:+         +:+     */
#   By: rbattal <42kocaeli.com.tr>                 +#+  +:+       +#+        */
#                                                +#+#+#+#+#+   +#+           */
#   Created: 2022/12/20 20:25:08 by rbattal           #+#    #+#             */
#   Updated: 2022/12/20 20:25:10 by rbattal          ###   ########.tr       */
#                                                                            */
# ************************************************************************** */
NAME	:= libft.a

CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror
FILES	:= $(shell find . -type f ! -name "ft_lst*.c" -name "ft_*.c")
OBJ		:= $(FILES:%.c=%.o)
BSRC	:= $(shell find . -type f -name "ft_lst*.c")
B_OBJ	:= $(BSRC:%.c=%.o)

all: $(NAME)
$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)
bonus: $(OBJ) $(B_OBJ)
	ar -rcs $(NAME) $(OBJ) $(B_OBJ)
clean:
	@rm -f *.o
fclean: clean
	@rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re