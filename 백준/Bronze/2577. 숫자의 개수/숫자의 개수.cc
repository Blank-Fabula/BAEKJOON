#include <iostream>
using namespace std;
#define REPEAT 3
int main() {
    int num, calc = 1;
    int arrCount[10] = { 0 };
    for (int i = 0; i < REPEAT; i++) {
        cin >> num;
        calc *= num;
    }
    for (; calc > 0; calc /= 10) {
        arrCount[calc % 10]++;
    }
    for (int i = 0; i < 10; i++) {
        cout << arrCount[i] << endl;
    }
return 0; }
