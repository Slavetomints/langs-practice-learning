prompt = '\nWelcome to the movie theater!'
prompt += '\nHow old are you?'
prompt += "\nEnter 'quit' to exit. "

age = ''

active = True

while active:
    age = input(prompt)
    
    if age == 'quit':
        active = False
        
    elif int(age) < 3:
        print('Your ticket is free!')
    
    elif int(age) < 12:
        print('Your ticket is $10')
    
    elif int(age) > 11:
        print('Your ticket is $15')

