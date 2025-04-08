#include <iostream>

using namespace std;

int main() {

  int number;
  int total = 0;

  cout << "Please select a number" << endl;

  cin >> number;

  while (number <= 0 ) {
    cout << "Please select a positive non-zero number" << endl;
    cin >> number;
  }
  for (int i = 1; i <= number; i++) {
    total += i;
  }
  cout << "The sum of all numbers between 1 and " << number << " (inclusive) is: " << total << endl;
}