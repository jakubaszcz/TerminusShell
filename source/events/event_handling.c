#include "../../includes/my.h"

void eventHandling(terminus_t *terminus) {
    while(sfRenderWindow_pollEvent(terminus->window, &terminus->event)) {
        //return;
    }
}