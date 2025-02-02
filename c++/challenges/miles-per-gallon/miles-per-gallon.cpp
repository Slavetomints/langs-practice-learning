#include <iostream>

using namespace std;

int main() {
  int gallonsOfGasoline = 15;
  int milesDriven = 375;

  double milesPerGallon = milesDriven / gallonsOfGasoline;

  cout << "This car gets " << milesPerGallon << " Miles per Gallon of Gas" << endl;

  return 0;
}