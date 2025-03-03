messages = ['Hello!', 'How are you?', 'Hello World!']

def show_messages(messages):
    """Print out messages"""
    for message in messages:
        print(f'User said "{message}"')

show_messages(messages)