#include <stdio.h>

typedef enum {
    RED, YELLOW, GREEN
} TrafficLight;

int main() {
    TrafficLight light = GREEN;

    if (light == GREEN) {
        printf("Go!\n");
    } else if (light == YELLOW) {
        printf("Slow down!\n");
    } else {
        printf("Stop!\n");
    }

    return 0;
}
