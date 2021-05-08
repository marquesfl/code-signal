import math

def centuryFromYear(year):
    "Given a year its return the century."
    CENTURY = 100.
    return math.ceil(year / CENTURY)
