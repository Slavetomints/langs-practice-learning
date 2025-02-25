#include <iostream>
#include <math.h>

using namespace std;

int main() {
  double bodyMassIndex;
  double weight;
  double height;

  cout << "How tall are you in inches?" << endl;
  cin >> height;

  cout << "What is your weight in pounds?" << endl;
  cin >> weight;

  bodyMassIndex = weight * (703 / pow(height, 2));

  cout << "Your BMI is: " << bodyMassIndex << endl;

  if (bodyMassIndex < 18.5) {
    cout << "You are considered underweight" << endl;
  } else if (bodyMassIndex > 25 ) {
    cout << "You are considered overweight" << endl;
  } else {
    cout << "You have a healthy BMI" << endl;
  }
  return 0;
}