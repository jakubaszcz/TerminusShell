#include "../includes/my.h"

void drawing(terminus_t *terminus) {
    //buttons
    for (int i = 0; i < BUTTONS_SIZE; i++) {
        sfRenderWindow_drawRectangleShape(terminus->window, terminus->button[i].rectangle, NULL);
    }
    //panel
    sfRenderWindow_drawRectangleShape(terminus->window, terminus->panel->rectangle, NULL);
    sfText_setString(terminus->panel->info, getcwd(NULL, 0));
    sfRenderWindow_drawText(terminus->window, terminus->panel->info, NULL);
    sfRenderWindow_drawText(terminus->window, terminus->panel->input, NULL);
    sfRenderWindow_drawText(terminus->window, terminus->panel->input, NULL);
    sfRenderWindow_drawText(terminus->window, terminus->panel->output, NULL);
}