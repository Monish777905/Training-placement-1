#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, compound_interest, amount;

    printf("Enter principal, rate of interest, and time in years: ");
    scanf("%f %f %f", &principal, &rate, &time);

    amount = principal * pow((1 + rate / 100), time);
    compound_interest = amount - principal;

    printf("Compound Interest: %.2f\n", compound_interest);

    return 0;
}
