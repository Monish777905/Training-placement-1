def merge_sorted(arr1, arr2):
    return sorted(arr1 + arr2)

def main():
    arr1 = list(map(int, input("Enter first sorted array: ").split()))
    arr2 = list(map(int, input("Enter second sorted array: ").split()))
    print("Merged array:", merge_sorted(arr1, arr2))

if __name__ == "__main__":
    main()
