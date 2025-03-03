def make_shirt(size='large', text='I love Python'):
    """displays summary of a t-shirt"""
    print(f'\nThis shirt is a size {size}')
    print(f'\nThis shirt will say {text}')

make_shirt()
make_shirt('medium')
make_shirt('large', 'Python is better than Javascript')