# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/09 19:09:09 by alejhern          #+#    #+#              #
#    Updated: 2024/06/10 23:01:37 by alejhern         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Nombre del Programa
NAME = ft_display_file 

#Archivos Fuente
SRCS = ft_display_file.c
OBJ = ${SRCS:.c=.o}

#Flags de compilacion
FLAGS = -Wall -Werror -Wextra

all:	${NAME}

${NAME}: ${OBJ}
	@echo	"(ﾉ◕ヮ◕)ﾉ*:・ﾟ✧ Creando libreria, espere unos segundos..."
	cc -o ${NAME} ${OBJ}
	@echo	"(•̀ᴗ•́)و $(NAME) generado!"
%.o: %.c
	@echo	"(ﾉ◕ヮ◕)ﾉ*:・ﾟ✧ Compilando programa, espere unos segundos..."	
	cc -o ${FLAGS} -o $@ $^ -Iincludes
	@echo	"(•̀ᴗ•́)و $(NAME) generado!"

clean:
	rm -f ${OBJ}
	@echo	"¯\_(ツ)_/¯ Objects removidos!"

fclean: clean
	rm -f ${NAME}
	@echo	"(╯°□°）╯︵ ┻━┻ $(NAME) removido!"

re: fclean all

.PHONY: all clean fclean
