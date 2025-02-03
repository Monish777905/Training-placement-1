from enum import Enum

class Status(Enum):
    SUCCESS = 1
    ERROR = 2

def divide(a, b):
    if b == 0:
        return Status.ERROR, None
    return Status.SUCCESS, a / b

status, result = divide(10, 0)
if status == Status.ERROR:
    print("Error! Division by zero.")
else:
    print(f"Result: {result}")
