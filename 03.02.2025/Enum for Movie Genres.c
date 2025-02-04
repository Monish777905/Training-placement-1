#include <stdio.h>

typedef enum {
    ACTION, COMEDY, DRAMA, HORROR, ROMANCE
} Genre;

int main() {
    Genre movie = ACTION;

    if (movie == ACTION) {
        printf("You chose an action movie!\n");
    }

    return 0;
}
