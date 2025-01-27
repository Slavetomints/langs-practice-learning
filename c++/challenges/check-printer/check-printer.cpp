#include <iostream>
#include <string>

using namespace std;

string getEmployeeName() {
  cout << "What is your name?" << endl;
  string name;
  getline(cin, name);
  return name;
}

int hoursWorked() {
  cout << "How many hours did you work?" << endl;
  int hours;
  cin >> hours;
  return hours;
}

int hourlyPay() {
  cout << "What is your hourly pay?" << endl;
  int pay;
  cin >> pay;
  return pay;
}

int makeCheck(string employeeName, int grossPay) {
  string check;
  cout << endl;
  cout << endl;
  cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
  cout << ">                         | $" << grossPay << " |  >" << endl;
  cout << ">                                         >" << endl;
  cout << "> ___Pay to the Order of__  " << employeeName << " >" << endl;
  cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
  return 0;
}

int main() {
  string employeeName = getEmployeeName();
  int grossPay = hoursWorked() * hourlyPay();
  makeCheck(employeeName, grossPay);
  return 0;
}