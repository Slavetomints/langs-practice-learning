#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double population;
  double rateOfGrowth;
  double numberOfDays;
  
  cout << "What is the starting population? ";
  cin >> population;
  while (population < 2) {
    cout << "Population must be greater than or equal to 2, please enter again: ";
    cin >> population;
  }
  cout << "What is the rate of growth, as a percentage? (ex. 12% is entered as 0.12) ";
  cin >> rateOfGrowth;
  while (rateOfGrowth < 0) {
    cout << "Rate of growth cant be lower than zero, please enter again: ";
    cin >> rateOfGrowth;
  }
  cout << "How many days does the population grow for? ";
  cin >> numberOfDays;
  while (numberOfDays <= 0) {
    cout << "Number of days can not be lower than 1, please enter again: ";
    cin >> numberOfDays;
  }

  for (int i = 0; i <= numberOfDays; ++i) {
    cout << "On day " << (i + 1) << ", the population is " << fixed << setprecision(0) << population << endl;
    population += (population * rateOfGrowth);
  }
}