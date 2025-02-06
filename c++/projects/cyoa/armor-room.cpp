#include <iostream>

using namespace std;

class ArmorRoom {
  public:

  ArmorRoom(string* inventory) {
    // opening lines to the room
    system("clear");
    cout << "You go into the armor room" << endl;
    cout << "The armor is polished, it glistens in the light form the torches" << endl;
    cout << endl;

    getArmor(inventory);
  }

  void getArmor(string* inventory) {
    // Checks if the user want to get armor
    string playerInput;

    cout << "Would you like to put on some armor? (y/n)" << endl;
    cin >> playerInput;

    if (playerInput == "y" || playerInput == "Y") {
      int weaponInput;

      // rather than mess with getline, we'll just use numbers to figure out the selection
      cout << "You can pick one of the following:" << endl;
      cout << "1 - Heavy Plate" << endl;
      cout << "2 - Light Plate" << endl;
      cout << "3 - Heavy Mail" << endl;
      cout << "4 - Light Mail" << endl;
      cin >> weaponInput;

      cout << "You chose: " << weaponInput << endl;

      // Heavy Mail is an insta-death
      if (weaponInput == 1) {
        system("clear");
        cout << "After struggling to get the armor on, you finally slip the last part over you and go to take a step" << endl;
        cout << "you realize that you cant actually move, it's too heavy." << endl;
        cout << "You spend the rest of your days (not many) calling for help from your self made prison" << endl;
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
        // otherwise update inventory with the user's selection
      } else if (weaponInput == 2) {
          updateInventory(inventory, "Light Plate"); 
      } else if (weaponInput == 3) {
          updateInventory(inventory, "Heavy Mail");
      } else if (weaponInput == 4) {
          updateInventory(inventory, "Light Mail");
        // They die if they make a choice that doesn't work
      } else {
        system("clear");
        cout << "While you are fumbling around deciding what armor you want to wear" << endl;
        cout << "You don't realize the guard step out of the shadows to plunge his sword through your heart" << endl;
        cout << "Blood spills onto the cobble floor as you fall to your knees." << endl;
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

    } else if (playerInput == "n" || playerInput == "N") {

      cout << "You don't need the armor to stay up and at them in combat, so you head back to the" << endl;
      cout << "hall without donning anything." << endl;
    }
    // After getting or not getting armor there is a combat interaction 
    playerAttacked(inventory);
  }

  void updateInventory(string* inventory, string item) {
    int replaceInt;
    system("clear");
    cout << "Your inventory is currently: "  << endl << "1 - " << *(inventory + 0 ) << endl << "2 - " << *(inventory + 1) << endl << "3 = " << *(inventory + 2) << endl;
    cout << "\nPlease select what you want to replace (1/2/3)";
    cin >> replaceInt;
    *(inventory + replaceInt - 1) = item;
    cout << "\nYour inventory is now: " << endl << "1 - " << *(inventory + 0 ) << endl << "2 - " << *(inventory + 1) << endl << "3 = " << *(inventory + 2) << endl;
    cout << "\nPress enter to continue";
    cin.ignore();
    cin.get();
  }

  void playerAttacked(string* inventory) {
    system("clear");
    string playerChoice;
    cout << "Suddenly, a guard leaps out from behind the shadows and swings at you!" << endl;
    cout << "What will you do?" << endl;
    cout << "Attack" << endl << "Dodge" << endl << "Run" << endl;
    cin >> playerChoice;
    if (playerChoice == "Attack" || playerChoice == "attack") {

      int playerInput;

      // Display the current inventory so the player can decide what to use to attack
      cout << "Your inventory is currently: " << endl << *(inventory + 0 ) << endl << *(inventory + 1) << endl << *(inventory + 2) << endl;
      cout << "Please select what you wish to use to attack with (1/2/3)" << endl;
      cin >> playerInput;

      // If the user selected a sword, they survive the encounter
      if (*(inventory + (playerInput - 1)) == "Sword") {
        cout << "You swing your sword in a desperate attempt to block your attackers thrust. The blade collide and" << endl;
        cout << "and sparks fly everywhere. You parry another swing and thrust back, striking them in the shoulder." << endl;
        cout << "You survive, but just barely." << endl;

      // If the user selected a bow, they survive but they loose their bow
      } else if (*(inventory + (playerInput - 1)) == "Bow") {
          cout << "You fail to get your bow drawn before the sword slices through it leaving you with just sticks in your hand" << endl;
          cout << "You jab an arrow into your assailant's eye and scamper out of the room before they regain their composition, using" << endl;
          cout << "another arrow to jam the door lock shut." << endl;

          *(inventory + (playerInput - 1)) = "Nothing";
          cout << "You lost your bow!" << endl;

      // Same as sword, axe survives
      } else if (*(inventory + (playerInput - 1)) == "Axe") {
          cout << "You jam the axe into your attackers chest, and then smash it across their face." << endl;
          cout << "You easily survive this encounter";

      // If they dont have a weapon they die
      } else {
          cout << "With nothing to stop the blade, it is only a matter of time until you are struck and weakened" << endl;
          cout << "A blow to your legs, a slash across your chest, you eventually fall." << endl;
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
      // If they dodge they die
    } else if (playerChoice == "Dodge" || playerChoice == "dodge") {
      cout << "You dodge the first attack, but are struck by the second, seems like you needed to do something other than nothing." << endl;
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
      // Running will keep them alive
    } else if (playerChoice == "Run" || playerChoice == "run") {
      cout << "You successfully escape... this time" << endl;
    } else {
      cout << "Stuck in your indesicon, you are immediately cut open and you fall to the ground" << endl;
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
