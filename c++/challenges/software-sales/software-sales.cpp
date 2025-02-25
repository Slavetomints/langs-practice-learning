#include <iostream>

using namespace std;

int main() {
  int units;

  cout << "How many units would you like to buy?" << endl;
  cin >> units;

  if (units < 0) {
    cout << "You cant buy negative items!";
    exit(0);
  }

  if (units >= 10 && units <= 19) {
    cout << "Cost: " << ((units * 99) * 0.8) << endl;
  } else if (units >= 20 && units <= 49) {
    cout << "Cost: " << ((units * 99) * 0.7) << endl;
  } else if (units >= 50 && units <= 99) {
    cout << "Cost: " << ((units * 99) * 0.6) << endl;
  } else if (units >= 100) {
    cout << "Cost: " << ((units * 99) * 0.5) << endl;
  } else {
    cout << "Cost: " << (units * 99) << endl;
  }
}