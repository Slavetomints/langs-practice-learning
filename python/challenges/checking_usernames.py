current_users = ['user1', 'user3', 'user5', 'admin', 'user7']

new_users = ['John', 'user1', 'Jim','James', 'USER7']

for new_user in new_users:
    if new_user.lower() in current_users:
        print('Sorry, that username is taken. Please select a new one.')
    else:
        print(f'Welcome {new_user}')