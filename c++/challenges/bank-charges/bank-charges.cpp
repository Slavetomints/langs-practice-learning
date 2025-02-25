#include <iostream>

using namespace std;

int main() {
  int numberOfChecks;
  double balance, fees = 10;

  cout << "How many checks have you written?" << endl;
  cin >> numberOfChecks;

  if (numberOfChecks < 0) {
    cout << "You cant write negative checks!" << endl;
    exit(0);
  }

  cout << "What is your account balance?" << endl;
  cin >> balance;

  if (balance < 0) {
    cout << "YOUR BALANCE IS OVERDRAWN!!!" << endl;
  }

  if (numberOfChecks < 20) {
    fees += (numberOfChecks * 0.10);
  } else if (numberOfChecks >= 20 && numberOfChecks <= 39) {
    fees += (numberOfChecks * 0.08);
  } else if (numberOfChecks >= 40 && numberOfChecks <= 59) {
    fees += (numberOfChecks * 0.06);
  } else if (numberOfChecks >= 60) {
    fees += (numberOfChecks * 0.04);
  }

  if (balance < 400 ) {
    fees += 15;
  }

  cout << "Monthly fees: " << fees << endl;

  return 0;
}