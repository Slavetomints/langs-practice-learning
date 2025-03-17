#include <iostream>
#include <fstream>

using namespace std;

class FinalBoss {
  public:

  FinalBoss(string* inventory) {
    // Opening lines
    cout << "So this is where it ends, you... me... one last fight..." << endl;
    cout << "..." << endl;
    system("sleep 0.2");
    cout << "..." << endl;
    system("sleep 0.2");
    cout << "..." << endl;
    system("sleep 0.2");
    cout << "Lets roll" << endl;
    cout << "\nPress enter to continue";
    cin.ignore();
    cin.get();
    cout << "You have to attack them, go!" << endl;
    fight(inventory);
  }

  void fight(string* inventory) {
    int playerInput;
    cout << "Your inventory is currently: " << endl << "1 - " << *(inventory + 0 ) << endl << "2 - " << *(inventory + 1) << endl << "3 - " << *(inventory + 2) << endl;
    cout << "Please select what you wish to use to attack with (1/2/3)" << endl;
    cin >> playerInput;
    playerInput -= 1;

    if (*(inventory + (playerInput)) == "Holy Hand Grenade") {
      char ch;
        ifstream file("hhg.txt");

        while (file.get(ch)) {
          cout << ch << flush;
          system("sleep 0.1");
        }
      cout << "One" << endl;
      system("sleep 1");
      cout << "Two" << endl;
      system("sleep 1");
      cout << "Five!" << endl;
      system("sleep 2");
      cout << "\nPress enter to continue";
      cin.ignore();
      cin.get();
      system("clear");
      cout << R"(
      

 _____                                                              _____ 
( ___ )------------------------------------------------------------( ___ )
 |   |                                                              |   | 
 |   |  __    __                    __      __              __      |   | 
 |   | /\ \  /\ \                  /\ \  __/\ \  __        /\ \     |   | 
 |   | \ `\`\\/'/ ___   __  __     \ \ \/\ \ \ \/\_\    ___\ \ \    |   | 
 |   |  `\ `\ /' / __`\/\ \/\ \     \ \ \ \ \ \ \/\ \ /' _ `\ \ \   |   | 
 |   |    `\ \ \/\ \L\ \ \ \_\ \     \ \ \_/ \_\ \ \ \/\ \/\ \ \_\  |   | 
 |   |      \ \_\ \____/\ \____/      \ `\___x___/\ \_\ \_\ \_\/\_\ |   | 
 |   |       \/_/\/___/  \/___/        '\/__//__/  \/_/\/_/\/_/\/_/ |   | 
 |___|                                                              |___| 
(_____)------------------------------------------------------------(_____)


      )" << endl;
      exit(0);
    } else {
      system("clear");
      cout << "\n\n\e[0;31m You thought that " << *(inventory + (playerInput)) << " could beat me? HAHAHAHA You fool! Die." << endl;
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