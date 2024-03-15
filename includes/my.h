#include "../data/structure.h"

#ifndef MY_H
    #define MY_H

    void root(char **environment);
    terminus_t *initialisation(void);
    void eventHandling(terminus_t *terminus);
    void volatile_handling(terminus_t *terminus);
    void freeAll(terminus_t *terminus_t);

#endif