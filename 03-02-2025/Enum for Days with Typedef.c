#include <stdio.h>

typedef enum {
    SUN = 1, MON, TUE, WED, THU, FRI, SAT
} Weekday;

int main() {
    Weekday day = TUE;
    printf("Day number: %d\n", day);  // Outputs: 3
    return 0;
}
