// Write a program that lets a maker of chips and salsa keep track of sales for 
// five different types of salsa: mild, medium, sweet, hot, and zesty. 
// The program should use two parallel 5-element arrays: an array of strings 
// that holds the five salsa names, and an array of integers that holds the 
// number of jars sold during the past month for each salsa type. 
// The salsa names should be stored using an initialization list at the time the 
// name array is created. The program should prompt the user to enter the number
// of jars sold for each type. Once this sales data has been entered, the 
// program should produce a report that displays sales for each salsa type, 
// total sales, and the names of the highest selling and lowest selling products.


#include <iostream>

using namespace std;

int main() {
  string salsaNames[5] = {"mild", "medium", "sweet", "hot", "zesty"};
  int salsaSales[5];
  int highestIndex = 0;
  int lowestIndex = 0;
  int totalAmount = 0;
  for (int i = 0; i < 5; i++) {
    int tempAmount;
    cout << "Enter amount of sales for " << salsaNames[i] << " salsa: ";
    cin >> tempAmount;
    while (tempAmount < 0) {
      cout << "You need to enter a number larger than 0" << endl;
      cout << "Enter amount of sales for " << salsaNames[i] << " salsa: ";
      cin >> tempAmount;
    }
    salsaSales[i] = tempAmount;
    highestIndex = salsaSales[i] > salsaSales[highestIndex] ? i : highestIndex;
    lowestIndex = salsaSales[i] < salsaSales[lowestIndex] ? i : lowestIndex;
    totalAmount += salsaSales[i];
  }
  cout << endl << endl << "SALSA SALES REPORT:" << endl;
  cout << "-----------------" << endl;
  for (int i = 0; i < 5; i++) {
    cout << salsaNames[i] << " sold: " << salsaSales[i] << endl;
  }
  cout << "Total sold: " << totalAmount << endl;
  cout << "Highest selling: " << salsaNames[highestIndex] << endl;
  cout << "Lowest selling: " << salsaNames[lowestIndex] << endl;
}