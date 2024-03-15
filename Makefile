SOURCE	=	./source/terminus.c	\
			./source/initialisation.c	\
			./source/free.c	\
			./source/events/event_handling.c	\
			./source/volatile/volatile_handling.c

CONVERTION	=	${SOURCE:.c=.o}

NAME	=	terminus

CSFML	=	-lcsfml-window -lcsfml-graphics -lcsfml-system -lcsfml-audio

all:	${CONVERTION}
		ar rc data/libterminus.a ${CONVERTION}
		rm -f ${CONVERTION}
		gcc main.c -o ${NAME} -L./data -lterminus ${CSFML}