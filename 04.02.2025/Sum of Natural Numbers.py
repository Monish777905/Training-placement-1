def sum_natural_numbers():
    num = int(input("Enter a number: "))
    sum = 0
    for i in range(1, num + 1):
        sum += i
    print(f"Sum of first {num} natural numbers: {sum}")

sum_natural_numbers()
