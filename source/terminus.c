#include "../includes/my.h"

void loop(terminus_t *terminus) {
    while (sfRenderWindow_isOpen(terminus->window)) {
        eventHandling(terminus);
        sfRenderWindow_clear(terminus->window, sfWhite);
        volatile_handling(terminus);
        drawing(terminus);
        sfRenderWindow_display(terminus->window);
    }
}


void root(char **environment) {
    terminus_t *terminus = initialisation(environment);
    loop(terminus);
    freeAll(terminus);
    return;
}