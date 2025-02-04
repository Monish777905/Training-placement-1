#include <stdio.h>

typedef enum {
    ADD = 1, SUBTRACT, MULTIPLY, DIVIDE
} Operation;

int main() {
    Operation op = ADD;
    int a = 10, b = 5;
    
    switch (op) {
        case ADD:
            printf("Addition: %d\n", a + b);
            break;
        case SUBTRACT:
            printf("Subtraction: %d\n", a - b);
            break;
        case MULTIPLY:
            printf("Multiplication: %d\n", a * b);
            break;
        case DIVIDE:
            printf("Division: %d\n", a / b);
            break;
    }

    return 0;
}
