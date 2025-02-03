#include <stdio.h>

typedef enum {
    Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
} Day;

int main() {
    Day today = Wednesday;

    printf("Today is: %d\n", today);  // Outputs: 3
    return 0;
}
