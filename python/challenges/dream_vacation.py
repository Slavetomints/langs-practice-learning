results = {}

active = True

while active:
    name = input("\nWhat is your name? ")
    response = input("\nWhat is your dream vacation? ")

    results[name] = response

    repeat = input("\nWould you like to answer again? yes/no  ")
    if repeat == 'no':
        active = False

print("\n----- Poll Results -----")
for name, response in results.items():
    print(f'{name} would like to go to {response}')


