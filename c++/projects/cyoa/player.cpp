#include <iostream>
#include <string>

using namespace std;

class Player {
  public:
    string name;

  Player() {
    cout << "Please enter your name: ";
    cin >> name;
    cout << "Hello " << name << "!" << endl;
  }


};