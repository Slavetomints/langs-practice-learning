// A teacher has five students who have taken four tests. The teacher uses the 
// following grading scale to assign a letter grade to a student, based on the 
// average of his or her four test scores:
//
// 90-100 A
// 80-89 B
// 70-79 C
// 60-69 D
// 00-59 F
//
// Write a program that uses an array of string objects to hold the five student
// names, an array of five characters to hold the five students’ letter grades,
// and five arrays of four doubles to hold each student's set of test scores
//
// The program should allow the user to enter each student’s name and his or her
// four test scores. It should then calculate and display each student’s average
// test score, and a letter grade based on the average.
//
// Input Validation: Do not accept test scores less than 0 or greater than 100.

#include <iostream>

using namespace std;

int main() {
  string studentNames[5];
  char studentGrades[5];
  double studentTestScores[5][4];

  for (int s = 0; s < 5; s++) {
    double averageScores = 0;
    cout << "What is student "
         << (s + 1)
         << "'s name? "
         << endl
         << "> ";
    cin >> studentNames[s];
    for (int g = 0; g < 4; g++) {
      double tempGrade;
      cout << "What is the test "
           << (g + 1)
           << " grade for "
           << studentNames[s]
           << "? "
           << endl
           << "> ";
      cin >> tempGrade;
      while (tempGrade < 0 || tempGrade > 100) {
        cout << "You cant have a grade larger than 100 or smaller than 0"
             << endl;
        cout << "What is the test "
             << (g + 1)
             << "grade for "
             << studentNames[s]
             << "? "
             << endl
             << "> ";
        cin >> tempGrade;
      }
      studentTestScores[s][g] = tempGrade;
      averageScores += studentTestScores[s][g];
    }
    averageScores = averageScores / 4;
    if (averageScores >= 90) {
      studentGrades[s] = 'A';
    } else if (averageScores >= 80) {
      studentGrades[s] = 'B';
    } else if (averageScores >= 70) {
      studentGrades[s] = 'C';
    } else if (averageScores >= 60) {
      studentGrades[s] = 'D';
    } else {
      studentGrades[s] = 'F';
    }
  }
  for (int s = 0; s < 5; s++) {
    cout << studentNames[s]
         << " has a(n) "
         << studentGrades[s]
         << " in the course."
         << endl;
  }
}