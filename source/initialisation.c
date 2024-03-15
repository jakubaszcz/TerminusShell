#include "../includes/my.h"

terminus_t *initialisation(void) {
    terminus_t *terminus = malloc(sizeof(terminus_t));
    sfVideoMode videoMode;
    sfEvent event;
    videoMode.height = 1080;
    videoMode.width = 1920;
    videoMode.bitsPerPixel = 64;
    terminus->window = sfRenderWindow_create(videoMode, "Terminus Shell", sfResize | sfClose, NULL);
    terminus->event = event;
    terminus->font = sfFont_createFromFile("fonts/MadimiOne.ttf");
    terminus->environment = NULL;
    terminus->buttons = NULL;
    terminus->windowSize = (sfVector2u){0, 0};
    return terminus;
}