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

    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 0):
                    edges += 1

                if (i > 0 and grid[i - 1][j] == 0):
                    edges += 1

    return size * 4 - edges * 2
