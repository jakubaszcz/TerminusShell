#include "../includes/my.h"

void loop(terminus_t *terminus) {
    while (sfRenderWindow_isOpen(terminus->window)) {
        eventHandling(terminus);
        sfRenderWindow_clear(terminus->window, sfWhite);
        volatile_handling(terminus);

        // Dessiner le rectangle
        sfRenderWindow_drawRectangleShape(terminus->window, terminus->panel->rectangle, NULL);

        // Dessiner le texte d'information
        sfRenderWindow_drawText(terminus->window, terminus->panel->info, NULL);

        // Dessiner le texte saisi
        sfRenderWindow_drawText(terminus->window, terminus->panel->text, NULL);

        sfRenderWindow_display(terminus->window);
    }
}


void root(char **environment) {
    terminus_t *terminus = initialisation(environment);
    loop(terminus);
    freeAll(terminus);
    return;
}