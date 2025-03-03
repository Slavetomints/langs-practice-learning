from random import randint

class Die:
    """A class to represent a die"""

    def __init__(self):
        """Initialize the attributes of a die"""

        self.lowest_value = int(input('What is the lowest value on the die? '))
        self.highest_value = int(input('What is the highest value on the die? '))


    def roll_die(self, rolls):
        """Simulates rolling x d6 die"""

        roll_list = []

        while (rolls >= 1):
            rolls -= 1
            roll = randint(self.lowest_value, self.highest_value)
            roll_list.append(roll)
        print(roll_list)

die = Die()
die.roll_die(6)

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     