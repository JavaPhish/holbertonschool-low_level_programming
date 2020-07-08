#!/usr/bin/python3
""" island perimeter meme """


def island_perimeter(grid):
    """ Returns the perimeter of an island """
    perim = 0

    for x in range(1, len(grid) - 1):
        for y in range(1, len(grid[x]) - 1):
            if grid[x][y] == 1:
                if grid[x + 1][y] != 1:
                    perim += 1
                if grid[x - 1][y] != 1:
                    perim += 1
                if grid[x][y + 1] != 1:
                    perim += 1
                if grid[x][y + 1] != 1:
                    perim += 1

    return perim
