# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/09 19:09:09 by alejhern          #+#    #+#              #
#    Updated: 2024/06/10 20:52:39 by alejhern         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Nombre del Programa
NAME = libft.a

#Archivos Fuente
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJ = srcs/ft_putchar.o srcs/ft_putstr.o srcs/ft_strcmp.o srcs/ft_strlen.o srcs/ft_swap.o

#Flags de compilacion
FLAGS = -Wall -Werror -Wextra

all:	${NAME}

${NAME}: ${OBJ}
	@echo	"(ﾉ◕ヮ◕)ﾉ*:・ﾟ✧ Creando libreria, espere unos segundos..."
	ar -q ${NAME} ${OBJ}
	@echo	"(•̀ᴗ•́)و $(NAME) generado!"
%.o: %.c
	@echo	"(ﾉ◕ヮ◕)ﾉ*:・ﾟ✧ Compilando programa, espere unos segundos..."	
	cc -c ${FLAGS} -o $@ $^ -Iincludes
	@echo	"(•̀ᴗ•́)و $(NAME) generado!"

clean:
	rm -f ${OBJECTS}
	@echo	"¯\_(ツ)_/¯ Objects removidos!"

fclean: clean
	rm -f ${NAME}
	@echo	"(╯°□°）╯︵ ┻━┻ $(NAME) removido!"

re: fclean all

.PHONY: all clean fclean
