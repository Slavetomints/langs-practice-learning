sandwich_orders = ['biggie combo', 'smol sam', 'veggie deluxe', 'it has a name and im forgetting it']
finished_sandwiches = []

while sandwich_orders:
    sandwich = sandwich_orders.pop()
    print(f'I made your {sandwich} sandwich!')
    finished_sandwiches.append(sandwich)

print(finished_sandwiches)