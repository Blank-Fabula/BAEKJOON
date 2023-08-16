#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    double gradeSum = 0.0;
    double sum = 0.0;
    for (int i = 0; i < 20; i++) {
        string subject; cin >> subject;
        double score; string grade;
        cin >> score >> grade;
        if (grade == "P") { continue; }
        gradeSum += score;
        double rating;
        if (grade[0] == 'A') { rating = 4.0;
        } else if (grade[0] == 'B') { rating = 3.0;
        } else if (grade[0] == 'C') { rating = 2.0;
        } else if (grade[0] == 'D') { rating = 1.0;
        } else { rating = 0.0; }
        if (grade[1] == '+') { rating += 0.5; }
        sum += score * rating;
    } double result = sum / gradeSum;
    cout << result;
return 0; }
