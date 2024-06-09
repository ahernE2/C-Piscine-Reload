# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/09 19:09:09 by alejhern          #+#    #+#              #
#    Updated: 2024/06/09 19:09:18 by alejhern         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Nombre del Programa
NAME = a.out

#Archivos Fuente
SRCS = srcs/*.c

#Archivos objeto generados durante la compilacion
OBJECTS = ${SRC:.c=.o}

#Flags de compilacion
FLAGS = -Wall -Werror -Wextra

all:	${NAME}

${NAME}: ${OBJECTS}
	@echo	"(ﾉ◕ヮ◕)ﾉ*:・ﾟ✧ Compilando, espere unos segundos..."
	cc -o ${NAME} ${SRCS} -Iincludes ${FLAGS}
	@echo	"(•̀ᴗ•́)و $(NAME) generado!"

clean:
	rm -f ${OBJECTS}
	@echo	"¯\_(ツ)_/¯ Objects removidos!"

fclean: clean
	rm -f ${NAME}
	@echo	"(╯°□°）╯︵ ┻━┻ $(NAME) removido!"

re: fclean all

.PHONY: all clean fclean
