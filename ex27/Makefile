# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/11 18:29:25 by alejhern          #+#    #+#              #
#    Updated: 2024/06/16 19:57:59 by alejhern         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del Programa
NAME = ft_display_file

# Archivos Fuente
SRCS = ft_display_file.c
OBJ = ${SRCS:.c=.o}

# Flags de compilación
FLAGS = -Wall -Werror -Wextra

all: ${NAME}

${NAME}: ${OBJ}
	@echo "(ﾉ◕ヮ◕)ﾉ*:・ﾟ✧ Creando libreria, espere unos segundos..."
	cc ${OBJ} -o ${NAME}
	@echo "(•̀ᴗ•́)و ${NAME} generado!"

%.o: %.c
	@echo "(ﾉ◕ヮ◕)ﾉ*:・ﾟ✧ Compilando programa, espere unos segundos..."
	cc ${FLAGS} -c $< -o $@
	@echo "(•̀ᴗ•́)و $@ generado!"

clean:
	rm -f ${OBJ}
	@echo "¯\_(ツ)_/¯ Objects removidos!"

fclean: clean
	rm -f ${NAME}
	@echo "(╯°□°）╯︵ ┻━┻ ${NAME} removido!"

.PHONY: all clean fclean
