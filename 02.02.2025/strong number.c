#include <stdio.h>

int factorial(int n) {
    return (n == 0) ? 1 : n * factorial(n - 1);
}

int is_strong(int num) {
    int sum = 0, temp = num;
    while (temp > 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }
    return sum == num;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d is %s Strong Number\n", num, is_strong(num) ? "a" : "not a");
    return 0;
}
