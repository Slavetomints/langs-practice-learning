#include <iostream>
#include <fstream>

using namespace std;

int main() {
  int numberOfNumbers = 0;
  int sumOfNumbers = 0;
  double averageOfNumbers = 0;

  fstream file;
  file.open("Random.txt");

  while (!file.eof()) {
    int tempNum;
    file >> tempNum;
    numberOfNumbers ++;
    sumOfNumbers += tempNum;
  }
  cout << "The number of the numbers is: " << numberOfNumbers << endl;
  cout << "The sum of the numbers is: " << sumOfNumbers << endl;
  cout << "The average of the numbers is: " << (sumOfNumbers / numberOfNumbers) << endl;
  
  return 0;
} 