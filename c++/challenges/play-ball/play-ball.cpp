#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

void enterNames();
void checkNames();

vector<string> allMLBTeams = {
  "Arizona Diamondbacks",
  "Atlanta Braves",
  "Baltimore Orioles",
  "Boston Red Sox",
  "Chicago Cubs",
  "Chicago White Sox",
  "Cincinnati Reds",
  "Cleveland Guardians",
  "Colorado Rockies",
  "Detroit Tigers",
  "Houston Astros",
  "Kansas City Royals",
  "Los Angeles Angels",
  "Los Angeles Dodgers",
  "Miami Marlins",
  "Milwaukee Brewers",
  "Minnesota Twins",
  "New York Mets",
  "New York Yankees",
  "Oakland Athletics",
  "Philadelphia Phillies",
  "Pittsburgh Pirates",
  "San Diego Padres",
  "San Francisco Giants",
  "Seattle Mariners",
  "St. Louis Cardinals",
  "Tampa Bay Rays",
  "Texas Rangers",
  "Toronto Blue Jays",
  "Washington Nationals"
};

vector<string> userInputTeams;
fstream TeamFile;


int main() {
  enterNames();
  checkNames();
  return 0;
}

void enterNames() {
  bool keepGoing = true;
  TeamFile.open("baseball-teams.txt", ios::out);
  while (keepGoing) {
    string tempTeam;
    cout << "\nEnter a name of a MLB team! Make sure to capitalize each word and include proper punctuation." << endl << "Type 'qq' to quit" << endl << "> ";
    getline(cin, tempTeam);
    if (tempTeam == "qq") {
      keepGoing = false;
      TeamFile.close();
    } else {
      TeamFile << tempTeam << endl;
    }
  }
}
void checkNames() {
  TeamFile.open("baseball-teams.txt", ios::in);
  string team;
  int score;
  while (getline(TeamFile, team)) {
    userInputTeams.push_back(team);
  }
  cout << "You guessed " << userInputTeams.size() << " different teams." << endl;
  for (int i = 0; i < userInputTeams.size(); i++) {
    if (find(allMLBTeams.begin(), allMLBTeams.end(), userInputTeams[i]) != allMLBTeams.end()) {
      cout << "You correctly guessed: " << userInputTeams[i] << endl;
      score += 1;
    }
  }
  if (score == 30) {
    cout << "Great Job! You Win!" << endl;
  } else if (score <= 29 && score >= 15) {
    cout << "Not bad, better luck next time." << endl;
  } else {
    cout << "EG-NO-RA-MOOSE" << endl;
  }
}