// GirlNames.txt - This file contains a list of the 200 most popular names given
//                 to girls born in the United States from 2000 to 2009.
// BoyNames.txt - This file contains a list of the 200 most popular names given 
//                to boys born in the United States from 2000 to 2009.
// Write a program that reads the contents of the two files into two separate 
// arrays or vectors. The user should be able to enter a boy’s name, a girl’s 
// name, or both, and the application should display messages indicating whether
// the names were among the most popular.

#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

int main() {
  fstream boyFile("BoyNames.txt");
  fstream girlFile("GirlNames.txt");
  vector<string> boyNames;
  vector<string> girlNames;
  
  string tempName;
  while ( getline(boyFile, tempName)) {
    boyNames.push_back(tempName);
  }

  while( getline(girlFile, tempName)) {
    girlNames.push_back(tempName);
  }

  string name;
  cout << "Pick a name, any name." << endl << "> ";
  cin >> name;

  auto boyNamesFind = find(boyNames.begin(), boyNames.end(), name);
  auto girlNamesFind = find(girlNames.begin(), girlNames.end(), name);

  if (boyNamesFind != boyNames.end()) {
    cout << boyNames[boyNamesFind - boyNames.begin()] << " was one of the most popular boy names!" << endl;
  }
  
  if (girlNamesFind != girlNames.end()) {
    cout << girlNames[girlNamesFind - girlNames.begin()] << " was one of the most popular girl names!" << endl;
  }

  if (boyNamesFind == boyNames.end() && girlNamesFind == girlNames.end()) {
    cout << "Your name was not one of the most popular boy or girl names" << endl;
  }
}