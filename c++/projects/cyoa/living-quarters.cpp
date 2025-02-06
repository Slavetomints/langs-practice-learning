#include <iostream>
#include <random>

using namespace std;

class LivingQuarters {
  public:

  LivingQuarters(string* inventory) {
    int playerInput;

    cout << "You enter the living quarters" << endl;
    cout << "You notice someone sleeping in the bed and you also notice a chest"<< endl;
    cout << "What do you do?" << endl;
    cout << "1 - Leave." << endl;
    cout << "2 - Approach the chest" << endl;
    cin >> playerInput;
    if (playerInput == 1) {
    } else if (playerInput == 2) {
        checkAwakeAttack(inventory);
        cout << "You open the chest and see the contents inside, you can only take one" << endl;
        takeFromTheChest(inventory);
    }
  }

  void takeFromTheChest(string* inventory) {
    int playerInput;
    cout << "1 - Holy Hand Grenade" << endl;
    cout << "2 - Biscuit" << endl;
    cout << "3 - A letter (read the letter)" << endl;
    cin >> playerInput;
    if (playerInput == 1) {
      updateInventory(inventory, "Holy Hand Grenade");
    } else if (playerInput == 2) {
        updateInventory(inventory, "Biscuit");
    } else if (playerInput == 3) {
      system("clear");
      // Base letter from https://brainly.com/question/30786999
        cout << R"(
My love,

I hope this letter finds you well. I wanted to update you on my life as a soldier in this stupid War. The experience has been challenging but also filled with a sense of duty and camaraderie among my fellow soldiers. We are fighting to preserve our values, such as liberty and freedom, and to end the system of slavery.

The war has not only brought military victories and losses but has also caused divisions within families and communities. In the East, the question of taxation continues to be a point of contention among the people, while in the North, tensions between knights and lords have been exacerbated. It is my hope that the South will ultimately triumph and restore the Union.

The War has had profound social, political, and economic impacts on our people. It has led to significant changes in our society, and we are fighting for a better future where freedom and equality prevail.

Take care, tell the kids I say hi, and I will write to you again soon.

Sincerely,

Gartholomew
        )";
        cout << "\n\nPress enter to continue" << endl;
        cin.ignore();
        cin.get();
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

  void checkAwakeAttack(string* inventory) {
    srand(time(0)); 

    int random_num = rand() % 100 + 1; 

    if (random_num > 50) {
      playerAttacked(inventory);
    }
  }

    void playerAttacked(string* inventory) {
    string playerChoice;
    cout << "Suddenly, a guard leaps out from behind the shadows and swings at you!" << endl;
    cout << "What will you do?" << endl;
    cout << "Attack" << endl << "Dodge" << endl << "Run" << endl;
    cin >> playerChoice;
    if (playerChoice == "Attack" || playerChoice == "attack") {

      int playerInput;

      // Display the current inventory so the player can decide what to use to attack
      cout << "Your inventory is currently: " << endl << "1 - " << *(inventory + 0 ) << endl << "2 - " << *(inventory + 1) << endl << "3 = " << *(inventory + 2) << endl;
      cout << "Please select what you wish to use to attack with (1/2/3)" << endl;
      cin >> playerInput;

      // If the user selected a sword, they die
      if (*(inventory + (playerInput - 1)) == "Sword") {
        cout << "You swing your sword in a desperate attempt to block your attackers thrust. The blade collide and" << endl;
        cout << "and sparks fly everywhere. Your blade goes flying but before you notice you feel a sharp pain." << endl;
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

      // If the user selected a bow, they survive
      } else if (*(inventory + (playerInput - 1)) == "Bow") {
          cout << "You get your bow drawn before the sword slices down on you. You let your arrow fly and it strike them right" << endl;
          cout << "in the forehead. They never stood a chance" << endl;


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
      // If they dodge they survive
    } else if (playerChoice == "Dodge" || playerChoice == "dodge") {
      cout << "You dodge the first attack, and in their sleepiness the assailant stumbles over themselves," << endl;
      cout << "allowing you enough time to grab their weapon and kill them" << endl;

      // Running will keep them alive
    } else if (playerChoice == "Run" || playerChoice == "run") {
      cout << "You successfully escape... this time" << endl;
    }
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
};