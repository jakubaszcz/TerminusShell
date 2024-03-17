#include <SFML/Window/Event.h>
#include <SFML/Audio/SoundBuffer.h>
#include <SFML/Audio/Sound.h>
#include <SFML/System/Clock.h>
#include <SFML/Graphics/Export.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/Graphics/Transform.h>
#include <SFML/Graphics/Types.h>
#include <SFML/System/Vector2.h>
#include <SFML/Audio/Music.h>
#include <SFML/Graphics/RectangleShape.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <sys/types.h>
#include <stddef.h>
#include <stddef.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

typedef enum buttonState_e {
    RELEASED,
    ACTIVE,
    INACTIVE,
    HOVERED,
} buttonState_t;

typedef struct environment_s {
    char *homePath;
} environment_t;

struct terminus_s;

typedef struct panel_s {
    sfText *text;
    sfText *info;
    sfRectangleShape *rectangle;
    sfVector2f buttonPosition;
    sfVector2f buttonSize;
    sfBool (*click)(sfRectangleShape *);
    sfBool (*hover)(sfRectangleShape *);
    sfBool (*action)(sfRectangleShape *, struct terminus_s *);
} panel_t;

typedef struct button_s {
    sfRectangleShape *rectangle;
    sfVector2f buttonPosition;
    sfVector2f buttonSize;
    sfBool (*click)(sfRectangleShape *);
    sfBool (*hover)(sfRectangleShape *);
    sfBool (*action)(sfRectangleShape *, struct terminus_s *);
    buttonState_t buttonState;
} button_t;

typedef struct terminus_s {
    char *input;
    sfRenderWindow *window;
    sfEvent event;
    sfVector2u windowSize;
    sfFont *font;
    environment_t *environment;
    button_t *buttons;
    panel_t *panel;
} terminus_t;
