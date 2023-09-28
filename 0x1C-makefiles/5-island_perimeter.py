#!/usr/bin/python3
"""returns the perimeter of the island described in grid"""

def island_perimeter(grid):
    """Return the perimeter of an island.
    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    height, width = len(grid), len(grid[0])
    edges = 0, size = 0

    for x in range(height):
        for y in range(width):
            if grid[x][y] == 1:
                size += 1
                if (y > 0 and grid[x][y - 1] == 1):
                    edges += 1
                if (x > 0 and grid[x - 1][y] == 1):
                    edges += 1
    return size * 4 - edges * 2

