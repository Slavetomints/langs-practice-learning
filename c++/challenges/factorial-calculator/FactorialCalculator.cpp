
#include <iostream>

using namespace std;

int main()
{
  // Declare variables
  double total = 1;
  int currentValue = 1;
  int maxValue;

  // Collect value from user
  cout << "Please enter a non-negative number to get a factorial of" << endl;
  cin >> maxValue;

  // Calculate factorial
  while (currentValue <= maxValue)
  {
    total *= currentValue;
    currentValue += 1; 
  }
  
  // Display results
  cout << maxValue << "! is equal to " << total << endl;
}