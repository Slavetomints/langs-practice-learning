#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <fstream>
#include <sys/stat.h>
#include <limits>

using namespace std;

const char* allTimeWinsFile = "tmp/all-time-wins.txt";
const char* attemptsFile = "tmp/attempts.txt";
const char* namesFile = "names.txt";

void tick(int &numberOfAttempts, int &numberCorrect);
void showTitle();
void newGame();
void viewAttempts();
void menuOptions(int numberOfAttempts);
void writeAttempt(string attempt);
void ensureDirectoryExists();
void enterToContinue();
int getAllTimeWins();
bool checkIfFileExists(const char* file);
bool checkName(string name);
vector<string> loadFileToVector(fstream file);
string enterName(int numberOfAttempts);


int main() {
//  try {
//    newGame();
//  }
//  catch (...) {
//    cout << "An error occured, exiting now." << endl;
//  }
  newGame();
  return 0;
}

void tick(int &numberOfAttempts, int &numberCorrect) {
  system("clear");
  showTitle();
  if (numberCorrect > getAllTimeWins()) {
    ofstream file(allTimeWinsFile);
    file << numberCorrect;
    file.close();
  }
  menuOptions(numberOfAttempts);
  int userInput;
  cin >> userInput;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  switch (userInput) {
    case 1:
      if (numberOfAttempts < 10) {
        ++numberOfAttempts;
        if (checkName(enterName(numberOfAttempts))) {
          ++numberCorrect;
        }
      }
      break;
    case 2:
      if (checkIfFileExists(attemptsFile)) {
        viewAttempts();
      }
      break;
    case 3:
      if (checkIfFileExists(allTimeWinsFile)) {
        system("clear");
        showTitle();
        cout << "Your best score is: " << getAllTimeWins() << endl;
        enterToContinue();
      }
      break;
    case 4:
      newGame();
      break;
    case 5:
    system("clear");
      exit(0);
      break;
    default:
      cout << "Invalid value" << endl;
  }

}

void menuOptions(int numberOfAttempts) {
  if (numberOfAttempts < 10) {
    cout << "[1] - Make guess (" << (10 - numberOfAttempts) << " attempts remaining)" << endl;
  } else {
    cout << "\033[31m You have reached the maximum number of attemtpts \033[0m" << endl;
  }
  if (checkIfFileExists(attemptsFile)) {
    cout << "[2] - View current attempts" << endl;
  }
  if (checkIfFileExists(allTimeWinsFile)) {
    cout << "[3] - View all time wins" << endl;
  }
  cout << "[4] - New Game" << endl;
  cout << "[5] - Quit" << endl;
  cout << "> ";
}

void showTitle() {
  cout << ">>==========================================================================<<" << endl;
  cout << "||                                                                          ||" << endl;
  cout << "||                                                                          ||" << endl;
  cout << "||                                                                          ||" << endl;
  cout << "||   _____                     _               _____                        ||" << endl;
  cout << "||  |  __ \\                   (_)             |  __ \\                       ||" << endl;
  cout << "||  | |  \\/_   _  ___  ___ ___ _ _ __   __ _  | |  \\/ __ _ _ __ ___   ___   ||" << endl;
  cout << "||  | | __| | | |/ _ \\/ __/ __| | '_ \\ / _` | | | __ / _` | '_ ` _ \\ / _ \\  ||" << endl;
  cout << "||  | |_\\ \\ |_| |  __/\\__ \\__ \\ | | | | (_| | | |_\\ \\ (_| | | | | | |  __/  ||" << endl;
  cout << "||   \\____/\\__,_|\\___||___/___/_|_| |_|\\__, |  \\____/\\__,_|_| |_| |_|\\___|  ||" << endl;
  cout << "||                                      __/ |                               ||" << endl;
  cout << "||                                     |___/                                ||" << endl;
  cout << "||                                                                          ||" << endl;
  cout << "||                                                                          ||" << endl;
  cout << "||                                                                          ||" << endl;
  cout << ">>==========================================================================<<" << endl << endl << endl;
}

void newGame() {
  int numberOfAttempts = 0;
  int numberCorrect = 0;
  ensureDirectoryExists();
  remove(attemptsFile);
  while (true) {
    tick(numberOfAttempts, numberCorrect);
  }
}

void ensureDirectoryExists() {
  struct stat sb;
  if (stat("tmp", &sb) != 0) {
      mkdir("tmp", 0777);
  }
}

void viewAttempts() {
  string guess;
  fstream file(attemptsFile);
  system("clear");
  showTitle();
  cout << "Your guesses: " << endl;
  cout << "------------------------------" << endl;
  while( getline(file, guess)) {
    cout << "- " << guess << endl;
  }
  enterToContinue();
}

int getAllTimeWins() {
  if (checkIfFileExists(allTimeWinsFile)) {
    string allTimeWin;
    fstream file(allTimeWinsFile);
    getline(file, allTimeWin);
    try {
      return stoi(allTimeWin);
    }
    catch (...) {
      return 0;
    }
  } else {
    ofstream file(allTimeWinsFile);
    file << 0;
    file.close();
    return 0;
  }
}

void writeAttempt(string attempt) {
  ofstream file(attemptsFile, ios_base::app);
  if (!file.is_open()) {
    cerr << "Error: Failed to open file " << attemptsFile << endl;
    return;
  }
  file << attempt << endl;
  file.close();
}

bool checkIfFileExists(const char* file) {
  struct stat sb;
  if (stat(file, &sb) == 0 && !(sb.st_mode & S_IFDIR)) {
    return true;
  } else {
    return false;
  }
}

vector<string> loadFileToVector(const char* namesFile) {
  fstream file(namesFile);
  vector<string> vector;
  string name;
  while(getline(file, name)) {
    vector.push_back(name);
  }
  return vector;
}

string enterName(int numberOfAttempts) {
  system("clear");
  showTitle();
  cout << "Please enter a name" << endl << "> ";
  string input;
  getline(cin, input);
  writeAttempt(input);
  return input;
}

bool checkName(string name) {
  vector<string> namesVector = loadFileToVector(namesFile);
  if (find(namesVector.begin(), namesVector.end(), name) != namesVector.end()) {
    cout << "Correct!" << endl;
    enterToContinue();
    return true;
  } else {
    cout << "Wrong" << endl;
    return false;
    enterToContinue();
  }
}

void enterToContinue() {
  cout << endl << "Press Enter to continue";
  string etc;
  getline(cin, etc);
}