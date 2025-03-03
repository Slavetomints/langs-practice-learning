class Users:
    """Have info on a user"""
    def __init__ (self, first_name, last_name, username, password, gender):
        """Initializes attributes to the user account."""
        self.first_name = first_name
        self.last_name = last_name
        self.username = username
        self.password = password
        self.gender = gender
        self.login_attempts = 0

    def describe_user(self):
        """Describe the user"""
        full_name = self.first_name + ' ' + self.last_name
        print(f"{self.username}'s full name is {full_name}. \nTheir password is {self.password}.\nTheir gender is {self.gender}")

    def greet_user(self):
        """Give a personalized greeting to the user"""
        print(f'Hello {self.username}')

    def increment_login_attempts(self):
        """Increment the number of login attempts"""
        self.login_attempts += 1
        return self.login_attempts
    
    def reset_login_attempts(self):
        """Reset the number of login attempts"""
        self.login_attempts = 0
        return self.login_attempts

    def user_status(self):
        """Give a status update on the user"""
        print(f'\nThe current user is {self.username}')
        print(f'{self.username} has logged in {self.login_attempts} time(s)')



user_01 = Users('Jane', 'Doe', 'Username', '1234abcd', 'female')
user_01.increment_login_attempts()
user_01.user_status()
user_01.reset_login_attempts()
user_01.user_status()