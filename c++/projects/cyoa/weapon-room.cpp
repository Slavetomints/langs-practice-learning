#include <iostream>

//#include "titles.cpp"

using namespace std;

class WeaponRoom {
  private:
  public:
  
  WeaponRoom(string* inventory) {
    cout << "You enter the weapon room, and you see the rows of " << endl;
    cout << "swords, axes, and bows. All for the taking" << endl;
    cout << endl;

    getWeapon(inventory);
  }

  void getWeapon(string* inventory) {
    char playerInput;
    
    cout << "Would you like to grab a weapon? (y/n)";
    cin >> playerInput;

    if (playerInput == 'y' || playerInput == 'Y') {
      string weaponInput;

      cout << "You can pick one of the following:" << endl;
      cout << "Sword" << endl;
      cout << "Bow" << endl;
      cout << "Axe" << endl;
      cin >> weaponInput;

      if (weaponInput == "Sword" || weaponInput == "sword") {
        updateInventory(inventory, "Sword");
      } else if (weaponInput == "Axe" || weaponInput == "axe") {
        updateInventory(inventory, "Axe"); 
      } else if (weaponInput == "Bow" || weaponInput == "bow") {
        updateInventory(inventory, "Bow");
      } else {
        cout << "You go to grab your weapon but you fumble with it." << endl;
        cout << "You look down to realize that you have given yourself a massive gash across your chest." << endl;
        cout << "As the life is fading from your eyes you have one final thought." << endl;
        cout << "'Man I should've learned to spell.'" << endl;
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

    } else if (playerInput == 'n' || playerInput == 'N') {

      cout << "Deciding that your fists are weapons enough, you decide" << endl;
      cout << " to move on without getting any weapons. You head back " << endl;
      cout << "into the mouth of the cave, looking for another room to" << endl;
      cout << " plunder." << endl;
    }
  }

    int updateInventory(string* inventory, string item) {
    int replaceInt;

    cout << "Your inventory is currently: " << endl << *(inventory + 0 ) << endl << *(inventory + 1) << endl << *(inventory + 2) << endl;
    cout << "Please select what you want to replace (1/2/3)";
    cin >> replaceInt;
    *(inventory + replaceInt - 1) = item;
    cout << "Your inventory is now: " << endl << *(inventory + 0 ) << endl << *(inventory + 1) << endl << *(inventory + 2) << endl;
    return 0;
  }
};

