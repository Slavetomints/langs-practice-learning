#include <iostream>

using namespace std;

int main() {
  double payAmount = 2200.0;
  int payPeriods = 26;
  double annualPay;

  annualPay = payAmount * payPeriods;

  printf("Annual Pay: $%0.02f\n", annualPay);
  return 0;
}