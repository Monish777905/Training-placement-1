from enum import Enum

class Day(Enum):
    Sunday = 0
    Monday = 1
    Tuesday = 2
    Wednesday = 3
    Thursday = 4
    Friday = 5
    Saturday = 6

today = Day.Wednesday
print(f"Today is: {today.name}")
