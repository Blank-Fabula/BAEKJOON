#include <iostream>
using namespace std;

int main(){ cin.tie(NULL);
ios_base::sync_with_stdio(false);
    int testCase, A, B;
    cin >> testCase;
    while (testCase--) {
        cin >> A >> B;
        cout << A + B << "\n";
    }
return 0; }