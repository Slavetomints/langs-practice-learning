def city_names(city, country):
    """Format city, country pairs into a string"""
    formatted_pair = f'"{city}, {country}"'
    return formatted_pair.title()

pair = city_names('santiago', 'chile')
print(pair)
pair = city_names('chicago', 'united states of america')
print(pair)
pair = city_names('paris', 'france')
print(pair)