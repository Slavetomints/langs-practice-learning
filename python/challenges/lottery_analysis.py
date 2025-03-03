from random import choice, randint

lottery_variables = ['1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'w', 't', 'i', 'c']

number_of_variables = randint(4, 10)

winning_numbers = []

while (number_of_variables >= 1):
    number_of_variables -= 1
    variable = choice(lottery_variables)
    winning_numbers.append(variable)

winning_numbers = ''.join(winning_numbers)

brute_numbers = []
brute_tries = []

while(brute_numbers != winning_numbers):
    brute_number_of_variables = randint(4, 10)

    brute_numbers = []

    while (brute_number_of_variables >= 1):
        brute_number_of_variables -= 1
        brute_variable = choice(lottery_variables)
        brute_numbers.append(brute_variable)

    brute_numbers = ''.join(brute_numbers)
    
    
    brute_tries.append(brute_numbers)
    
    print(f'\nAttempt number {len(brute_tries)}:')
    print(f'{brute_numbers} was not the lottery string, trying again...')

print(f'\n...\n...\n...\n...\n...\n...\n...\n...\n...\n...\n...\n...\n...\n...\n...\n...\n...\n...\n...{brute_numbers} was the lottery string! \nIt took {len(brute_tries)} attempts')
