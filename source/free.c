#include "../includes/my.h"

void freeAll(terminus_t *terminus) {
    if (terminus != NULL) {
        if (terminus->environment != NULL) {
            if (terminus->environment->homePath != NULL)
                free(terminus->environment->homePath);
            free(terminus->environment);
        }
        if (terminus->panel != NULL) {
            sfText_destroy(terminus->panel->info);
            sfText_destroy(terminus->panel->text);
            sfRectangleShape_destroy(terminus->panel->rectangle);
        }
        for (int i = 0; i < BUTTONS_SIZE; i++) {
            if (&terminus->button[i] != NULL) {
                sfTexture_destroy(terminus->button[i].texture);
                sfRectangleShape_destroy(terminus->button[i].rectangle);
            }
        }
        if (terminus->window != NULL) {
            sfRenderWindow_destroy(terminus->window);
        }
        if (terminus->font != NULL) {
            sfFont_destroy(terminus->font);
        }
        free(terminus->input);
        free(terminus);
    }
}
