#include <iostream>

using namespace std;

int main() {
  double rainfall[12];
  int lowestRainfallIndex = 0;
  int highestRainfallIndex = 0;
  double averageMonthlyRainfall = 0;
  double totalRainfall = 0;

  for (int i = 0; i < 12; i++) {
    int rainfallAmount;
    cout << "What is the rainfall for month " << (i + 1) << ": ";
    cin >> rainfallAmount;
    while (rainfallAmount < 0) {
      cout << "The rainfall can not be lower than 0, please enter again for month " << (i + 1) << ": ";
      cin >> rainfallAmount;
    }
    rainfall[i] = rainfallAmount;
    highestRainfallIndex = rainfall[i] > rainfall[highestRainfallIndex] ? i : highestRainfallIndex;
    lowestRainfallIndex = rainfall[i] < rainfall[lowestRainfallIndex] ? i : lowestRainfallIndex;
    totalRainfall += rainfall[i];
  }
  averageMonthlyRainfall = totalRainfall / 12;
  cout << endl << endl << "RAINFALL STATISTICS:" << endl << "------------------------------" << endl;
  cout << "Total rainfall: " << totalRainfall << endl;
  cout << "Average rainfall: " << averageMonthlyRainfall << endl;
  cout << "Highest monthly rainfall: " << rainfall[highestRainfallIndex] << endl;
  cout << "Lowest monthly rainfall: " << rainfall[lowestRainfallIndex] << endl;
  return 0;
}