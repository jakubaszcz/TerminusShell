#include "../../includes/my.h"

void buttonHover(button_t *button, sfEvent event) {
    sfMouseMoveEvent mouse = event.mouseMove;
    if (event.type == sfEvtMouseMoved && button->buttonState != ACTIVE) {
        if (button->hover(button, &mouse)) {
            button->buttonState = HOVERED;
        } else {
            button->buttonState = RELEASED;
        }
    }
}

void buttonClick(button_t *button, sfEvent event, terminus_t *terminus) {
    sfMouseButtonEvent mouse = event.mouseButton;
    if (event.type == sfEvtMouseButtonPressed) {
        if (button->click(button, &mouse)) {
            button->buttonState = ACTIVE;
            if (button->action == NULL)
                return;
            else
                button->action(terminus);
        } else {
            button->buttonState = RELEASED;
        }
    }
}

void eventButton(terminus_t *terminus) {
    for (int i = 0; i < BUTTONS_SIZE; i++) {
        buttonHover(&terminus->button[i], terminus->event);
        buttonClick(&terminus->button[i], terminus->event, terminus);
    }    
}