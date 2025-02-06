#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  const double YEN_PER_DOLLAR = 152.58;
  const double EURO_PER_DOLLAR = 0.96;
  
  double amountOfMoneyUS;
  double amountOfMoneyEuro;
  double amountOfMoneyYen;

  cout << "How much USD do you want to transfer?" << endl;
  cin >> amountOfMoneyUS;

  amountOfMoneyEuro = amountOfMoneyUS * EURO_PER_DOLLAR;
  amountOfMoneyYen = amountOfMoneyUS * YEN_PER_DOLLAR;

  cout << "You would get €" << fixed << setprecision(2) << amountOfMoneyEuro << " Euro(s)." << endl;
  cout << "You would get ¥" << fixed << setprecision(2) << amountOfMoneyYen << " Yen." << endl;
  return 0;
}