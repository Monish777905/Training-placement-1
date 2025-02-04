from enum import Enum

class TrafficLight(Enum):
    RED = 1
    YELLOW = 2
    GREEN = 3

light = TrafficLight.GREEN
if light == TrafficLight.GREEN:
    print("Go!")
elif light == TrafficLight.YELLOW:
    print("Slow down!")
else:
    print("Stop!")
