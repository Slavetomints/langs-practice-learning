#include <iostream>

using namespace std;

bool isLeapYear(int);

int main() {
  int month, year, days;

  cout << "Please enter the month (0-12): ";
  cin >> month;

  switch (month)
  {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    days = 31;
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    days = 30;
    break;
  case 2:
    cout << "Please enter the year: ";
    cin >> year;
    if (isLeapYear(year)) {
      days = 29;
    } else {
      days = 28;
    }
    break;
  default:
    cout << "Please enter a valid month" << endl;
    exit(0);
    break;
  }

  cout << days << " days" << endl;
  return 0;
}

bool isLeapYear(int year) {
  if (((year % 100 == 0) && (year % 400 ==0)) || ((year % 4 == 0) && (year % 100 != 0))) {
    return true;
  } else {
    return false;
  }
}