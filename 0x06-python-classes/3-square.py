#!/usr/bin/python3
# 3-square.py
"""Define a square."""


class Square:
    """Define a square."""

    def __init__(self, size=0):
        """Initialize a new square.
        Argument:
        size (int): Size of a new square.
        """
        if not isinstance(size, int):
            raise TypeError("size must be an integer")
        elif size < 0:
            raise ValueError("size must be >= 0")
        self.__size = size

    def area(self):
        """Return the area of a square."""
        return(self.__size * self.__size)
