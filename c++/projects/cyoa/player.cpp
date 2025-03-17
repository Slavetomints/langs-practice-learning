#include <array>
#include <iostream>
#include <string>

#include "armor-room.cpp"
#include "weapon-room.cpp"
#include "kitchen.cpp"
#include "living-quarters.cpp"
#include "feast-hall.cpp"

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
    getline(cin, name);
    cout << "Hello " << name << "!" << endl;
    playerPositionInt = 1;

  }

  void updatePosition(int chosenLocationInt) {
    system("clear");
    cout << "You chose: " << chosenLocationInt << endl;
    switch (chosenLocationInt) {
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
        break;
      }
      case 4: {
        playerPositionString = "Armor Room";
        playerPositionInt = 3;
        ArmorRoom armorRoom(inventoryPointer);
        break;
      }
      case 5: {
        playerPositionString = "Kitchen";
        playerPositionInt = 4;
        Kitchen kitchen;
        break;
      }
      case 6: {
        playerPositionString = "Living Quarters";
        playerPositionInt = 5;
        LivingQuarters livingQuarters(inventoryPointer);
        break;
      }
      case 7: {
        playerPositionString = "Feast Hall";
        playerPositionInt = 6;
        FeastHall feastHall(inventoryPointer);
      }
  /*  case 8: {
        playerPositionString = "Secret Room";
        playerPositionInt = 6;
        SecretRoom secretRoom;
        break;
      }
      case 10: {
        playerPositionString = "Evil Lair";
        playerPositionInt = 7;
        EvilLair evilLair;
        break;
      }
      case 11: {
        playerPositionString = "Fight Arena";
        playerPositionInt = 8;
        FightArena fightArena;
        break;
      }
      case 12: {
      playerPositionString = "Treasure Room!";
      playerPositionInt = 9;
      TreasureRoom treasureRoom;
      break;
      }
  */
      case 88: {
        if (playerPositionInt == 9) {
          playerPositionInt = 7;
          break;
        } else if (playerPositionInt == 7 || playerPositionInt == 8) {
          playerPositionInt = 3;
          break;
        } else if (playerPositionInt == 3 || playerPositionInt == 4 || playerPositionInt == 5 || playerPositionInt == 6) {
          playerPositionInt = 1;
          break;
        }      
      }
      case 99: {
        if (playerPositionInt == 1 || playerPositionInt == 2) {
          playerPositionInt = 3;
          break;
        } else if (playerPositionInt == 3 || playerPositionInt == 4 || playerPositionInt == 5 || playerPositionInt == 6) {
          playerPositionInt = 7;
          break;
        } else if (playerPositionInt == 7 || playerPositionInt == 8) {
          playerPositionInt = 9;
          break;
        }
      }
      default: {
        cout << "Please select a valid location" << endl;;
        break;
      }
    }
    cout << "You are now in: " << playerPositionString << endl;
  }


};  