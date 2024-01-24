#!/usr/bin/python3

def best_score(a_dictionary):
    if not a_dictionary:
        return None
    i = 0
    best_score = ''
    for key, value in a_dictionary.items():
        if value > i:
            i = value
            best_score = key
    return best_score
