#include <iostream>
#include <vector>

using namespace std;

bool testPIN(vector<int>, vector<int>, int);

int main() {
  vector<int> pin1 = {2, 4, 1, 8, 7, 9, 0};
  vector<int> pin2 = {2, 4, 6, 8, 7, 9, 0};
  vector<int> pin3 = {1, 2, 3, 4, 5, 6, 7};

  if (testPIN(pin1, pin2, 7)) {
    cout << "ERROR: pin1 and pin2 report to be the same." << endl;
  } else {
    cout << "SUCCESS: pin1 and pin2 are different." << endl;
  }

  if (testPIN(pin1, pin3, 7)) {
    cout << "ERROR: pin1 and pin3 report to be the same." << endl;
  } else {
    cout << "SUCCESS: pin1 and pin3 are different." << endl;
  }

  if (testPIN(pin1, pin1, 7)) {
    cout << "SUCCESS: pin1 and pin1 report to be the same." << endl;
  } else {
    cout << "ERROR: pin1 and pin1 are different." << endl;
  }
}

bool testPIN(vector<int> custPIN, vector<int> databasePIN, int length) {
  int numberRight = 0;
  for (int i = 0; i < length; i++) {
    if (custPIN[i] == databasePIN[i]) {
      numberRight++;
    }
  }
  if (length == numberRight) {
    return true;
  }
  return false;
}