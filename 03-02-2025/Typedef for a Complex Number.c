#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

Complex addComplex(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

int main() {
    Complex num1 = {3.5, 2.5};
    Complex num2 = {1.5, 1.5};
    Complex result = addComplex(num1, num2);
    
    printf("Result: %.2f + %.2fi\n", result.real, result.imag);
    return 0;
}
