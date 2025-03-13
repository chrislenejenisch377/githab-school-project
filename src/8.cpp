#include <iostream>
using namespace std;
int main() {
  int numStudents = 50;
  int studentScores[numStudents];
  for (int i = 0; i < numStudents; i++) {
    cin >> studentScores[i];
  }
  int totalScore = 0;
  for (int score : studentScores) {
    totalScore += score;
  }
  cout << "Average score: " << totalScore / numStudents << endl;
  return 0;
}
