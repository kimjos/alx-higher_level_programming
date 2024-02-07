#!/usr/bin/python3
# 2-square.py
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
