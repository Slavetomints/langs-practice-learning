from random import choice, randint

lottery_variables = ['1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'w', 't', 'i', 'c']

number_of_variables = randint(4, 10)

winning_numbers = []

while (number_of_variables >= 1):
    number_of_variables -= 1
    variable = choice(lottery_variables)
    winning_numbers.append(variable)

winning_numbers = ''.join(winning_numbers)

print(winning_numbers)