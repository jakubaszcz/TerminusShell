#include "../../includes/my.h"

#include <stdlib.h>
#include <string.h>

void eventInput(terminus_t *terminus) {
    size_t max_length = 1000;
    if (terminus->input == NULL) {
        terminus->input = malloc(max_length * sizeof(char *));
        if (terminus->input == NULL) {
            return;
        }
        terminus->input[0] = '\0';
    }
    if (terminus->event.type == sfEvtTextEntered) {
        if (terminus->event.text.unicode < 128) {
            if (terminus->event.text.unicode == '\r') {
                if (terminus->input != NULL)
                    terminus->output = strdup(terminus->input);
                *terminus->input = NULL;
            }
            if (terminus->event.text.unicode == '\b') {
                size_t length = strlen(terminus->input);
                if (length > 0) {
                    terminus->input[length - 1] = '\0';
                }
            } else {
                size_t length = strlen(terminus->input);
                if (length < max_length - 1) {
                    terminus->input[length] = (char)terminus->event.text.unicode;
                    terminus->input[length + 1] = '\0';
                }
            }
            sfText_setString(terminus->panel->input, terminus->input);
            sfText_setString(terminus->panel->output, terminus->output);
        }
    }
}
