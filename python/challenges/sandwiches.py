def sandwich_maker(*toppings):
    """Accepts input to make a sandwich"""
    print('This sandwich will contain:')
    for topping in toppings:
        print(f'- {topping}')

sandwich_maker('bread', 'pepperjack cheese', 'pepperoni', 'lettuce')
sandwich_maker('bread', 'cheese', 'pickle', 'bacon')