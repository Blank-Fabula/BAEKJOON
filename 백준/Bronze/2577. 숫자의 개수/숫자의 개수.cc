#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int arrCount[10] = { 0 };
    int A, B, C, calc;
    cin >> A >> B >> C;
    calc = A * B * C;
    for (; calc > 0; calc /= 10) {
        arrCount[calc % 10]++;
    }
    for (int i = 0; i < 10; i++) {
        cout << arrCount[i] << endl;
    }
return 0; }
