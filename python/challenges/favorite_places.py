favorite_places = {
    'person': ['band room', 'toontown, disneyland'],
    'joe': ['room', 'ocean'],
    'jane': ['tech office', 'home', 'camp'],
    'phil': ['paris, france', 'room', 'california', 'michigan'],
}

for person, places in favorite_places.items():
    print(f'{person.title()}')
    for place in places:
        print(f'\t{place.title()}')