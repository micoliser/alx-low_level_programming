#!/usr/bin/python3
"""
    This module contains a function that finds the perimeter
    of the island described in grid
"""


def island_perimeter(grid):
    """
        Finds the perimeter of an island in a grid
        ** grid is a list of integer
        ** 0 represents a water zone
        ** 1 represents a land zone
        ** One cell is a square with side length 1
        ** cells are connected horizontally/vertically (not diagonally
        ** gridth is rectangular, width and height doesnt exceed 100
    """

    perimeter = 0
    for i in range(len(grid)):

        if (i == 0 or i == len(grid) - 1) and 1 in grid[i]:
            return 0

        if 1 in grid[i]:
            perimeter += 2

        for j in range(len(grid[i])):
            if (j == 0 or j == len(grid[i]) - 1) and grid[i][j] == 1:
                return 0

            try:
                if grid[i][j] == 1 and grid[i - 1][j] == 0:
                    perimeter += 1

                if grid[i][j] == 1 and grid[i + 1][j] == 0:
                    perimeter += 1
            except IndexError:
                pass

    return perimeter
