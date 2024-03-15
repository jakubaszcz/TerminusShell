#include "../includes/my.h"

void freeAll(terminus_t *terminus) {
    free(terminus->window);
    free(terminus->font);
    free(terminus);
}