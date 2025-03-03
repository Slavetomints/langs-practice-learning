favorite_languages = {
    'jen': 'python',
    'sarah': 'c',
    'edward': 'rust',
    'phil': 'python',
}

poll = ['john', 'jack', 'jen', 'phil', 'edward', 'ben', 'sarah', 'abby']

for name in poll:
    if name not in favorite_languages:
        print(f'{name.title()}, you need to take our poll.')
    else:
        print(f'{name.title()}, thank you for taking the poll!')