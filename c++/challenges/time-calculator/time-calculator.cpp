#include <iostream>

using namespace std;

int main() {
  double seconds;

  cout << "Please enter a number of seconds" << endl;
  cin >> seconds;

  if (seconds >= 86400 ) {
  cout << "That many seconds is " << (seconds / 86400) << " day(s)." << endl;
  } else if ( seconds >= 3600 ) {
    cout << "That many seconds is " << (seconds / 3600) << " hour(s)." << endl;
  } else if (seconds >= 60) {
    cout << "That many seconds is " << (seconds / 60) << " minute(s)." << endl;
  } else if (seconds < 60) {
    cout << "That is " << seconds << " second(s)" << endl;
  }

  return 0;
}