#include <iostream>
#include <fstream>

using namespace std;

int main() {
  bool first = true;
  string lastStudent;

  fstream file;
  file.open("LineUp.txt");
  
  while (!file.eof()) {
    string tempStudent;
    file >> tempStudent;
    if (first) {
      cout << "The first student in line is " << tempStudent << endl;
      first = false;
    }
    lastStudent = tempStudent;
  }
  cout << "The last student in line is " << lastStudent << endl;
}