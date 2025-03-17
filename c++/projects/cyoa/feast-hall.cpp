#include <cctype>
#include <iostream>

using namespace std;

class FeastHall {
  public:
  
  FeastHall() {
    // Opening lines
    cout << "You enter the feast hall, theres mounds of food everywhere, but something special resides within" << endl;
    cout << endl;

    // majority of the logic for the room is here
    brawl();
  }

  void brawl() {
    string playerInput;
    int foodChoice;
    
    // get the player's choice as to whether to continue or not
    cout << "You see a huge platter of food, do you want to continue to explore? (y/N)" << endl;
    cin >> playerInput;
    if (playerInput == "y" || playerInput == "Y") {
      cout << "You see two different items of food in front of you, a hot steaming beef stew, that's surely to regain your strength, and a pitcher of mead, which will make you surely feel good. Which do you want? \n(0 - Beef Stew, 1 - Pitcher of Mead)" << endl;
      cin >> foodChoice;
      if (foodChoice == 0) {
        cout << "Yummy yummy beef stew" << endl << endl;
        cout << "\nPress enter to continue";
        cin.ignore();
        cin.get();
      } else if (foodChoice == 1) {
        cout << "\e[0;31m You drink... and then drink some more... and then drink some more... and before you know it you've had too much but are oh so sleepy, maybe some shut eye will help? As you close your eyes for the last time, you are filled with simply thoughts of nothing." << endl;
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
};

