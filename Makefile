NAME =	push_swap

CC =	gcc
CFLAGS =	-g -Wall -Wextra -Werror -MMD

RM =	rm -rf

SRC =  	main.c			\
		utils.c			\
		init_and_check.c \
		push_utils_push.c \
		push_utils_rotate.c \
		push_utils_swap.c \
		big_sort.c \
		small_sort.c \
		index.c \

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
