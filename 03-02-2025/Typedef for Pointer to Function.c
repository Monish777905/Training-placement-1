#include <stdio.h>

typedef int (*MathOperation)(int, int);

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }

int main() {
    MathOperation op = add;
    printf("Sum: %d\n", op(10, 5));  // Uses add function
    op = subtract;
    printf("Difference: %d\n", op(10, 5));  // Uses subtract function
    return 0;
}
