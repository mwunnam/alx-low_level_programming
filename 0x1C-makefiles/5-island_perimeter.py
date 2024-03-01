#!/usr/bin/python3
"""
5-island_parimeter
"""


def island_perimeter(grid):
    """
    Calculate the parimeter of the island described in grid.

    Args:
        grid (list of list of intergers): Represents the grid where 1
        represent 1 and and 0 represent water

    Returns:
        int: The perimeter of the island.
    """

    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                # checking the top
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1

                # checking left side
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1

                # check right side
                if j == len(grid[0]) - 1 or grid[i][j+1] == 0:
                    perimeter += 1

                # check bottom side
                if i == len(gird) - 1 or grid[i + 1][j] == 0:
                    perimeter += 1

    return perimeter
