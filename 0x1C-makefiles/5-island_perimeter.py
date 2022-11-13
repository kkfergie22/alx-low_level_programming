#!/usr/bin/python3
'''returns the perimeter of the island described in grid'''


def island_perimeter(grid):
    '''island_perimeter'''

    cell_perimeter = 0
    for y in range(len(grid)):
        for x in range(len(grid[y])):
            if grid[y][x] == 1:
                try:
                    if grid[y - 1][x] == 0:
                        cell_perimeter = cell_perimeter + 1
                    if grid[y][x - 1] == 0:
                        cell_perimeter = cell_perimeter + 1
                    if x == 0 or grid[y][x + 1] == 0:
                        cell_perimeter = cell_perimeter + 1
                    if y == 0 or grid[y + 1][x] == 0:
                        cell_perimeter = cell_perimeter + 1
                except IndexError:
                    cell_perimeter = cell_perimeter + 1
                    pass
    return (cell_perimeter)
