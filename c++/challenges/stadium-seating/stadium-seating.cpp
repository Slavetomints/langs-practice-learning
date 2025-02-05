#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  const double CLASS_A_PRICE = 15;
  const double CLASS_B_PRICE = 12;
  const double CLASS_C_PRICE = 9;

  double numberOfA;
  double numberOfB;
  double numberOfC;
  double numberOfTotal;

  double profitA;
  double profitB;
  double profitC;
  double profitTotal;

  cout << "How many class A tickets were sold?" << endl;
  cin >> numberOfA;

  cout << "How many class B tickets were sold?" << endl;
  cin >> numberOfB;

  cout << "How many class C tickets were sold?" << endl;
  cin >> numberOfC;

  numberOfTotal = numberOfA + numberOfB + numberOfC;

  profitA = numberOfA * CLASS_A_PRICE;
  profitB = numberOfB * CLASS_B_PRICE;
  profitC = numberOfC * CLASS_C_PRICE;
  profitTotal = profitA + profitB + profitC;

  cout << "\n\n";

  cout << left << setw(15) << "Class" << setw(15) << "Price" << setw(15) << "Amount Sold" << setw(15) << "Profit" << endl;
  cout << left << setw(15) << "A" << fixed << setprecision(2) << "$" << setw(15) << CLASS_A_PRICE << setw(15) << setprecision(0) << numberOfA << setprecision(2) << "$" << profitA << endl;
  cout << left << setw(15) << "B" << fixed << setprecision(2) << "$" << setw(15) << CLASS_B_PRICE << setw(15) << setprecision(0) << numberOfB << setprecision(2) << "$" << profitB << endl;
  cout << left << setw(15) << "C" << fixed << setprecision(2) << "$" << setw(15) << CLASS_C_PRICE << setw(15) << setprecision(0) << numberOfC << setprecision(2) << "$" << profitC << endl;
  cout << left << setw(15) << "Total" << fixed << setw(15) << " N/A" << " " << setw(15) << setprecision(0) << numberOfTotal << setprecision(2) << "$" << profitTotal << endl;  
  return 0;
}