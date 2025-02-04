#include <iostream>

#include "player.cpp"
#include "cave.cpp"
//#include "titles.cpp"

using namespace std;

void showTitleCard();

int main() {
  int* playerPositionIntPointer;
  int chosenLocation;

    cout << R"(
 .--..--..--..--..--..--..--..--..--..--..--..--..--..--..--. 
/ .. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \
\ \/\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ \/ /
 \/ /`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'\/ / 
 / /\   .|'''',                                  .|';    / /\ 
/ /\ \  ||                                       ||     / /\ \
\ \/ /  ||       '''|.  \\  // .|''|,    .|''|, '||'    \ \/ /
 \/ /   ||      .|''||   \\//  ||..||    ||  ||  ||      \/ / 
 / /\   `|....' `|..||.   \/   `|...     `|..|' .||.     / /\ 
/ /\ \                                                  / /\ \
\ \/ /                                                  \ \/ /
 \/ /   '||'''|.                                         \/ / 
 / /\    ||   ||                                         / /\ 
/ /\ \   ||   || .|''|, .|''|, '||),,(|,                / /\ \
\ \/ /   ||   || ||  || ||  ||  || || ||                \ \/ /
 \/ /   .||...|' `|..|' `|..|' .||    ||.                \/ / 
 / /\.--..--..--..--..--..--..--..--..--..--..--..--..--./ /\ 
/ /\ \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \.. \/\ \
\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `'\ `' /
 `--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--' 
                  Press enter to start                                            
)";
  cin.get();
  Player player;
  playerPositionIntPointer = &player.playerPositionInt;
  Cave caveOfDoom;
  while (true) {
    caveOfDoom.showMap(playerPositionIntPointer);
    cout << "Where would you like to go?" << endl;
    cin >> chosenLocation;
    player.updatePosition(chosenLocation);
  };
}