gender = input('\nWhat is your gender? (male/female/non-binary/other): ')
id = input('Are you cisgender or transgender? ')
age = input('What is your age? ')
other_gender = 'null'
banned = ['attack helicopter', 'attack_helicopter']

if id or gender == banned:
    print('die bisch <3 :3')
    quit()

if id == 'transgender' and gender == 'female':
    print('You are trans-fem! :3')

if id == 'transgender' and gender == 'male':
    print('You are trans-masc! :3')

if id == 'transgender' and gender == 'non-binary':
    print('gonna be honest i dont know what this combo is, but still cool! :3')

if id == 'transgender' and gender == 'other':
    print('You are transgender! :3')

if id == 'cisgender' and gender == 'female':
    print('You are a cisgender woman! :3')

if id == 'cisgender' and gender == 'male':
    print('You are a cisgender man! :3')

if id == 'cisgender' and gender == 'non-binary':
    print('You are a cisgender enby! :3')

if id == 'cisgender' and gender == 'other':
    print('You are cisgender! :3')

# age work
if age.isnumeric():
    age = int(age)

if age >= 18:
    print('You are an adult')
    vote = input('Have you registered to vote yet? (y/n): ')
else:
    print('You are a minor')
print()

# voting work
if vote == 'y':
    print('Good job!')
else:
    print('Go register to vote!!!')