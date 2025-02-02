#include <stdio.h>

int count_digits(int num) {
    int count = 0;
    while (num) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Number of digits: %d\n", count_digits(num));
    return 0;
}
