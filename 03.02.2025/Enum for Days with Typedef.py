from enum import Enum

class Weekday(Enum):
    SUN = 1
    MON = 2
    TUE = 3
    WED = 4
    THU = 5
    FRI = 6
    SAT = 7

day = Weekday.TUE
print(f"Day number: {day.value}")
