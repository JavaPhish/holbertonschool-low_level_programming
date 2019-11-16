#!/usr/bin/python3
""" Perimeter thing """


def island_perimeter(grid):
    """ Theres no food here """
    side_count = 0

    for x in range(0, len(grid)):
        for y in range(0, len(grid[x])):
            if grid[x][y] == 1:
                if grid[x + 1][y] == 0:
                    side_count += 1
                if grid[x - 1][y] == 0:
                    side_count += 1
                if grid[x][y + 1] == 0:
                    side_count += 1
                if grid[x][y - 1] == 0:
                    side_count += 1

    return side_count
