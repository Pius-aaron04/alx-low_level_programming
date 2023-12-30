#!/usr/bin/python3
"""
This module contains unction to calculate the perimeter of an Island
"""

def island_perimeter(grid):
    """
    calculates perimeter of island.
    """

    count = 0

    if not grid:
        return

    for row in grid:
        for column in row:
            if column == 1:
                count += 1

    return (count * 2) + 2
