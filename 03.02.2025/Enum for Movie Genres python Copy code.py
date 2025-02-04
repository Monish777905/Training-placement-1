from enum import Enum

class Genre(Enum):
    ACTION = 1
    COMEDY = 2
    DRAMA = 3
    HORROR = 4
    ROMANCE = 5

movie = Genre.ACTION
if movie == Genre.ACTION:
    print("You chose an action movie!")
