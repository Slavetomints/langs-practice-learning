number_one = input("pick a number: ")
number_two = input("pick a second number: ")

try:
    number_one = int(number_one)
    number_two = int(number_two)
    final_number = number_one + number_two
except ValueError:
    print('please enter a number')
else:
    print(final_number)