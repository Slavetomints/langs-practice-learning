#include <iostream>
#include <string>
using namespace std;

string downcase(string);

int main() {
  int userChoice;
  int intDayOfWeek;
  string month;
  string letter;
  string stringDayOfWeek;

  cout << "\nWelcome to Switch-It-Up!" << "\n\n" << "1 - Get day of week from string\n" << "2 - Get day of week from integer\n" << "3 - Get month from string\n" << "4 - Check if consonant or vowel\n\n" << endl;
  cin >> userChoice;

  switch (userChoice) {
    case 1:
      cout << "Please enter a day of the week (Monday-Sunday)" << endl;
      cin >> stringDayOfWeek;
      stringDayOfWeek = downcase(stringDayOfWeek);
      break;
    case 2:
      cout << "Please enter a day of the week (1-7)" << endl;
      cin >> intDayOfWeek;
      cin.clear();
      break;
    case 3:
      cout << "Please enter a month (January-December)" << endl;
      cin >> month;
      month = downcase(month);
      break;
    case 4:
      cout << "Please enter a letter" << endl;
      cin >> letter;
      letter = downcase(letter);
      break;
    default:
      break;
  }
  return 0;
}

string downcase(string string) {
  for (char& c : string) {
    if ( c >= 'A' && c <= 'Z') {
      c += 32;
    }
  }
  return string;
}