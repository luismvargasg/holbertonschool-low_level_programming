#!/usr/bin/python3
"""Defining a function that returns the perimeter of a described island"""


def island_perimeter(grid):
    """The island perimeter is described in grid:
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100
    """
    perimeter = 0

    for w in range(len(grid)):
        for h in range(len(grid[w])):
            if grid[w][h] == 1:
                if w == 0 or grid[w - 1][h] == 0:
                    perimeter += 1
                if h == 0 or grid[w][h - 1] == 0:
                    perimeter += 1
                if h - 1 == len(grid) or grid[w][h + 1] == 0:
                    perimeter += 1
                if w - 1 == len(grid[0]) or grid[w + 1][h] == 0:
                    perimeter += 1
    return perimeter
