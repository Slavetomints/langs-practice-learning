#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
  double loanAmount;
  double annualPercentageRate;
  double monthlyPercentageRate;
  double amountPayed;
  int numberOfPayments;
  double monthlyPayment;


  cout << "what is the loan amount?" << endl;
  cin >> loanAmount;
  cout << "How many months do you want to pay the loan back in?" << endl;
  cin >> numberOfPayments;
  cout << "What is the annual percentage rate (if 12% enter as 0.12 and so on)" << endl;
  cin >> annualPercentageRate;


  monthlyPercentageRate = annualPercentageRate / 12;

  monthlyPayment = ( ( monthlyPercentageRate * pow( ( 1 + monthlyPercentageRate ), numberOfPayments ) ) / ( pow( ( 1 + monthlyPercentageRate ), numberOfPayments ) - 1 ) ) * loanAmount;

  amountPayed = monthlyPayment * numberOfPayments;
 
  cout << fixed << setprecision(2);
  
  cout << left;

  cout << setw(30) << "Loan Amount:" << "$    " << loanAmount << endl;
  cout << setw(35) << "Monthly Interest Rate:" << monthlyPercentageRate * 100 << "%" << endl;
  cout << setw(35) << "Number of Payments:" << numberOfPayments << endl;
  cout << setw(30) << "Monthly Payment:" << "$    " << monthlyPayment << endl;
  cout << setw(30) << "Amount Paid Back:" << "$    " << amountPayed << endl;
  cout << setw(30) << "Interest Paid:" << "$    " << amountPayed - loanAmount << endl;

    return 0;
}