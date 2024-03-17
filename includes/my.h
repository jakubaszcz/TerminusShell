#include "../data/structure.h"

#ifndef MY_H
    #define MY_H

    //main
    void root(char **environment);
    terminus_t *initialisation(char **environment);
    void freeAll(terminus_t *terminus_t);

    //event
    void eventHandling(terminus_t *terminus);
    void eventInput(terminus_t *terminus);

    //volatile
    void volatile_handling(terminus_t *terminus);
    void volatile_resize(terminus_t *terminus);

    //button
    button_t *buttonHandling(void);
    panel_t *panelHandling(terminus_t *terminus);

    //library
    int myArrayLength(char **array);


#endif