#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> nums;
  bool continueLooping = true;

  while (continueLooping) {
    int newNumber;
    cout << "Enter a number, enter -99 to stop: ";
    cin >> newNumber;
    if (newNumber == -99) {
      continueLooping = false;
    } else {
      nums.push_back(newNumber);
    }
  }
  int maxNum = *max_element(nums.begin(), nums.end());
  int minNum = *min_element(nums.begin(), nums.end());
  cout << "The greatest number is " << maxNum << endl;
  cout << "The smallest number is " << minNum << endl;
}