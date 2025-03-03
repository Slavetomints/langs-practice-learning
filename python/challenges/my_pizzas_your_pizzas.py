pizzas = ['pepperoni', 'sausage', 'cheese']
for pizza in pizzas:
    print(f'I like {pizza} pizza!')
print('\nI really love pizza!')

friend_pizzas = pizzas[:]

pizzas.append('meat')
friend_pizzas.append('tater tot')

print('\nMy favorite pizzas are: ')
for pizza in pizzas:
    print(pizza.title())

print("\nMy friend's favorite pizzas are: ")
for other_pizzas in friend_pizzas:
    print(other_pizzas.title())