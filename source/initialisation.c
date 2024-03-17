#include "../includes/my.h"


char *homePath(char *path) {
    int length = strlen(path);
    char *home = malloc(length + 1);
    int h = 0;
    int delim = 1;
    for (int i = 0; path[i] != '/'; i++)
        delim++;
    for (int i = delim; path[i] != '\0'; i++) {
        home[h] = path[i];
        h++;
    }
    home[h] = '\0';
    return home;
}

environment_t *initialisation_environment(char **array) {
    environment_t *environment = malloc(sizeof(environment_t));
    int j = 0;
    for (int i = 0; array[i] != NULL; i++) {
        for (j = 0; array[i][j] != '\0' && array[i][j] == "HOME=/"[j]; j++) {
            continue;
        }
        if ("HOME=/"[j] == '\0')
            environment->homePath = homePath(array[i]);
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
    terminus->font = sfFont_createFromFile("fonts/MadimiOne.ttf");
    terminus->windowSize = sfRenderWindow_getSize(terminus->window);
    terminus->environment = initialisation_environment(environment);
    terminus->buttons = buttonHandling();
    terminus->panel = panelHandling(terminus);
    return terminus;
}