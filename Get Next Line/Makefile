

NAME	= get_next_line.a

SRCS	= get_next_line.c get_next_line_utils.c

OBJS	= $(SRCS:.c=.o)

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

all		:	$(NAME)
$(NAME)	:	$(OBJS)
		@ar	rc $(NAME) $(OBJS)

clean:
		@rm -rf $(OBJS)

fclean : clean
	@rm -rf $(NAME)

re: fclean all

.PHONY : all fclean clean re