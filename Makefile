NAME	=	libft.a
SRC	=	
CC	= 	gcc
RM	=	rm -rf
AR	=	ar ars
CFLAG	= 	-Wall -Wextra -Werror
OBJS	=	 ${SRC:c.o}
${NAME}	: ${OBJS}
	${AR} $@ $<
clean	:
	${RM} ${OBJS}
fclean	: clean
	${RM} ${NAME}
re	: clean
	${NAME}
	
		

