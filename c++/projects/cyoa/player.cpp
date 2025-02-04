#include <array>
#include <iostream>
#include <string>

#include "weapon-room.cpp"

using namespace std;

class Player {
  public:
    string name;
    string playerPositionString = "Mouth of the Cave";
    int playerPositionInt;
    string inventory[3] = {"Mom's Cookies", "Some Rope", "Nothing"};
    string* inventoryPointer = inventory;

  Player() {
    cout << "Please enter your name: ";
    cin >> name;
    cout << "Hello " << name << "!" << endl;
    playerPositionInt = 1;

  }

  int updatePosition(int chosenLocationInt) {
    switch (chosenLocationInt)
    {
    case 0: {
      cout << "You can't leave the cave!" << endl;
      cout << "You're supposed to be a brave adventurer!" << endl;
      break;
      }
    case 1: {
      playerPositionString = "Mouth of the Cave";
      playerPositionInt = 1;
      break;
      }
    case 2: {
      playerPositionString = "Weapon Room";
      WeaponRoom weaponRoom(inventoryPointer);
              /* 
        
        
        
        
        
        We left off here
        

        
        
        
        */
      break;
      }
/*    case 3: {
      playerPositionString = "Armor Room";
      playerPositionInt = 3;
      ArmorRoom armorRoom;
      break;
      }
    case 4: {
      playerPositionString = "Kitchen";
      playerPositionInt = 4;
      Kitchen kitchen;
      break;
      }
    case 5: {
      playerPositionString = "Living Quarters";
      playerPositionInt = 5;
      LivingQuarters livingQuarters;
      break;
      }
    case 6: {
      playerPositionString = "Secret Room";
      playerPositionInt = 6;
      SecretRoom secretRoom;
      break;
      }
    case 7: {
      playerPositionString = "Evil Lair";
      playerPositionInt = 7;
      EvilLair evilLair;
      break;
      }
    case 8: {
      playerPositionString = "Fight Arena";
      playerPositionInt = 8;
      FightArena fightArena;
      break;
      }
    case 9: {
     playerPositionString = "Treasure Room!";
     playerPositionInt = 9;
     TreasureRoom treasureRoom;
     break;
     }
*/
    case 88: {
      if (playerPositionInt == 9) {
        playerPositionInt = 7;
      } else if (playerPositionInt == 7) {
        playerPositionInt = 3;
      } else if (playerPositionInt == 3) {
        playerPositionInt = 1;
      }      
    }
    case 99: {
      if (playerPositionInt == 1) {
        playerPositionInt = 3;
      } else if (playerPositionInt == 3) {
        playerPositionInt = 7;
      } else if (playerPositionInt == 7) {
        playerPositionInt = 9;
      }
    }
    default: {
      cout << "Please select a valid location";
      playerPositionInt = 999;
      break;
      }
    }
    return 0;
  }


};  