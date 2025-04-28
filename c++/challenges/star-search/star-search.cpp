#include <iostream>

using namespace std;

void getJudgeData(double &score);
void calcScore(double score1, double score2, double score3, double score4, double score5);
double findHighest(double score1, double score2, double score3, double score4, double score5);
double findLowest(double score1, double score2, double score3, double score4, double score5);


int main() {
  double score1;
  double score2;
  double score3;
  double score4;
  double score5;

  getJudgeData(score1);
  getJudgeData(score2);
  getJudgeData(score3);
  getJudgeData(score4);
  getJudgeData(score5);
  calcScore(score1, score2, score3, score4, score5);
}

void getJudgeData(double &score) {
  cout << "What was the score?" << endl;
  cin >> score;
  if (score > 10 || score < 0) {
    cout << "Scores must be from 0 to 10, please score again" << endl;
    getJudgeData(score);
  }
}


void calcScore(double score1, double score2, double score3, double score4, double score5) {
  double totalOfScores;
  double averageScore;
  // sorry not sorry
  totalOfScores = score1 + score2 + score3 + score4 + score5 - findHighest(score1, score2, score3, score4, score5) - findLowest(score1, score2, score3, score4, score5);
  averageScore = totalOfScores / 3;
  cout << "The performers score is: " << averageScore << endl;
}

double findHighest(double score1, double score2, double score3, double score4, double score5) {
  double highest = 0;
  if (highest < score1 ) {
    highest = score1;
  }
  if (highest < score2 ) {
    highest = score2;
  }
  if (highest < score3 ) {
    highest = score3;
  }
  if (highest < score4 ) {
    highest = score4;
  }
  if (highest < score5 ) {
    highest = score5;
  }
  return highest;
}

double findLowest(double score1, double score2, double score3, double score4, double score5) {
  double lowest = score1;
  if (lowest > score2 ) {
    lowest = score2;
  }
  if (lowest > score3 ) {
    lowest = score3;
  }
  if (lowest > score4 ) {
    lowest = score4;
  }
  if (lowest > score5 ) {
    lowest = score5;
  }
  return lowest;
}
