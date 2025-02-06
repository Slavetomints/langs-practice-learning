#include <iostream>

#include "player.cpp"
#include "cave.cpp"

using namespace std;

void showTitleCard();

int main() {
  system("clear");
  // Set up the pointer that controls what map is shown
  int* playerPositionIntPointer;

  // This is where the player decides to go to in the game
  int chosenLocation;

  // Show the title screen and wait for the player to press enter to move on
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

  // Set up the player and the cave of doom
  Player player;
  playerPositionIntPointer = &player.playerPositionInt;
  Cave caveOfDoom;

  // This is where the game takes place. It is for all intensive purposes 
  // an infinite loop
  while (true) {

    system("clear");
    // shows the map based off of the pointer to the players position
    caveOfDoom.showMap(playerPositionIntPointer);

    // gets the next location from the player
    cout << "Where would you like to go?" << endl;
    cin >> chosenLocation;

    // Checks if the fail bit is raised from bad input.
    if (cin.fail()) {
      // get rid of failure state
      cin.clear(); 

      // discard 'bad' character(s) 
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      continue;
    }
    // update the position with said location
    player.updatePosition(chosenLocation);
  };
}