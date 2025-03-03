class Restaurant:
    """Represents a restaurant"""

    def __init__(self, restaurant_name, cuisine_type):
        """Initialize attributes to represent a restaurant"""
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type
    
    def describe_restaurant(self):
        """Give info about a restaurant"""
        print(f"The restaurant's name is {self.restaurant_name}.")
        print(f"The restaurant serves {self.cuisine_type} food.")

    def open_restaurant(self):
        """Display the restaurant is open"""
        print(f'{self.restaurant_name} is now open')

my_restaurant = Restaurant('Olive Garden', 'Italian')

my_restaurant.describe_restaurant()
my_restaurant.open_restaurant()