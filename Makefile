GREEN = /bin/echo -e "\x1b[1;3;32m$1\x1b[0m"
CC = gcc -g
CFLAGS = -Wall -Werror -Wextra
SRC =  	srcs/main.c \
	srcs/utils.c \
	srcs/checks.c \
	srcs/ft_sort.c \
	srcs/make_list.c \
	srcs/ft_simplify.c \
        srcs/commands/swap.c \
        srcs/commands/push.c \
	srcs/commands/rotate.c \
        srcs/commands/reverse_rotate.c \

OBJ = $(SRC:.c=.o)
NAME = push_swap
LIB = libft/libft.a

all:		$(NAME)

$(NAME):	$(OBJ)
		make -C ./libft
		$(CC) $(CFLAGS) $(OBJ) $(LIB) -o $@
		$(call GREEN,"Compilation success 😁")

clean:
		make clean -C ./libft
		rm -f $(OBJ)
		$(call GREEN,"The .o cleaned up !")

fclean:		clean
		make fclean -C ./libft
		rm -f $(NAME)
		$(call GREEN,"The rest too !")

re:		fclean all

.SILENT:
.PHONY:		all clean fclean re 
