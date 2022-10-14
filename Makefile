SRC		= ft_isalpha.c	ft_isdigit.c	ft_isalnum.c	ft_isascii.c\
		  ft_isprint.c	ft_strlen.c		ft_memset.c		ft_bzero.c	\
		  ft_memcpy.c	ft_memmove.c
NAME	= libft.a
OBJS	= ${SRC:.c=.o}
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

${NAME}	:	${OBJS}
			ar -rcs ${NAME} ${OBJS}
all		:	${NAME}

clean	:
			rm ${OBJS}
fclean	:	clean
			rm ${NAME}
re		:	fclean all
