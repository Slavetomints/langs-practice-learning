#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  const double AIR = 1100;
  const double WATER = 4900;
  const double STEEL = 16400;
  double distance;
  int choice;

  cout << "The Speed of Sound" << "\n\n1 - Air" << "\n2 - Water" << "\n3 - Steel" << "\n\nPlease make a selection\n" << endl;
  cin >> choice;

  cout << "Please select your distance" << endl;
  cin >> distance;

  if (distance < 0) {
    cout << "Distance can not be less than zero" << endl;
    exit(0);
  }

  switch (choice) {
  case 1:
    cout << "It would take " << fixed << setprecision(4) << (distance / AIR) << " seconds to travel " << setprecision(2) << distance << " feet in air at the speed of sound." << endl;
    break;
  case 2:
    cout << "It would take " << fixed << setprecision(4) << (distance / WATER) << " seconds to travel " << setprecision(2) << distance << " feet in water at the speed of sound." << endl;
    break;
  case 3:
    cout << "It would take " << fixed << setprecision(4) << (distance / STEEL) << " seconds to travel " << setprecision(2) << distance << " feet in steel at the speed of sound." << endl;
    break;
  default:
    cout << "Please make a valid choice" << endl;
    break;
  }
}