arr1 = [1, 2, 3, 4]
arr2 = [5, 6, 7, 8]

result = [a * b for a, b in zip(arr1, arr2)]

print("Result of array multiplication:", result)
