#include "../../includes/my.h"

#include <stdio.h>

void eventHandling(terminus_t *terminus) {
    while (sfRenderWindow_pollEvent(terminus->window, &terminus->event)) {
        if (terminus->event.type == sfEvtClosed) {
            sfRenderWindow_close(terminus->window);
        }
        eventButton(terminus);
        eventInput(terminus);
    }
}

