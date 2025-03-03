numbers = list(range(1, 1_000_001))
for value in numbers:
    print(value)

print('\nThe first three numbers are: ')
print(numbers[0:3])
# the problem here is that we've only defined the beginning and end and the list doesn't exist as a full list?
print('\nThe middle three numbers are: ')
print(numbers[50:3])
print('\nThe last three numbers are: ')
print(numbers[-3:])