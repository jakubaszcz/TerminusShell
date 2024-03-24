#include "../data/structure.h"

#ifndef MY_H
    #define MY_H

    //main
    void root(char **environment);
    terminus_t *initialisation(char **environment);
    void drawing(terminus_t *terminus);
    void freeAll(terminus_t *terminus_t);

    //event
    void eventHandling(terminus_t *terminus);
    void eventInput(terminus_t *terminus);
    void eventButton(terminus_t *terminus);

    //volatile
    void volatile_handling(terminus_t *terminus);
    void volatile_resize(terminus_t *terminus);

    //button
    button_t *buttonHandling(terminus_t *terminus);
    panel_t *panelHandling(terminus_t *terminus);

    //library
    int myArrayLength(char **array);

    //action
    sfBool buttonIsHover(button_t *button, sfMouseMoveEvent *mouse);
    sfBool buttonIsClick(button_t *button, sfMouseButtonEvent *mouse);

    //action button
    void actionButtonClick(terminus_t *terminus);


#endif