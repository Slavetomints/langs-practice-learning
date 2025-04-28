#include <iostream>
#include <iomanip>

using namespace std;

double calculateRetail(double wholesaleCost, double markup);

int main() {
  double wholesaleCost;
  double markup;
  double finalCost;

  cout << "What is the wholesale cost of the item?" << endl;
  cin >> wholesaleCost;
  cout << "What is the markup of the item? (ex. if 50% please enter only 50)" << endl;
  cin >> markup;
  finalCost = calculateRetail(wholesaleCost, markup);
  cout << "The final cost after markup is: $" << fixed << setprecision(2) << finalCost << endl;
}

double calculateRetail(double wholesaleCost, double markup) {
  return wholesaleCost + (wholesaleCost * markup / 100);
  
}