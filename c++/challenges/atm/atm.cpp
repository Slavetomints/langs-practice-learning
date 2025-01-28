#include <iostream>

using namespace std;

int showTitle() {
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
  int amount;
  cin >> amount;
  return amount;
}

bool validateTransferAmount(int* atmMoney, int transferAmount) {
  if (transferAmount == 0) {
    cout << "Exiting application" << endl;
    return false;
  } else if (transferAmount != 40 && transferAmount != 80 && transferAmount != 200 && transferAmount != 400) {
    cout << "Please select a valid amount" << endl;;
    return false;
  } else if (*atmMoney - transferAmount < 0) {
    cout << "The ATM doesn't Have enough money for that transaction." << endl;
    return false;
  } else {
    cout << "Transaction Approved" << endl;
    return true;
  }
}

int transferMoney(int* atmMoney, int* userMoney) {
  bool transferAgain = true;
  while (transferAgain) {
    showTitle();
    int transferAmount;
    transferAmount = getTransferAmount();
    if (validateTransferAmount(atmMoney, transferAmount) == true) {
      *atmMoney = *atmMoney - transferAmount;
      *userMoney = *userMoney + transferAmount;
    }
    char userResponse;
    cout << "Would you like to transfer more money? (y/N)" << endl;
    cin >> userResponse;
    if (userResponse == 'y' || userResponse == 'Y') {
      transferAgain = true;
    } else if (userResponse == 'n' || userResponse == 'N') {
      transferAgain = false;
    } else {
      transferAgain = false;
    }
  }
  return 0;
}

int main() {
  int atmMoney = 500;
  int* atmMoneyPointer = &atmMoney;
  int userMoney = 1000;
  int* userMoneyPointer = &userMoney;
  transferMoney(atmMoneyPointer, userMoneyPointer);  
  return 0;
}