def magic_calculation(a, b):
    result = 0
    for i in range(1, 3):
        try:
            if i > a:
                raise Exception('Too far')
        except:
            pass
        else:
            result = result ** (a / b) + i
            break
    else:
        result = a + b
    return result
