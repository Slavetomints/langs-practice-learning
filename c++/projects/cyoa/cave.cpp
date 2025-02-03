#include <iostream>
#include <string>

using namespace std;

class Cave {
  public:
    string playerPositionString;
    int playerPositionInt;

  Cave() {
    playerPositionInt = 0;
  }

  string getPosition() {
    switch (playerPositionInt)
    {
    case 0:
      playerPositionString = "Outside the Cave";
      break;
    case 1:
      playerPositionString = "Mouth of the Cave";
      break;
    case 2:
      playerPositionString = "Weapon Room";
      break;
    case 3:
      playerPositionString = "Armor Room";
      break;
    case 4:
      playerPositionString = "Kitchen";
      break;
    case 5:
      playerPositionString = "";
   
    default:
      break;
    }
    return playerPositionString;
  }

  int updatePosition(int selectedValue) {

  }

};