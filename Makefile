SOURCE	=	./source/terminus.c	\
			./source/initialisation.c	\
			./source/free.c	\
			./source/drawing.c	\
			./source/events/event_handling.c	\
			./source/action/is_click.c	\
			./source/action/is_hover.c	\
			./source/action/button/action_button_click.c	\
			./source/events/event_input.c	\
			./source/events/event_button.c	\
			./source/volatile/volatile_handling.c	\
			./source/volatile/volatile_resize.c	\
			./source/button/button_handling.c	\
			./source/button/panel_handling.c	\
			./library/my_array_length.c

CONVERTION	=	${SOURCE:.c=.o}

NAME	=	terminus

CSFML	=	-lcsfml-window -lcsfml-graphics -lcsfml-system -lcsfml-audio

all:	${CONVERTION}
		ar rc data/libterminus.a ${CONVERTION}
		rm -f ${CONVERTION}
		gcc main.c -o ${NAME} -L./data -lterminus ${CSFML} -g