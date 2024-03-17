#include <stddef.h>

int myArrayLength(char **array) {
    int length = 0;
    for (int i = 0; array[i] != NULL; i++) length++;
    return length;
}