#include <stdio.h>

int main() {
    float temp;
    char unit;

    printf("Enter temperature followed by unit (C for Celsius, F for Fahrenheit): ");
    scanf("%f %c", &temp, &unit);

    if (unit == 'C' || unit == 'c') {
        printf("Temperature in Fahrenheit: %.2f\n", (temp * 9/5) + 32);
    } else if (unit == 'F' || unit == 'f') {
        printf("Temperature in Celsius: %.2f\n", (temp - 32) * 5/9);
    } else {
        printf("Invalid unit!\n");
    }

    return 0;
}
