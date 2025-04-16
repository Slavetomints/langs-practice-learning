#include <iostream>
#include <string>
#include <iomanip>
#include <array>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

double moneyAmount = 0;

bool validateMoneyEntered(double money);
bool validatePurchase(double money, double cost);
void showMachine();

int main() {
  showMachine();

  bool loopAgain = true;
  vector<string> items;

  while  (loopAgain) {
    bool addMoney = true;
    while (addMoney) {
      double tempMoney;
      string selection[1];
      cout << "\nPlease enter an amount of money (accepts up to $20 bills, enter 0 to skip, enter 99 to stop)" << endl;
      cout << "You currently have entered $" << fixed << setprecision(2) << moneyAmount << endl;
      cin >> tempMoney;
      if (tempMoney == 99) {
        addMoney = false;
      }
      if (validateMoneyEntered(tempMoney)) {
        moneyAmount += tempMoney;
      } else {
        cout << "\n\nPlease enter a valid denomination of currency (0.01¢, 0.05¢, 0.10¢, 0.25¢, 0.50¢, $1, $2, $5, $10, $20)" << endl;
        continue;
      }
    }
    bool getThings = true;
    showMachine();
    while (getThings) {
      cout << "Please make a selection (ex. A1 for Cola), enter 99 to quit, enter 00 to see the vending machine again" << endl;
      cout << "You currently have entered $" << fixed << setprecision(2) << moneyAmount << endl;
      string inputSelection;
      cin >> inputSelection;
      if (inputSelection == "99") {
        cout << "Your change is $" << fixed << setprecision(2) << moneyAmount << endl;;
        cout << "You purchased:" << endl;
        for (int i = 0; i < items.size(); i++) {
          cout << "- " << items[i] << endl;
        }
        exit(0);
      } else if (inputSelection == "00") {
        showMachine();
      }
      vector<char> input(inputSelection.begin(), inputSelection.end());
      if (input[0] == 'A' || input[0] == 'a') {
        if (input[1] == '1') {
          if (validatePurchase(moneyAmount, 2.25)) {
            items.push_back("Cola");
            moneyAmount -= 2.25;
          } else {
            cout << "Transaction Failed" << endl;
          }
        } else if (input[1] == '2') {
            if (validatePurchase(moneyAmount, 50.00)) {
              items.push_back("Pixie Dust");
              moneyAmount -= 50.00;
            } else {
              cout << "Transaction Failed" << endl;
            }
        } else {
          cout << "Invalid selection" << endl;
        }
      } else if (input[0] == 'B' || input[0] == 'b') {
          if (input[1] == '1') {
            items.push_back("Students tears");
          } else if (input[1] == '2') {
              if (validatePurchase(moneyAmount, 0.13)) {
                items.push_back("Wi-Fi Password");
                moneyAmount -= 0.13;
              } else {
                cout << "Transaction Failed" << endl;
              }
          } else {
            cout << "Invalid selection" << endl;
          }
      } else {
        cout << "Invalid selection" << endl;
      }
    }
  }
}

bool validateMoneyEntered(double money) {
  double validMoneyAmounts[] = {0, 0.01, 0.05, 0.10, 0.25, 0.50, 1, 2, 5, 10, 20};
  auto valid = find(begin(validMoneyAmounts), end(validMoneyAmounts), money);
  return (valid != end(validMoneyAmounts) );
}

bool validatePurchase(double money, double cost) {
  return ((money - cost) > 0);
}

void showMachine() {
  cout << "_____________________________________________________" << endl;
  cout << "|                         |                          |" << endl;
  cout << "|                         |                          |" << endl;
  cout << "|                         |                          |" << endl;
  cout << "|                         |                          |" << endl;
  cout << "|                         |                          |" << endl;
  cout << "|          Cola           |        Pixie Dust        |" << endl;
  cout << "|       A1 - $2.25        |        A2 - $50.00       |" << endl;
  cout << "|                         |                          |" << endl;
  cout << "|                         |                          |" << endl;
  cout << "|-------------------------+--------------------------|" << endl;
  cout << "|                         |                          |" << endl;
  cout << "|                         |                          |" << endl;
  cout << "|                         |                          |" << endl;
  cout << "|                         |                          |" << endl;
  cout << "|                         |                          |" << endl;
  cout << "|      Students tears     |       Wi-Fi Password     |" << endl;
  cout << "|       B1 - $0.00        |        B2 - $0.13        |" << endl;
  cout << "|                         |                          |" << endl;
  cout << "|                         |                          |" << endl;
  cout << "|                         |                          |" << endl;
  cout << "|                         |      ↓  Money in here ↓  |" << endl;
  cout << "|                         +--------------------------|" << endl;
  cout << "|                         |                          |" << endl;
  cout << "|                         |                          |" << endl;
  cout << "|-------------------------+--------------------------|" << endl;
  cout << "|                                                    |" << endl;
  cout << "|                                                    |" << endl;
  cout << "|                                                    |" << endl;
  cout << "|                                                    |" << endl;
  cout << "|                                                    |" << endl;
  cout << "|                                                    |" << endl;
  cout << "|                                                    |" << endl;
  cout << "_____________________________________________________" << endl;
}