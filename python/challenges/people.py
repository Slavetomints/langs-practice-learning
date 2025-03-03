people = {
    'joe': {
        'first_name': 'joe', 
        'last_name': 'doe', 
        'age': 15, 
        'city': 'Chicago'
    },

    'jane': {
        'first_name': 'jane',
        'last_name': 'doe',
        'age': 88,
        'city': 'newcastle'
    },

    'becky': {
        'first_name': 'becky',
        'last_name': 'white',
        'age': 66,
        'city': 'place'
    },
}

for person, info in people.items():
    print(f'{person.title()}:')

    full_name = f"{info['first_name']} {info['last_name']}"
    age = info['age']
    city = info['city']

    print(f'\tFull name: {full_name.title()}')
    print(f'\tAge: {age}')
    print(f'\tCity: {city.title()}')