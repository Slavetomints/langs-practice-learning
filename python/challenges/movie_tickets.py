prompt = '\nWelcome to the movie theater!'
prompt += '\nHow old are you?'
prompt += "\nEnter 'quit' to exit. "

age = ''

while age != 'quit':
    age = input(prompt)
    
    if age == 'quit':
        break
    
    elif int(age) < 3:
        print('Your ticket is free!')
    
    elif int(age) < 12:
        print('Your ticket is $10')
    
    elif int(age) > 11:
        print('Your ticket is $15')

