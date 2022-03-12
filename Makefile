NAME =	push_swap

CC =	gcc
#CFLAGS =	-g -Wall -Wextra -Werror -MMD
CFLAGS =	-fsanitize=address

RM =	rm -rf

SRC =   push_swap.c		\
		main.c			\
		utils.c			\
		init_and_check.c \

INC = 	-I push_swap.h		\
		-I libft/libft.h 	\

OBJS =	$(SRC:.c=.o)
DEP =	$(SRC:.c=.d)

LD_FLAGS =	-L libft

.PHONY :	all clean re fclean

.c.o :		
		${CC} ${CFLAGS} ${INC} -c $< -o ${<:.c=.o}


$(NAME):	$(OBJS)
			make bonus  -C ./libft/
			${CC} ${CFLAGS} ${LD_FLAGS} ${OBJS} ./libft/libft.a -o ${NAME}

all: 		$(NAME)

clean:
			$(RM) $(OBJS) $(DEP)
			make clean -C libft/

fclean: 	clean
			$(RM) $(NAME)
			make fclean -C libft/

re: 		fclean all

-include $(DEP)