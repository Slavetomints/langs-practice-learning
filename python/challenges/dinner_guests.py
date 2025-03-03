famous_dead_people = ['Amy Winehouse', 'Martin Luther King Jr.', 'Winston Churchill', 'David Foster Wallace']
number = len(famous_dead_people)

print(f'Hello {famous_dead_people[0]}, I have invited you to dinner, please be there!')
print(f'Hello {famous_dead_people[1]}, I have invited you to dinner, please be there!')
print(f'Hello {famous_dead_people[2]}, I have invited you to dinner, please be there!')
print(f'Hello {famous_dead_people[3]}, I have invited you to dinner, please be there!')

number = len(famous_dead_people)
print(f'There will be {number} people attending')

print(f'\n{famous_dead_people[2]} can not make it, because he is dead.')

# removing Winston Churchill and replacing him with Joesph Stalin
del famous_dead_people[2]
famous_dead_people.insert(2, 'Joseph Stalin')

print(f'\nHello {famous_dead_people[0]}, I have invited you to dinner, please be there!')
print(f'Hello {famous_dead_people[1]}, I have invited you to dinner, please be there!')
print(f'Hello {famous_dead_people[2]}, I have invited you to dinner, please be there!')
print(f'Hello {famous_dead_people[3]}, I have invited you to dinner, please be there!')

number = len(famous_dead_people)
print(f'There will be {number} people attending')

print("\nI just found a new table at IKEA! Let's get more friends to come")

# adding new friends
famous_dead_people.insert(0, 'Nelson Mandela')
famous_dead_people.insert(2, 'Alexander Hamilton')
famous_dead_people.append('Harambe')

print(f'\nHello {famous_dead_people[0]}, I have invited you to dinner, please be there!')
print(f'Hello {famous_dead_people[1]}, I have invited you to dinner, please be there!')
print(f'Hello {famous_dead_people[2]}, I have invited you to dinner, please be there!')
print(f'Hello {famous_dead_people[3]}, I have invited you to dinner, please be there!')
print(f'Hello {famous_dead_people[4]}, I have invited you to dinner, please be there!')
print(f'Hello {famous_dead_people[5]}, I have invited you to dinner, please be there!')
print(f'Hello {famous_dead_people[6]}, I have invited you to dinner, please be there!')

number = len(famous_dead_people)
print(f'There will be {number} people attending')

# breaking the bad news
print("\nUnfortunately the table is in pieces and I don't have a hex wrench, we'll need to shrink our guest size :(")

# uninviting the guests
uninvited = famous_dead_people.pop()
print(f"\nI'm sorry {uninvited}, you can no longer come to the dinner, there is not enough space.")
uninvited = famous_dead_people.pop()
print(f"\nI'm sorry {uninvited}, you can no longer come to the dinner, there is not enough space.")
uninvited = famous_dead_people.pop()
print(f"\nI'm sorry {uninvited}, you can no longer come to the dinner, there is not enough space.")
uninvited = famous_dead_people.pop()
print(f"\nI'm sorry {uninvited}, you can no longer come to the dinner, there is not enough space.")
uninvited = famous_dead_people.pop()
print(f"\nI'm sorry {uninvited}, you can no longer come to the dinner, there is not enough space.")

# letting the still invited know
print(f'\n\n\nHello {famous_dead_people[0]}, I have invited you to dinner, please be there!')
print(f'Hello {famous_dead_people[1]}, I have invited you to dinner, please be there!')

number = len(famous_dead_people)
print(f'There will be {number} people attending')