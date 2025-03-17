#include <cctype>
#include <iostream>

using namespace std;

class WeaponRoom {
  public:
  
  WeaponRoom(string* inventory) {
    // Opening lines
    cout << "You enter the weapon room, and you see the rows of " << endl;
    cout << "swords, axes, and bows. All for the taking" << endl;
    cout << endl;

    // majority of the logic for the room is here
    getWeapon(inventory);
  }

  void getWeapon(string* inventory) {
    string playerInput;
    
    // if the player wants a weapon we continue, else we stop and go back to the map
    cout << "Would you like to grab a weapon? (y/n)";
    cin >> playerInput;

    if (playerInput == "y" || playerInput == "Y") {
      string weaponInput;

      cout << "You can pick one of the following:" << endl;
      cout << "Sword" << endl;
      cout << "Bow" << endl;
      cout << "Axe" << endl;
      cin >> weaponInput;

      // Updates inventory based on user input
      // If they make a spelling mistake they die :3
      if (weaponInput == "Sword" || weaponInput == "sword") {
          updateInventory(inventory, "Sword");
      } else if (weaponInput == "Axe" || weaponInput == "axe") {
          updateInventory(inventory, "Axe"); 
      } else if (weaponInput == "Bow" || weaponInput == "bow") {
          updateInventory(inventory, "Bow");
      } else {
          cout << "\e[0;31m You go to grab your weapon but you fumble with it." << endl;
          cout << "\e[0;31m You look down to realize that you have given yourself a massive gash across your chest." << endl;
          cout << "\e[0;31m As the life is fading from your eyes you have one final thought." << endl;
          cout << "\e[0;31m 'Man I should've learned to spell.'" << endl;
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

    } else if (playerInput == "n" || playerInput == "N") {

        cout << "Deciding that your fists are weapons enough, you" << endl;
        cout << "move on without getting any weapons. You head back " << endl;
        cout << "into the mouth of the cave, looking for another room to" << endl;
        cout << "plunder." << endl;
    }
  }

  // displays inventory, and replaces whatever is in the specified item slot
  void updateInventory(string* inventory, string item) {
    int replaceInt;
    system("clear");
    cout << "Your inventory is currently: " << endl << "1 - " << *(inventory + 0 ) << endl << "2 - " << *(inventory + 1) << endl << "3 - " << *(inventory + 2) << endl;
    cout << "\nPlease select what you want to replace (1/2/3)";
    cin >> replaceInt;
    *(inventory + replaceInt - 1) = item;
    cout << "\nYour inventory is now: " << endl << "1 - " << *(inventory + 0 ) << endl << "2 - " << *(inventory + 1) << endl << "3 - " << *(inventory + 2) << endl;
    cout << "\nPress enter to continue";
    cin.ignore();
    cin.get();
  }
};

