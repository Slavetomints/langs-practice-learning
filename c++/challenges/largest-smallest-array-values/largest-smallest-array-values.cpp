#include <iostream>

using namespace std;

int main() {
  int array[10];
  for (int i = 0; i < 10; i++) {
    cout << "Enter value " << (i + 1) << ": ";
    cin >> array[i];
    cout << endl;
  }
  int largest = array[0];
  int smallest = array[0];
  for (int i = 0; i < 10; i++) {
    if (array[i] > largest) {
      largest = array[i];
    }
    if (array[i] < smallest) {
      smallest = array[i];
    }
  }
  cout << "The largest value is: " << largest << endl;
  cout << "The smallest value is: " << smallest << endl;
}