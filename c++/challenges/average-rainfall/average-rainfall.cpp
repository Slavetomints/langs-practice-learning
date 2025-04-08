#include <iostream>

using namespace std;

int main() {
  double numberOfYears;
  cout << "How many years?" << endl;
  cin >> numberOfYears;
  while (numberOfYears < 1) {
    cout << "Number of years must be at least 1, please try again" << endl;
    cin >> numberOfYears;
  }
  double totalRainfall;
  double numberOfMonths = numberOfYears * 12;
  for (int y = 1; y <= numberOfYears; y++) {
    for (int m = 1; m <= 12; m++) {
      cout << "Enter the rainfall for year " << y << ", month " << m << " in inches" << endl;
      double rainfall;
      cin >> rainfall;

      while (rainfall < 0) {
        cout << "Please enter a number greater than or equal to 0" << endl;
        cin >> rainfall;
      }
      totalRainfall += rainfall;
    }
  }
  cout << "The average rainfall over " << numberOfMonths << " months is " << (totalRainfall / numberOfMonths) << " inches" << endl; 
}