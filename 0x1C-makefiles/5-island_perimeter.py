#!/usr/bin/python3
"""Define the 5-island_perimeter model"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    x = 0
    n = 0
    i = 0
    y = 0
    for li in grid:
        n = li.count(1)
        if n:
            if i == li.index(1) or i == 0:
                x += 1
                i = li.index(1)
        if n > y:
            y = n

    return (x * 2) + (y * 2)
