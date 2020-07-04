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

    for row in range(len(grid)):
        for item in range(len(grid[row])):  
            if grid[row][item] == 1:
                if row == 0 or grid[row - 1][item] == 0:
                    perimeter += 1
                if item == 0 or grid[row][item - 1] == 0:
                    perimeter += 1
                if item - 1 == len(grid) or grid[row][item + 1] == 0:
                    perimeter += 1
                if row + 1 == len(grid) or grid[row + 1][item] == 0:
                    perimeter += 1
    return perimeter
