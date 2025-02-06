#include <iostream>

using namespace std;

class Kitchen {
  public:

  Kitchen() {
    char playerInput;
    cout << "You enter the kitchen" << endl;
    cout << "You see some food one the counter, do you want to eat it? (y/n)" << endl;
    cin >> playerInput;

    if (playerInput == 'y' || playerInput == 'Y') {
      cout << "You eat the whole meal!" << endl;
      cout << "However, it was poisoned" << endl;
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
  }
};