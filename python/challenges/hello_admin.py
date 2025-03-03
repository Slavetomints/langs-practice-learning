usernames = ['user1', 'user2', 'user3', 'admin', 'user4']

if usernames:
    for username in usernames:
        if username == 'admin':
            print('Hello admin, would you like to see a status report?')
        else:
            print(f'Hi {username}, thank you for logging in!')
else:
    print('We need to find some users!')