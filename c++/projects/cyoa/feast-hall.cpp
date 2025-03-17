#include <cctype>
#include <iostream>

using namespace std;

class FeastHall {
  public:
  
  FeastHall(string* inventory) {
    // Opening lines
    cout << "You enter the weapon room, and you see the rows of " << endl;
    cout << "swords, axes, and bows. All for the taking" << endl;
    cout << endl;

    // majority of the logic for the room is here
    brawl(inventory);
  }

  void brawl(string* inventory) {
    string playerInput;
    int foodChoice;
    
    // get the player's choice as to whether to continue or not
    cout << "You enter the feast hall, and see a huge platter of food, do you want to continute to explore? (y/N)" << endl;
    cin >> playerInput;
    if (playerInput == "y" || playerInput == "Y") {
      cout << "You see two different items of food in front of you, a hot steaming beef stew, that's surely to regain your strength, and a pitcher of mead, which will make you surely feel good. Which do you want? (0 - Beef Stew, 1 - Pitcher of Mead)" << endl;
      cin >> foodChoice;
      if (foodChoice == 0) {
        cout << "Yummy yummy beef stew" << endl;
      } else if (foodChoice == 1) {
        cout << "You drink... and then drink some more... and then drink some more... and before you know it you've had too much but are oh so sleepy, maybe some shut eye will help? As you close youre eyes for the last time, you are filled with simply thoughts of nothing." << endl;
        cout << R"(


        /==============================================\
        ||                                            ||
        ||                                            ||
        ||  __   __              ____   _        _    ||
        ||  \ \ / /___   _   _  |  _ \ (_)  ___ | |   ||
        ||   \ V // _ \ | | | | | | | || | / _ \| |   ||
        ||    | || (_) || |_| | | |_| || ||  __/|_|   ||
        ||    |_| \___/  \__,_| |____/ |_| \___|(_)   ||
        ||                                            ||
        ||                                            ||
        \==============================================/
        
        
        )";
        
        exit(0);
      }
    } else {
      cout << "You leave the feast hall" << endl;
    }

  }
    

  // displays inventory, and replaces whatever is in the specified item slot
  void updateInventory(string* inventory, string item) {
    int replaceInt;
    system("clear");
    cout << "Your inventory is currently: " << endl << "1 - " << *(inventory + 0 ) << endl << "2 - " << *(inventory + 1) << endl << "3 = " << *(inventory + 2) << endl;
    cout << "\nPlease select what you want to replace (1/2/3)";
    cin >> replaceInt;
    *(inventory + replaceInt - 1) = item;
    cout << "\nYour inventory is now: " << endl << "1 - " << *(inventory + 0 ) << endl << "2 - " << *(inventory + 1) << endl << "3 = " << *(inventory + 2) << endl;
    cout << "\nPress enter to continue";
    cin.ignore();
    cin.get();
  }
};

