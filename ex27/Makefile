# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/09 19:09:09 by alejhern          #+#    #+#              #
#    Updated: 2024/06/10 22:34:06 by alejhern         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Nombre del Programa
NAME = ft_display_file

#Archivos Fuente
SRCS = ft_display_file.c

#Flags de compilacion
FLAGS = -Wall -Werror -Wextra

all:	${NAME}

${NAME}:
	@echo	"(ﾉ◕ヮ◕)ﾉ*:・ﾟ✧ Compilando, espere unos segundos..."
	cc -c ${NAME} ${SRCS} -Iincludes ${FLAGS}
	cc -o ${NAME} ft_display_file.o
	@echo	"(•̀ᴗ•́)و $(NAME) generado!"

clean:
	rm -f ft_display_file.o
	@echo	"¯\_(ツ)_/¯ Objects removidos!"

fclean: clean
	rm -f ${NAME}
	@echo	"(╯°□°）╯︵ ┻━┻ $(NAME) removido!"

re: fclean all

.PHONY: all clean fclean
