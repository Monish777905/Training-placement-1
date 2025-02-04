import math

def is_strong(num):
    return sum(math.factorial(int(digit)) for digit in str(num)) == num

def main():
    num = int(input("Enter a number: "))
    print(f"{num} is a Strong Number" if is_strong(num) else f"{num} is not a Strong Number")

if __name__ == "__main__":
    main()
