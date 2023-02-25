#!/usr/bin/python3

def island_perimeter(grid):
    perimeter = 0;
    for outter_index in range(len(grid)):
        for inner_index in range(len(grid[outter_index])):
                if grid[outter_index][inner_index] == 1 and inner_index > 0:
                    if grid[outter_index-1][inner_index] == 0:
                        perimeter = perimeter + 1
                    if grid[outter_index][inner_index-1] == 0:
                        perimeter = perimeter + 1
                    if grid[outter_index][inner_index+1] == 0:
                        perimeter = perimeter + 1
                    if grid[outter_index+1][inner_index] == 0:
                        perimeter = perimeter + 1

    return perimeter

                    



