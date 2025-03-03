def describe_city(name, country='America'):
    """format city country pairs"""
    print(f'{name} is in {country}')

describe_city('Chicago')
describe_city('New York')
describe_city('London', 'England')