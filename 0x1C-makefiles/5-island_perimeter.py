#!/usr/bin/python3
"""Define the 5-island_perimeter model"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    x = 0
    row = len(grid)
    colm = len(grid[0])
    for i in range(row):
        for n in range(colm):
            if grid[i][n] == 1:
                if i == 0 or grid[i - 1][n] == 0:
                    x += 1
                if (i + 1) == row or grid[i + 1][n] == 0:
                    x += 1
                if n == 0 or grid[i][n - 1] == 0:
                    x += 1
                if (n + 1) == colm or grid[i][n + 1] == 0:
                    x += 1

    return x
