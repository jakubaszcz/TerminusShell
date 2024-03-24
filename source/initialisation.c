#include "../includes/my.h"

environment_t *initialisation_environment(char **array) {
    environment_t *environment = malloc(sizeof(environment_t));
    int j = 0;
    for (int i = 0; array[i] != NULL; i++) {
        for (j = 0; array[i][j] != '\0' && array[i][j] == "HOME=/"[j]; j++) {
            continue;
        }
        if ("HOME=/"[j] == '\0')
            environment->homePath = array[i] + 5;
    }
    return environment;
}

terminus_t *initialisation(char **environment) {
    terminus_t *terminus = malloc(sizeof(terminus_t));
    sfVideoMode videoMode;
    sfEvent event;
    videoMode.height = 1080;
    videoMode.width = 1920;
    videoMode.bitsPerPixel = 64;
    terminus->input = NULL;
    terminus->window = sfRenderWindow_create(videoMode, "Terminus Shell", sfResize | sfClose, NULL);
    terminus->event = event;
    terminus->font = sfFont_createFromFile("fonts/space.otf");
    terminus->windowSize = sfRenderWindow_getSize(terminus->window);
    terminus->environment = initialisation_environment(environment);
    terminus->button = buttonHandling(terminus);
    terminus->panel = panelHandling(terminus);
    return terminus;
}