cities = {
    'chicago': {
        'country': 'united states of america',
        'population': '2,746,388',
        'fun_fact': 'It is known as the windy city not for its winds, but the amount of reporters in the 1920s.', 
    },

    'london': {
        'country': 'england',
        'population': '8,799,728',
        'fun_fact': 'London is technically a forest, according to the UN.', 
    },

    'tokyo': {
        'country': 'japan',
        'population': '14,094,034',
        'fun_fact': 'Tokyo has the worlds busiest metro system.', 
    },
}

for city, info in cities.items():
    print(f'Facts about {city.title()}:')

    country = info['country']
    population = info['population']
    fun_fact = info['fun_fact']

    print(f'\t{country.title()}')
    print(f'\t{population.title()}')
    print(f'\t{fun_fact}\n')