#include <iostream>

#include "player.cpp"
#include "cave.cpp"

using namespace std;

void showTitleCard();

int main() {
  showTitleCard();
  Player player;
  Cave caveOfDoom;
  while (true) {
     
  }
}

void showTitleCard() {
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
                  Press any key to start                                            
)";
}