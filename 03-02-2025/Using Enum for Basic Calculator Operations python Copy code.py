from enum import Enum

class Operation(Enum):
    ADD = 1
    SUBTRACT = 2
    MULTIPLY = 3
    DIVIDE = 4

def calculator(op, a, b):
    if op == Operation.ADD:
        return a + b
    elif op == Operation.SUBTRACT:
        return a - b
    elif op == Operation.MULTIPLY:
        return a * b
    elif op == Operation.DIVIDE:
        if b != 0:
            return a / b
        else:
            return "Error! Division by zero."
    
op = Operation.ADD
result = calculator(op, 10, 5)
print(f"Result: {result}")
