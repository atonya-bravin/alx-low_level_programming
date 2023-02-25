#!/usr/bin/python3
""" 5-island_perimeter.py """


def island_perimeter(grid):
    """
        island_perimeter: calfulates the perimeter of an island
    """

    perimeter = 0
    for outter_index in range(len(grid)):
        for inner_index in range(len(grid[outter_index])):
            if grid[outter_index][inner_index] == 1 and inner_index > 0:
                if grid[outter_index-1][inner_index] == 0:
                    perimeter = perimeter + 1
                if grid[outter_index][inner_index-1] == 0:
                    perimeter = perimeter + 1
                if grid[outter_index][inner_index+1] == 0:
                    perimeter = perimeter + 1
                if outter_index < len(grid[outter_index]) and
                grid[outter_index+1][inner_index] == 0:
                    perimeter = perimeter + 1

    return perimeter
