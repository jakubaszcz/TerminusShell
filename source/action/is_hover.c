#include "../../includes/my.h"

sfBool buttonIsHover(button_t *button, sfMouseMoveEvent *mouse) {
    sfFloatRect rectangle = sfRectangleShape_getGlobalBounds(button->rectangle);

    if (sfFloatRect_contains(&rectangle, mouse->x, mouse->y)) {
        return sfTrue;
    }
    return sfFalse;
}