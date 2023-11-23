#!/usr/bin/python3
"""
    Island Perimeter
"""


def island_perimeter(grid):
    """
        Returns the perimeter of the island described in grid
    """
    perimeter = 0

    grid_height = len(grid)
    grid_width = len(grid[0]) if grid_height else 0

    for i in range(grid_height):
        for j in range(grid_width):
            if grid[i][j] == 1:
                perimeter += 4

                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 1
                if j < grid_width - 1 and grid[i][j + 1] == 1:
                    perimeter -= 1
                if i < grid_height - 1 and grid[i + 1][j] == 1:
                    perimeter -= 1
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 1

    return perimeter
