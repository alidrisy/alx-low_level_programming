#!/usr/bin/python3
"""Define the 5-island_perimeter model"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    x = 0
    n = 0
    i = 0
    y = 0
    if grid == []:
        return 0
    for li in grid:
        n = li.count(1)
        if n == 1:
            if i == li.index(1) or i == 0:
                x += 1
                i = li.index(1)
            else:
                i = 0
                x += 2
        elif n > 1:
            if n > y:
                y = n
                x += 1
                continue
            x += 2
    return (x * 2) + (y * 2)
