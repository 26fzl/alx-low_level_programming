#!/usr/bin/python3
""" returns the perimeter of the island described in grid"""

def island_perimeter(grid):
    """Return the perimeter of an island.
    """
    height, width = len(grid), len(grid[0])
    edges, size = 0, 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if j > 0 and grid[i][j - 1] == 1:
                    edges += 1
                if i > 0 and grid[i - 1][j] == 1:
                    edges += 1
    return size * 4 - edges * 2
