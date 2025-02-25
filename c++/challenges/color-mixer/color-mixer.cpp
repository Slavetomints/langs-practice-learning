#include <iostream>
#include <string>

using namespace std;

string downcase(string);

int main() {
  string color1;
  string color2;
  cout << "Your color choices are red, blue, yellow" << endl;
  cout << "What is the first color?" << endl;
  cin >> color1;
  cout << "What is the second color?" << endl;
  cin >> color2;

  color1 = downcase(color1);
  color2 = downcase(color2);
  if (color1 != "red" ) {

  } else if ((color1 == "red" || color2 == "red") && (color2 == "blue" || color1 == "blue")) {

  } else if ((color1 == "red" || color2 == "red") && (color2 == "yellow" || color1 == "yellow")) {

  } else if ((color1 == "yellow" || color2 == "yellow") && (color2 == "blue" || color1 == "blue")) {

  }
  return 0;
}

string downcase(string string) {
  for (char& c : string) {
    if ( c >= 'A' || c <= 'Z') {
      c += 32;
    }
  }
  return string;
}