#include <stdio.h>
#include <math.h>

int is_perfect_square(int num) {
    int root = sqrt(num);
    return root * root == num;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d is %s Perfect Square\n", num, is_perfect_square(num) ? "a" : "not a");
    return 0;
}
