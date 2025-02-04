#include <stdio.h>
#include <math.h>
int main() {
    int num, temp, sum = 0, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0) {
        temp /= 10;
        digits++;
    }
    temp = num;
    while (temp > 0) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    printf(num == sum ? "Armstrong\n" : "Not Armstrong\n");
    return 0;
}
