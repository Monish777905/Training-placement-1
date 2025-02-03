class Complex:
    def __init__(self, real, imag):
        self.real = real
        self.imag = imag

    def add(self, other):
        return Complex(self.real + other.real, self.imag + other.imag)

    def __str__(self):
        return f"{self.real} + {self.imag}i"

num1 = Complex(3.5, 2.5)
num2 = Complex(1.5, 1.5)
result = num1.add(num2)
print(f"Result: {result}")
