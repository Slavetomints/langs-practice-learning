#include <iostream>

using namespace std;

int showTitle() {
  cout << R"(@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@)" << endl;
  cout << R"(@   _   _____                              _     _            @)" << endl;
  cout << R"(@  /_\ /__   \/\/\        /\/\   __ _  ___| |__ (_)_ __   ___ @)" << endl;
  cout << R"(@ //_\\  / /\/    \      /    \ / _` |/ __| '_ \| | '_ \ / _ \@)" << endl;
  cout << R"(@/  _  \/ / / /\/\ \    / /\/\ \ (_| | (__| | | | | | | |  __/@)" << endl;
  cout << R"(@\_/ \_/\/  \/    \/    \/    \/\__,_|\___|_| |_|_|_| |_|\___|@)" << endl;
  cout << R"(@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@)" << endl;
  cout <<  "     Please select an acceptable amount from the following       " << endl;
  cout <<  "     $40           $80           $200             $400           " << endl;
  cout << endl;
  return 0;
}


int main() {
  int atmMoney = 500;
  int userMoney = 1000;
  showTitle();

  return 0;
}