#include <iostream>
#include <string>
using namespace std;

string downcase(string);

int main() {
  int userChoice;
  int intDayOfWeek;
  int asciiValue;
  string month;
  string letter;
  string stringDayOfWeek;
  string userInputRandom;
  char letterChar;

  cout << "\nWelcome to Switch-It-Up!" << "\n\n" << "1 - Get day of week from string\n" << "2 - Get day of week from integer\n" << "3 - Get month from string\n" << "4 - Check if consonant or vowel\n\n" << endl;
  cin >> userChoice;

  switch (userChoice) {
    case 1:
      cout << "Please enter a day of the week (Monday-Sunday)" << endl;
      cin >> stringDayOfWeek;
      stringDayOfWeek = downcase(stringDayOfWeek);
        if ( stringDayOfWeek == "monday" || stringDayOfWeek == "tuesday" || stringDayOfWeek == "wednesday" || stringDayOfWeek == "thursday") {
          cout << "You selected a weekday!" << endl;
        } else if (stringDayOfWeek == "friday" || stringDayOfWeek == "saturday" || stringDayOfWeek == "sunday") {
          cout << "You selected a weekend day!" << endl;
        } else {
          cout << "Invalid selection" << endl;
        }
      break;
    case 2:
      cout << "Please enter a day of the week (1-7)" << endl;
      cin >> intDayOfWeek;
      cout << "You selected ";
      switch (intDayOfWeek)
      {
      case 1:
        cout << "Sunday" << endl;
        break;
      case 2:
        cout << "Monday" << endl;
        break;
      case 3:
        cout << "Tuesday" << endl;
        break;
      case 4:
        cout << "Wednesday" << endl;
        break;
      case 5:
        cout << "Thursday" << endl;
        break;
      case 6:
        cout << "Friday" << endl;
        break;
      case 7:
        cout << "Saturday" << endl;
        break;
      default:
        cout << "Invalid selection" << endl;
        break;
      }
      break;
    case 3:
      cout << "Please enter a month (January-December)" << endl;
      cin >> month;
      month = downcase(month);
      cout << "Your season is: ";
      if (month == "december" || month == "january" || month == "february") {
        cout << "Winter" << endl;
      } else if (month == "march" || month == "april" || month == "may") {
        cout << "Spring" << endl;
      } else if (month == "june" || month == "july" || month == "august") {
        cout << "Summer" << endl;
      } else if (month == "september" || month == "october" || month == "november") {
        cout << "Fall" << endl;
      } else {
        cout << "Invalid selection" << endl;
      }
      break;
    case 4:
      cout << "Please enter a letter" << endl;
      cin >> letter;
      letter = downcase(letter);
      letterChar = letter[0];
      asciiValue = (int)letterChar;
      switch (asciiValue)
      {
      case 97:
      case 101:
      case 105:
      case 111:
      case 117:
        cout << "You selected a vowel!" << endl;
        break;
      case 98:
      case 99:
      case 100:
      case 102:
      case 103:
      case 104:
      case 106:
      case 107:
      case 108:
      case 109:
      case 110:
      case 112:
      case 113:
      case 114:
      case 115:
      case 116:
      case 118:
      case 119:
      case 120:
      case 122:
        cout << "You selected a consonant!" << endl;
        break;
      case 121:
        cout << "What do you think it is? (vowel/consonant)" << endl;
        cin >> userInputRandom;
        cout << "Wrong" << endl;
        break;
      default:
        cout << "Invalid selection" << endl;
        break;
      }
      break;
    default:
      cout << "Invalid selection" << endl;
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