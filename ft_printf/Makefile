# ************************************************************************** */
#                                                                            */
#                                                        :::      ::::::::   */
#   Makefile                                           :+:      :+:    :+:   */
#                                                    +:+ +:+         +:+     */
#   By: rbattal <42kocaeli.com.tr>                 +#+  +:+       +#+        */
#                                                +#+#+#+#+#+   +#+           */
#   Created: 2022/12/25 14:00:27 by rbattal           #+#    #+#             */
#   Updated: 2022/12/25 14:00:41 by rbattal          ###   ########.tr       */
#                                                                            */
# ************************************************************************** */
NAME = libftprintf.a
FLAG = -Wall -Wextra -Werror
SRC = $(shell find . -name "ft_*.c")

all: $(NAME)

$(NAME):
	@gcc $(FLAG) -c $(SRC)
	@ar rc $(NAME) *.o
	@echo "✅"
clean:
	@/bin/rm -f  *.o *a.out
	@echo " "
fclean: clean
	@/bin/rm -f $(NAME)
	@echo "🗑️"
re: fclean all

.PHONY: all bonus clean fclean re