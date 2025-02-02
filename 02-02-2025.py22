def is_armstrong(num):
    power = len(str(num))
    return num == sum(int(digit) ** power for digit in str(num))

def main():
    low, high = map(int, input("Enter range (low high): ").split())
    print("Armstrong numbers:", [num for num in range(low, high + 1) if is_armstrong(num)])

if __name__ == "__main__":
    main()
