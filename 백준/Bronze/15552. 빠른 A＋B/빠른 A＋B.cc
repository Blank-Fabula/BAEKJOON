#include <iostream>
using namespace std;

int main(int argc, char** argv){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int testCase, A, B;
    cin >> testCase;
    while (testCase--) {
        cin >> A >> B;
        cout << A + B << "\n";
    }
return 0; }
