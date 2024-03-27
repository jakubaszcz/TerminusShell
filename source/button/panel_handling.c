#include "../../includes/my.h"

panel_t *panelHandling(terminus_t *terminus) {
    panel_t *panel = malloc(sizeof(panel_t));
    if (panel == NULL) {
        free(panel);
        return NULL;
    }
    panel->rectangle = sfRectangleShape_create();
    if (!panel->rectangle) {
        free(panel);
        return NULL;
    }
    panel->buttonPosition = (sfVector2f){100.0f, 100.0f};
    panel->buttonSize = (sfVector2f){1000.f, 300.f};
    //Info
    panel->info = sfText_create();
    sfText_setFont(panel->info, terminus->font);
    sfText_setCharacterSize(panel->info, 15);
    sfText_setFillColor(panel->info, sfColor_fromRGB(87, 219, 143));
    sfText_setPosition(panel->info, (sfVector2f){panel->buttonPosition.x, (panel->buttonPosition.y - 25.0f)});
    //Input
    panel->input = sfText_create();
    sfText_setFont(panel->input, terminus->font);
    sfText_setCharacterSize(panel->input, 30);
    sfText_setFillColor(panel->input, sfWhite);
    sfText_setPosition(panel->input, (sfVector2f){panel->buttonPosition.x, (panel->buttonPosition.y - 0.0f)});
    //Output
    panel->output = sfText_create();
    sfText_setFont(panel->output, terminus->font);
    sfText_setCharacterSize(panel->output, 30);
    sfText_setFillColor(panel->output, sfRed);
    sfText_setPosition(panel->output, (sfVector2f){panel->buttonPosition.x, (panel->buttonPosition.y + 100.0f)});
    //Rectangle shape
    sfRectangleShape_setFillColor(panel->rectangle, sfColor_fromRGB(87, 219, 143));
    sfRectangleShape_setPosition(panel->rectangle, panel->buttonPosition);
    sfRectangleShape_setSize(panel->rectangle, panel->buttonSize);
    return panel;
}
