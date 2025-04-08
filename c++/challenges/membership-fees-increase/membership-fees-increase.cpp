#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  const double STARTING_TOTAL = 2500;
  double new_total = STARTING_TOTAL;
  const double RATE = 0.04;

  cout << "YEAR 1 FEE: $" << fixed << setprecision(2) << STARTING_TOTAL << endl;
  
  for (int i = 0; i <= 6; i++) {
    cout << "YEAR " << i + 1 << " FEE: $" << fixed << setprecision(2) << (new_total += (new_total * RATE)) << endl;;
  }
}