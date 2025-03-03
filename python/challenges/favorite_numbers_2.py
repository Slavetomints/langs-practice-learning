favorite_numbers = {
    'john': [390, 356, 3456],
    'jake': [9048, 3456, 456, 4356],
    'paul': [23, 3254, 2345, 3245],
    'finn': [3, 4, 6, 12],
    'jane': [13, 26, 49],
}

for person, numbers in favorite_numbers.items():
    print(f"{person.title()}'s favorite numbers are:")
    for number in numbers:
        print(f'\t{number}')