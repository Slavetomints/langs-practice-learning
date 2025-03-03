prompt = "\nWhat pizza topping would you like?"
prompt += "\nEnter 'quit' to exit. "

topping = ""
while topping != 'quit':
    topping = input(prompt)
    print(topping)