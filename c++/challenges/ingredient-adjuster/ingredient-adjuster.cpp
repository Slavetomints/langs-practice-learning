#include <iostream>

using namespace std;

int main() {
  double cupsOfSugarBase = 1.5;
  double cupsOfButterBase = 1.0;
  double cupsOfFlourBase = 2.75;

  double cupsOfSugarUser;
  double cupsOfButterUser;
  double cupsOfFlourUser;

  int recipeBaseAmount = 48;

  int recipieUserAmount;

  double numberOfServings;

  cout << "How many cookies do you want to make today?" << endl;
  cin >> recipieUserAmount;

  numberOfServings = recipieUserAmount / recipeBaseAmount;

  cupsOfSugarUser = cupsOfSugarBase * numberOfServings;
  cupsOfButterUser = cupsOfButterBase * numberOfServings;
  cupsOfFlourUser = cupsOfFlourBase * numberOfServings;

  cout << "\nNumber of Cookies: " << recipieUserAmount << endl;
  cout << "Number of Servings: " << numberOfServings << endl;
  cout << "\nYou need " << cupsOfSugarUser << " cup(s) of sugar." << endl;
  cout << "You need " << cupsOfButterUser << " cup(s) of butter." << endl;
  cout << "You need " << cupsOfFlourUser << " cup(s) of flour." << endl;
  return 0;
}