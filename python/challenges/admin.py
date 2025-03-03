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

class Admin(Users):
    """Info specifically on admins"""

    def __init__ (self, first_name, last_name, username, password, gender):
        """
        Initializes info from parent class
        Initializes admin info
        """
        super().__init__ (first_name, last_name, username, password, gender)
        self.privileges = [
            'can make posts', 
            'can see other users data', 
            'can add/remove users'
            ]
    
    def show_privileges(self):
        """Display the admins privileges"""
        print(f'{self.username} has the following privileges')
        for privilege in self.privileges:
            print(f'\n-{privilege}')

jane = Admin('jane', 'doe', 'username', '12345678910', 'male')
jane.show_privileges()