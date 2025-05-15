// Teams.txt - This file contains a list of several Major League baseball teams 
//             in alphabetical order. Each team listed in the file has won the 
//             World Series at least once.
// WorldSeriesWinners.txt - This file contains a chronological list of the 
//                          World Series’ winning teams from 1903 to 2012. 
//                          (The first line in the file is the name of the team 
//                          that won in 1903, and the last line is the name of 
//                          the team that won in 2012. Note the World Series was
//                          not played in 1904 or 1994.)
//
// Write a program that displays the contents of the Teams.txt file on the 
// screen and prompts the user to enter the name of one of the teams. The 
// program should then display the number of times that team has won the World 
// Series in the time period from 1903 to 2012.
//
// TIP
// Read the contents of the WorldSeriesWinners.txt file into an array or vector.
// When the user enters the name of a team, the program should step through the 
// array or vector counting the number of times the selected team appears. 

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  fstream teams("Teams.txt");
  string team;
  while (getline (teams, team)) {
    cout << team
         << endl;
  }
  teams.close();


  vector<string> wsteams;
  fstream wsteamsFile("WorldSeriesWinners.txt");
  string wsteam;
  while (getline (wsteamsFile, wsteam)) {
    wsteams.push_back(wsteam);
  }

  string userTeam;
  cout << "Please select a team: ";
  getline(cin, userTeam);
  
  userTeam.erase(userTeam.find_last_not_of(" \n\t\r")+1);
  for (auto& team : wsteams) {
    team.erase(team.find_last_not_of(" \n\t\r")+1);
  }
  
  int WScount;
  WScount = count(wsteams.begin(), wsteams.end(), userTeam);

  cout << "The "
       << userTeam
       << " have won "
       << WScount
       << " World Series between 1903 and 2012."
       << endl;
}