#include "../../../includes/my.h"

void actionButtonClick(terminus_t *terminus) {
    chdir(terminus->environment->homePath);
}