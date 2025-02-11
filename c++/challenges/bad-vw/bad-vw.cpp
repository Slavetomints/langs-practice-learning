#include <iostream>
#include <iomanip>
#include <string>
#include <array>

using namespace std;

int main() {
  struct VehiclePairs {
    string carName;
    double mileage;
    double tenPercentmileage;
  };

  VehiclePairs volkswagenCars[5];
  volkswagenCars[0].carName = "Volkswagen Golf R 2024";
  volkswagenCars[0].mileage = 25.0;
  volkswagenCars[1].carName = "Volkswagen Jetta 2024";
  volkswagenCars[1].mileage = 34.0;
  volkswagenCars[2].carName = "Volkswagen Atlas 2024";
  volkswagenCars[2].mileage = 20.0;
  volkswagenCars[3].carName = "Volkswagen Taos 2025";
  volkswagenCars[3].mileage = 28.0;
  volkswagenCars[4].carName = "Volkswagen Arteon 2024";
  volkswagenCars[4].mileage = 22.0;
  for (int i = 0; i < 5; i++) {
    volkswagenCars[i].tenPercentmileage = volkswagenCars[i].mileage * 0.90;
  }

  VehiclePairs stellantisCars[5];
  stellantisCars[0].carName = "Chrysler Pacifica 2025";
  stellantisCars[0].mileage = 19.0;
  stellantisCars[1].carName = "Chrysler Voyager 2025";
  stellantisCars[1].mileage = 19.0;
  stellantisCars[2].carName = "Jeep Wagoneer 2025";
  stellantisCars[2].mileage = 17.0;
  stellantisCars[3].carName = "Jeep Grand Cherokee 2025";
  stellantisCars[3].mileage = 19;
  stellantisCars[4].carName = "Jeep Wrangler Willy's 2025";
  stellantisCars[4].mileage = 17.0;
  for (int i = 0; i < 5; i++) {
    stellantisCars[i].tenPercentmileage = stellantisCars[i].mileage * 0.90;
  }

  cout << left << setw(35) << "Volkswagon Cars" << setw(20) << "Volkswagon Mileage" << "10% Reduction of Mileage\n" << endl; 
  for (int i = 0; i < 5; ++i) {
    cout << left << setw(35) << volkswagenCars[i].carName << setw(20) << setprecision(1) << fixed << volkswagenCars[i].mileage << volkswagenCars[i].tenPercentmileage << endl;
  }

  cout << left << setw(38) << "\n\n\nStellantis Cars" << setw(20) << "Stellantis Mileage" << "10% Reduction of Mileage\n" << endl;
  for (int i = 0; i < 5; ++i) {
    cout << left << setw(35) << stellantisCars[i].carName << setw(20) << setprecision(1) << fixed << stellantisCars[i].mileage << stellantisCars[i].tenPercentmileage << endl;
  }
}