#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

void getNumberOfRooms();
void getRoomWallSizes();
void calculateTotalWallSpace();
void calculateHoursOfLabor();
void calculateGallonsOfPaint();
void calculateLaborCosts();
void calculatePaintCosts();
void calculateTotalCosts();
void showTotals();

int numberOfRooms;
vector<double> roomWallSpaces;
double totalWallSpace;
double hoursOfLabor;
double gallonsOfPaint;
double costOfLabor;
double costOfPaint;
double totalCost;

int main () {
  getNumberOfRooms();
  getRoomWallSizes();
  calculateTotalWallSpace();
  calculateHoursOfLabor();
  calculateGallonsOfPaint();
  calculateLaborCosts();
  calculatePaintCosts();
  calculateTotalCosts();
  showTotals();
}

void getNumberOfRooms() {
  cout << "\nHow many rooms are there going to be?" << endl << "> ";
  cin >> numberOfRooms;
  if (numberOfRooms < 1) {
    cout << "\nPlease enter a whole number greater than or equal to 1." << endl << "> ";
    getNumberOfRooms();
  }
}

void getRoomWallSizes() {
  for (int i = 0; i < numberOfRooms; i++) {
    double tempWallSpace = -1;
    while (tempWallSpace < 0) {
      cout << "\nWhat is the square feet of wall space for room " << i + 1 << "? Please make sure to enter a positive number." << endl;
      cout << "> ";
      cin >> tempWallSpace;
    }
    roomWallSpaces.push_back(tempWallSpace);
  }
}

void calculateTotalWallSpace() {
  totalWallSpace = accumulate(roomWallSpaces.begin(), roomWallSpaces.end(), 0);
}

void calculateHoursOfLabor() {
  hoursOfLabor = ((totalWallSpace / 110) * 8);
}

void calculateGallonsOfPaint() {
  gallonsOfPaint = (totalWallSpace / 110);
}

void calculateLaborCosts() {
  costOfLabor = hoursOfLabor * 25.00;
}

void calculatePaintCosts() {
  double priceOfPaint;
  cout << "\nWhat is the price of paint?" << endl << "> ";
  cin >> priceOfPaint;
  while (priceOfPaint < 10) {
    cout << "\nPaint can not be lower than $10, please select again." << endl << "> ";
    cin >> priceOfPaint;
  }
  costOfPaint = gallonsOfPaint * priceOfPaint;
}

void calculateTotalCosts() {
  totalCost = costOfLabor + costOfPaint;
}

void showTotals() {
  cout << "\n\n\nGallons of paint required: " << gallonsOfPaint << endl;
  cout << "Hours of labor required: " << hoursOfLabor << endl;
  cout << "Cost of paint: $" << costOfPaint << endl;
  cout << "Cost of labor: $" << costOfLabor << endl;
  cout << "Total Cost: $" << totalCost << endl;
}

