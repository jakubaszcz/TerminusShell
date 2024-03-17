#include "../../includes/my.h"

void volatile_resize(terminus_t *terminus) {
    terminus->windowSize = sfRenderWindow_getSize(terminus->window);
}