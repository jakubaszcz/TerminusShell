#include "../../../includes/my.h"

void actionButtonHome(terminus_t *terminus) {
    terminus->environment->previousPath = getcwd(NULL, 0);
    chdir(terminus->environment->homePath);
    terminus->environment->currentPath = getcwd(NULL, 0);
}