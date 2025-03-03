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