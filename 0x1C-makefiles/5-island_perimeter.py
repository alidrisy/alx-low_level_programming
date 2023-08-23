#!/usr/bin/python3
"""Define the 5-island_perimeter model"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    x = 0
    for li in grid:
        y = 0
        for i in li:
            y += i
        if y > 1:
            x += y + 1
        else:
            x += y

    return x * 2 
