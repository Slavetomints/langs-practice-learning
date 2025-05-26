// A local zoo wants to keep track of how many pounds of food each of its three 
// monkeys eats each day during a typical week. Write a program that stores this
// information in a two-dimensional 3 × 5 array, where each row represents a 
// different monkey, and each column represents a different day of the week. The
// program should first have the user input the data for each monkey. Then, it 
// should create a report that includes the following information:
// 
// Average amount of food eaten per day by the whole family of monkeys
// The least amount of food eaten during the week by any one monkey
// The greatest amount of food eaten during the week by any one monkey
//
// Do not accept negative numbers for pounds of food eaten
#include <iostream>

using namespace std;

int main() {
  int monkeyFood[3][5];
  int totalFood = 0;
  int leastFoodDay = 0;
  int leastFoodMonkey = 0;
  int greatestFoodDay = 0;
  int greatestFoodMonkey = 0;
  for (int m = 0; m < 3; m++) {
    for (int d = 0; d < 5; d++) {
      int food;
      cout << "Enter food for monkey " 
           << (m + 1) 
           << ", day " 
           << (d + 1)
           << ": ";

      cin >> food;
      while (food < 0) {
        cout << "You need to enter a value greater than or equal to 0" 
             << endl;
        cout << "Enter food for monkey " 
             << (m + 1) 
             << ", day " 
             << (d + 1)
             << ": ";

        cin >> food;
      }
      if (food > monkeyFood[greatestFoodMonkey][greatestFoodDay]) {
        greatestFoodMonkey = m;
        greatestFoodDay = d;
      }
      if (food < monkeyFood[leastFoodMonkey][leastFoodDay]) {
        leastFoodMonkey = m;
        leastFoodDay = d;
      }
      monkeyFood[m][d] = food;
      totalFood += food;
    }
  }
  cout << endl 
       << endl 
       << "Average food eaten per day: " 
       << ((totalFood / 3) / 5)
       << endl;
  cout << "Least amount of food eaten by a monkey: "
       << monkeyFood[leastFoodMonkey][leastFoodDay]
       << endl;
  cout << "Greatest amount of food eaten by a monkey: "
       << monkeyFood[greatestFoodMonkey][greatestFoodDay]
       << endl;
}