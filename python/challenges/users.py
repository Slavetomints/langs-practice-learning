class Users:
    """Have info on a user"""
    def __init__ (self, first_name, last_name, username, password, gender):
        """Initializes attributes to the user account."""
        self.first_name = first_name
        self.last_name = last_name
        self.username = username
        self.password = password
        self.gender = gender

    def describe_user(self):
        """Describe the user"""
        full_name = self.first_name + ' ' + self.last_name
        print(f"{self.username}'s full name is {full_name}. \nTheir password is {self.password}.\nTheir gender is {self.gender}")

    def greet_user(self):
        """Give a personalized greeting to the user"""
        print(f'Hello {self.username}')


user_01 = Users('John', 'Doe', 'Person23', '1234abcd', 'male')
user_02 = Users('Phillis', 'Green', 'GreenP14', 'asdfo3', 'male')
user_03 = Users('Jane', 'Doe', 'whyami', '123456789', 'female')

user_01.describe_user()
user_01.greet_user()

user_02.describe_user()
user_02.greet_user()

user_03.describe_user()
user_03.greet_user()