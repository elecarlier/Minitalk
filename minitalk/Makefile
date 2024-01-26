NAME_CLIENT = client
NAME_SERVER = server
LIBFT = $(LIBFTDIR)/libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
LIBFTDIR = ./libft

SRC_CLIENT = client.c
SRC_SERVER = server.c

OBJ_CLIENT  = $(SRC_CLIENT:.c=.o)
OBJ_SERVER  = $(SRC_SERVER:.c=.o)

all: $(NAME_CLIENT) $(NAME_SERVER)

$(NAME_CLIENT): $(OBJ_CLIENT) $(LIBFT)
	$(CC) $(CFLAGS) $^ -o $@

$(NAME_SERVER): $(OBJ_SERVER) $(LIBFT)
	$(CC) $(CFLAGS) $^ -o $@

$(LIBFT):
	$(MAKE) -C $(LIBFTDIR)

%.o: %.c
	$(CC) $(CFLAGS) -I$(LIBFTDIR) -I . -c $< -o $@

clean:
	rm -f $(OBJ_CLIENT) $(OBJ_SERVER)
	$(MAKE) -C $(LIBFTDIR) clean

fclean: clean
	rm -f  $(NAME_CLIENT) $(NAME_SERVER)
	$(MAKE) -C $(LIBFTDIR) fclean

re: fclean all

.PHONY: all clean fclean re
