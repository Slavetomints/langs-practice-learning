famous_dead_people = ['Amy Winehouse', 'Martin Luther King Jr.', 'Winston Churchill', 'David Foster Wallace']

print(f'Hello {famous_dead_people[0]}, I have invited you to dinner, please be there!')
print(f'Hello {famous_dead_people[1]}, I have invited you to dinner, please be there!')
print(f'Hello {famous_dead_people[2]}, I have invited you to dinner, please be there!')
print(f'Hello {famous_dead_people[3]}, I have invited you to dinner, please be there!')

print(f'\n{famous_dead_people[2]} can not make it, because he is dead.')

# removing Winston Churchill and replacing him with Joesph Stalin
del famous_dead_people[2]
famous_dead_people.insert(2, 'Joseph Stalin')

print(f'\nHello {famous_dead_people[0]}, I have invited you to dinner, please be there!')
print(f'Hello {famous_dead_people[1]}, I have invited you to dinner, please be there!')
print(f'Hello {famous_dead_people[2]}, I have invited you to dinner, please be there!')
print(f'Hello {famous_dead_people[3]}, I have invited you to dinner, please be there!')

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