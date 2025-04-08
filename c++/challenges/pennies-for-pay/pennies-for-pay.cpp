#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double days;
  double total = 0.01;

  cout << "Please enter a number of days: ";
  cin >> days;

  while (days <= 0) {
    cout << "Please enter a non-negative non-zero number of days" << endl;
    cin >> days;
  }

  cout << "DAY | SALARY" << endl;
  cout << "------------" << endl;
  for (int i = 1; i <= days; i++) {
    if (i == 1) {
      cout << i << setw(6) << " | $" << fixed << setprecision(2) << total << endl;
      continue;
    }
    cout << i << setw(7 - to_string(i).length()) << "| $" << fixed << setprecision(2) << (total *= 2) << endl;
  }


}