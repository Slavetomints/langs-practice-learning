sandwich_orders = ['biggie combo', 'pastrami', 'smol sam', 'veggie deluxe', 'pastrami', 'it has a name and im forgetting it', 'pastrami']
finished_sandwiches = []

while 'pastrami' in sandwich_orders:
    sandwich_orders.remove('pastrami')

print(sandwich_orders)