class Restaurant:
    """Represents a restaurant"""

    def __init__(self, restaurant_name, cuisine_type):
        """Initialize attributes to represent a restaurant"""
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type
    
    def describe_restaurant(self):
        """Give info about a restaurant"""
        print(f"\nThe restaurant's name is {self.restaurant_name}.")
        print(f"The restaurant serves {self.cuisine_type} food.")

    def open_restaurant(self):
        """Display the restaurant is open"""
        print(f'{self.restaurant_name} is now open')

my_restaurant = Restaurant('Taco Bell', 'Mexican')
your_restaurant = Restaurant("Culver's", 'Midwestern')
another_restaurant = Restaurant('Red Lobster', 'American')

my_restaurant.describe_restaurant()
your_restaurant.describe_restaurant()
another_restaurant.describe_restaurant()
