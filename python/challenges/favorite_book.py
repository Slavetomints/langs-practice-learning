def favorite_book(title):
    """displays the users favorite book"""
    print(f'Your favorite book is {title.title()}')

favorite_book(title = input("What is your favorite book? "))