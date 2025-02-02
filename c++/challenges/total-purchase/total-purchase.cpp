#include <iostream>

using namespace std;

int main() {
  // Initialize each item with their price, the sales tax at 7%, and the other variables used
  double item1 = 15.95;
  double item2 = 25.95;
  double item3 = 6.95;
  double item4 = 12.95;
  double item5 = 3.95;
  const double TAXPERCENT = 0.07;
  double subtotal;
  double salesTax;
  double total;

  // do the math to get subtotal, tax amount, and total
  subtotal = item1 + item2 + item3 + item4 + item5;
  salesTax = subtotal * TAXPERCENT;
  total = subtotal + salesTax;

  // Show the values just calculated
  printf("Subtotal: $%0.02f\n", subtotal);
  printf("Sales Tax: $%0.02f\n", salesTax);
  printf("Total: $%0.02f\n", total);

  return 0;
}