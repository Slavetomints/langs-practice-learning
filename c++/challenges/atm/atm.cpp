#include <iostream>
#include <limits>

using namespace std;

int showTitle() {
  // This function just simply outputs the title of the program to the terminal,
  // as well as the amounts you can transfer and the escape clause.
  cout << R"(@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@)" << endl;
  cout << R"(@   _   _____                              _     _            @)" << endl;
  cout << R"(@  /_\ /__   \/\/\        /\/\   __ _  ___| |__ (_)_ __   ___ @)" << endl;
  cout << R"(@ //_\\  / /\/    \      /    \ / _` |/ __| '_ \| | '_ \ / _ \@)" << endl;
  cout << R"(@/  _  \/ / / /\/\ \    / /\/\ \ (_| | (__| | | | | | | |  __/@)" << endl;
  cout << R"(@\_/ \_/\/  \/    \/    \/    \/\__,_|\___|_| |_|_|_| |_|\___|@)" << endl;
  cout << R"(@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@)" << endl;
  cout <<  "     Please select an acceptable amount from the following       " << endl;
  cout <<  "     $40           $80           $200             $400           " << endl;
  cout <<  "                 Enter 0 to leave the application                " << endl;
  cout << endl;
  return 0;
}

int getTransferAmount() {
  // this functions gets an amount from the user and passes it back.
  int amount = 0;
  cin >> amount;
  return amount;
}

bool validateTransferAmount(int* atmMoney, int transferAmount) {
  // It checks if the amount is 0, as if it is then we escape the program.
  if (transferAmount == 0) {
    cout << "Exiting application" << endl;
    exit(0);

    // Next we check if the amount is something other than the amounts that
    // we are allowed to transfer
  } else if (transferAmount != 40 && transferAmount != 80 && transferAmount != 200 && transferAmount != 400) {
    cout << "Please select a valid amount" << endl;
    cin.clear();
    return false;

    // Afterwards it makes sure that the atm has enough money to complete
    // The desired transfer.
  } else if (*atmMoney - transferAmount < 0) {
    cout << "The ATM doesn't Have enough money for that transaction." << endl;
    cin.clear();
    return false;

    // finally, if none of the previous checks fail, the transaction goes 
    // through and the function passes back true.
  } else {
    cout << "Transaction Approved" << endl;
    return true;
  }
}

int transferMoney(int* atmMoney, int* userMoney) {
  // This function contains the main logic behind the money transfers atmMoney 
  // and userMoney are pointers back to their original values to simplify the
  // process of updating them.
    
  showTitle();

  // Creates the variable and sets it to an amount specified by the user
  int transferAmount;
  
  // Loop until a valid amount is entered
  while (true) {
    transferAmount = getTransferAmount();
    if (cin.fail()) {
      cout << "Please enter an integer" << endl;

      // get rid of failure state
      cin.clear(); 

      // discard 'bad' character(s) 
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      transferMoney(atmMoney, userMoney);
    }
    if (validateTransferAmount(atmMoney, transferAmount)) {
      break; // Exit the loop if the amount is valid
    }
  }

  // Perform the transfer
  cout << "Transferring $" << transferAmount << " to User Account" << endl;
  *atmMoney = *atmMoney - transferAmount;
  *userMoney = *userMoney + transferAmount;
  cout << "User Account Amount: $" << *userMoney << endl;
  cout << "The ATM has $" << *atmMoney << " left to transfer out." << endl;

  return 0;
}

int main() {
  // This is the main function and the entry point for the program.

  // Setting up the variable and the pointers used to update them throughout the
  // program's life, as well as the bool used to control the looping
  int atmMoney = 500;
  int* atmMoneyPointer = &atmMoney;
  int userMoney = 1000;
  int* userMoneyPointer = &userMoney;
  bool transferAgain = true;

  
  // As long a the bool transferAgain is true, this will loop.
  while (transferAgain) {
    transferAgain = false;
    transferMoney(atmMoneyPointer, userMoneyPointer); 
      // now we need to see if the user wants to transfer money again
    char userResponse;
    cout << "Would you like to transfer more money? (y/N)" << endl;
    cin >> userResponse;

    // This needs to account for all types of truthy responses.
    if (userResponse == 'y' || userResponse == 'Y' || userResponse == 'yes' || userResponse == 'Yes' || userResponse == 'YES') {
      transferAgain = true;      
    } else {
      // Since the N is uppercase in the prompt. following unofficial standards
      // it is the default if nothing else of truthy value is given, so anything 
      // that doesn't resolve to yes will be taken as a no.
      transferAgain = false;
    }
  }
  return 0;
}