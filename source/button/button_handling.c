#include "../../includes/my.h"

void homeButton(button_t *button, terminus_t *terminus) {
    button[0].texture = sfTexture_createFromFile("./assets/icons/home.png", NULL);
    button[0].rectangle = sfRectangleShape_create();
    button[0].buttonPosition = (sfVector2f){0.f, 10.f};
    button[0].buttonSize = (sfVector2f){100.f, 100.f};
    button[0].hover = buttonIsHover;
    button[0].click = buttonIsClick;
    button[0].action = actionButtonHome;
    button[0].buttonState = RELEASED;
    sfRectangleShape_setSize(button[0].rectangle, button[0].buttonSize);
    sfRectangleShape_setPosition(button[0].rectangle, button[0].buttonPosition);
    sfRectangleShape_setTexture(button[0].rectangle, button[0].texture, sfTrue);
}

void exitButton(button_t *button, terminus_t *terminus) {
    button[1].texture = sfTexture_createFromFile("./assets/icons/logout.png", NULL);
    button[1].rectangle = sfRectangleShape_create();
    button[1].buttonPosition = (sfVector2f){0.f, 1000.f};
    button[1].buttonSize = (sfVector2f){100.f, 100.f};
    button[1].hover = buttonIsHover;
    button[1].click = buttonIsClick;
    button[1].action = actionButtonExit;
    button[1].buttonState = RELEASED;
    sfRectangleShape_setSize(button[1].rectangle, button[1].buttonSize);
    sfRectangleShape_setPosition(button[1].rectangle, button[1].buttonPosition);
    sfRectangleShape_setTexture(button[1].rectangle, button[1].texture, sfTrue);
}

void previousButton(button_t *button, terminus_t *terminus) {
    button[2].texture = sfTexture_createFromFile("./assets/icons/previous.png", NULL);
    button[2].rectangle = sfRectangleShape_create();
    button[2].buttonPosition = (sfVector2f){0.f, 125.f};
    button[2].buttonSize = (sfVector2f){100.f, 100.f};
    button[2].hover = buttonIsHover;
    button[2].click = buttonIsClick;
    button[2].action = actionButtonPrevious;
    button[2].buttonState = RELEASED;
    sfRectangleShape_setSize(button[2].rectangle, button[2].buttonSize);
    sfRectangleShape_setPosition(button[2].rectangle, button[2].buttonPosition);
    sfRectangleShape_setTexture(button[2].rectangle, button[2].texture, sfTrue);
}

button_t *buttonHandling(terminus_t *terminus) {
    button_t *button = malloc(sizeof(button_t) * BUTTONS_SIZE);
    homeButton(button, terminus);
    exitButton(button, terminus);
    previousButton(button, terminus);
    return button;
}