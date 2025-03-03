pets = {
    'toto': {
        'movie': 'the wizard of oz', 
        'kind of animal': 'dog', 
    },

    'babe': {
        'movie': 'babe',
        'kind of animal': 'white yorkshire pig',
    },

    'asta': {
        'movie': 'the thin man',
        'kind of animal': 'wire fox terrier',
    },

    "cap'n flint": {
        'movie': 'treasure island',
        'kind of animal': 'parrot',
    },

    'duchess': {
        'movie': 'the aristocats',
        'kind of animal': 'turkish angora'
    }
}

for animal, info in pets.items():
    print(f'{animal.title()}:')

    movie = info['movie']
    kind_of_animal = info['kind of animal']

    print(f'\tMovie: {movie.title()}')
    print(f'\tKind of animal: {kind_of_animal.title()}\n')