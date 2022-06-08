digit_table = {
    100000: '\u2188',
    50000: '\u2187',
    10000: '\u2182',
    5000: '\u2181',
    1000: '\u2180',
    900: 'C\u2180',
    500: 'D',
    100: 'C',
    90: 'XC',
    50: 'L',
    40: 'XL',
    10: 'X',
    9: 'IX',
    5: 'V',
    4: 'IV',
    1: 'I',
    1/2: 'S',
    5/12: '\u2059',
    4/12: '\u2237',
    3/12: '\u2234',
    2/12: ':',
    1/12: '\u0087'
}

zero_digit = 'Z'

def cascade(num:int) -> str:
    result = ""
    for val in digit_table:
        while num >= val:
            num -= val
            result += digit_table[val]
    return result


def numeral(num:int) -> str:
    if num == 0:
        return zero_digit
    else:
        return cascade(num)