#include "../../includes/my.h"

panel_t *panelHandling(terminus_t *terminus) {
    panel_t *panel = malloc(sizeof(panel_t));
    if (panel == NULL) {
        return NULL;
    }
    panel->buttonPosition = (sfVector2f){100.0f, 100.0f};
    panel->buttonSize = (sfVector2f){1000.f, 100.f};
    panel->rectangle = sfRectangleShape_create();
    panel->info = sfText_create();
    panel->text = sfText_create();
    sfText_setFont(panel->info, terminus->font);
    sfText_setCharacterSize(panel->info, 15);
    sfText_setFillColor(panel->info, sfColor_fromRGB(21,76,121));
    sfText_setPosition(panel->info, (sfVector2f){panel->buttonPosition.x, (panel->buttonPosition.y - 25.0f)});
    sfText_setFont(panel->text, terminus->font);
    sfText_setString(panel->text, NULL);
    sfText_setCharacterSize(panel->text, 30);
    sfText_setFillColor(panel->text, sfWhite);
    sfText_setPosition(panel->text, (sfVector2f){panel->buttonPosition.x, (panel->buttonPosition.y - 0.0f)});
    sfRectangleShape_setFillColor(panel->rectangle, sfColor_fromRGB(21,76,121));
    sfRectangleShape_setPosition(panel->rectangle, panel->buttonPosition);
    sfRectangleShape_setSize(panel->rectangle, panel->buttonSize);
    if (!panel->rectangle) {
        free(panel);
        return NULL;
    }
    return panel;
}
