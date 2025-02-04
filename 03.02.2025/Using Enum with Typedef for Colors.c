#include <stdio.h>

typedef enum {
    RED = 1, BLUE, GREEN
} Color;

int main() {
    Color color = BLUE;
    printf("Color code: %d\n", color);  // Outputs: 2
    return 0;
}
