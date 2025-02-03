#include <stdio.h>
#include <math.h>

int is_armstrong(int num) {
    int sum = 0, temp = num, digits = log10(num) + 1;
    while (temp > 0) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    return sum == num;
}

int main() {
    int low, high;
    printf("Enter range (low high): ");
    scanf("%d %d", &low, &high);
    printf("Armstrong numbers: ");
    for (int i = low; i <= high; i++)
        if (is_armstrong(i)) printf("%d ", i);
    printf("\n");
    return 0;
}
