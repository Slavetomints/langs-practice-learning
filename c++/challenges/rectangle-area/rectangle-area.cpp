#include <iostream>

using namespace std;

double globalLength;
double globalWidth;

double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double area, double length, double width);

int main() {
  displayData(getArea(globalLength, globalWidth), getLength(), getWidth());
}

double getLength() {
  cout << "What is the length?" << endl;
  cin >> globalLength;
  return globalLength;
}

double getWidth() {
  cout << "What is the width?" << endl;
  cin >> globalWidth;
  return globalWidth;
}

double getArea(double length, double width) {
  double area;
  area = length * width;
  return area;
}


void displayData(double area, double length, double width) {
  cout << "\n\n The length of the rectangle is: " << length << endl;
  cout << "The width of the rectangle is: " << width << endl;
  cout << "The area of the rectangle is: " << area << endl;
}