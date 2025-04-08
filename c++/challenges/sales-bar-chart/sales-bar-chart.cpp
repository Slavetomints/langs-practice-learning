#include <iostream>
#include <vector>

using namespace std;

string drawBar(int num);

int main() {
  vector<int> stores(5);

  for (int s = 0; s <= 4; s++) {
    cout << "Enter today's sales for store " << s + 1 << ": ";
    cin >> stores[s];
  }

  cout << "\n\nSALES BAR CHART" << endl;
  cout << "(Each * = $100)" << endl;
  for (int s = 0; s <= 4; s++) {
    cout << "Store " << s + 1 << ": " << drawBar(stores[s]) << endl;
  }
}

string drawBar(int num) {
  int numOfStars = num / 100;
  string bar = "";
  for (int i = 0; i < numOfStars; i++) {
      bar += "*";
  }
  return bar;
}
