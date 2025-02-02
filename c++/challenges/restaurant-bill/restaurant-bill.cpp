#include <iostream>

using namespace std;

int main() {
  // Initialize the variables
  double mealCharge;
  const double TAXPERCENT = 0.0675;
  double tax;
  double tip;
  double total;

  // Set mealCharge and the tax percentage, and then calculate the rest of the needed numbers
  mealCharge = 88.67;
  tax = mealCharge * TAXPERCENT;
  total = mealCharge + tax;
  tip = total * 0.20;
  total = total + tip;

  // Display the money with precision to the hundredths place
  printf("Meal cost: $%.02f\n", mealCharge);
  printf("Tax amount: $%.02f\n", tax);
  printf("Tip amount: $%.02f\n", tip);
  printf("Total: $%.02f\n", total);
  return 0;
}