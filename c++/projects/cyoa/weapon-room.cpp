#include <iostream>


using namespace std;

class WeaponRoom {
  private:
  public:
  
  WeaponRoom(string* inventory[3]) {
    cout << "You enter the weapon room, and you see the rows of " << endl;
    cout << "swords, axes, and bows. All for the taking" << endl;
    cout << endl;

    getWeapon(inventory);
  }

  void getWeapon(string* inventory[3]) {
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

      if (weaponInput == "Sword") {
        /* 
        
        
        
        
        
        We left off here
        

        
        
        
        */
      }

    } else if (playerInput == 'n' || playerInput == 'N') {

      cout << "Deciding that your fists are weapons enough, you decide" << endl;
      cout << " to move on without getting any weapons. You head back " << endl;
      cout << "into the mouth of the cave, looking for another room to" << endl;
      cout << " plunder." << endl;
    }
  }
};

