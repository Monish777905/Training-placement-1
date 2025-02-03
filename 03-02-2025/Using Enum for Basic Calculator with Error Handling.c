#include <stdio.h>

typedef enum {
    SUCCESS, ERROR
} Status;

Status divide(int a, int b, float *result) {
    if (b == 0) return ERROR;
    *result = (float)a / b;
    return SUCCESS;
}

int main() {
    int num1 = 10, num2 = 0;
    float result;

    if (divide(num1, num2, &result) == ERROR) {
        printf("Error! Division by zero.\n");
    } else {
        printf("Result: %.2f\n", result);
    }

    return 0;
}
