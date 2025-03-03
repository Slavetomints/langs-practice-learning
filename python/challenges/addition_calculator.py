print("Give me two numbers and I'll add them")
print("Enter q to quit")

while True:
    number_one = input("\npick a number: ")
    if number_one == "q":
        break
    number_two = input("pick a second number: ")
    if number_two == "q":
        break
    
    try:
        number_one = int(number_one)
        number_two = int(number_two)
        final_number = number_one + number_two
    except ValueError:
        print('please enter a number')
    else:
        print(final_number)