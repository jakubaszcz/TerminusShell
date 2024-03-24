#include "../../includes/my.h"

sfBool buttonIsClick(button_t *button, sfMouseButtonEvent *mouse) {
    sfFloatRect rectangle = sfRectangleShape_getGlobalBounds(button->rectangle);

    if (sfFloatRect_contains(&rectangle, mouse->x, mouse->y)) {
        return sfTrue;
    }
    return sfFalse;
}