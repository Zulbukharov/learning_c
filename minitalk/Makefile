# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/20 16:35:36 by azulbukh          #+#    #+#              #
#    Updated: 2018/05/20 17:06:15 by azulbukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER = server
CLIENT = client
SRC_SERVER = main_server.c maths.c ft_realloc.c
SRC_CLIENT = main_client.c
OBJ_SERVER = $(SRC_SERVER:.c=.o)
OBJ_CLIENT = $(SRC_CLIENT:.c=.o)
MAKELIB = make -C libft/
LIBPATH = libft/libft.a
EFLAGS = -Wall -Wextra -Werror
.PHONY: all clean fclean re

all: $(SERVER) $(CLIENT)

$(SERVER): $(LIBPATH) $(OBJ_SERVER)
	$(MAKELIB)
	gcc $(EFLAGS) -o $(SERVER) $(OBJ_SERVER) $(LIBPATH)

$(CLIENT): $(LIBPATH) $(OBJ_CLIENT)
	$(MAKELIB)
	gcc $(EFLAGS) -o $(CLIENT) $(OBJ_CLIENT) $(LIBPATH)

$(LIBPATH):
	$(MAKELIB)

%.o:%.c
	gcc $(EFLAGS) -c $< -o $@ -I minitalk.h

clean:
	rm -f $(OBJ_SERVER) $(OBJ_CLIENT)
	make -C libft clean

fclean: clean
	rm -f $(SERVER) $(CLIENT)
	make -C libft fclean

re: fclean $(SERVER) $(CLIENT)
