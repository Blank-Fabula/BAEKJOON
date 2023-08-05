#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N; cin >> N;
    int calc = 0;
    while (N--) {
        int A; cin >> A;
        calc ^= A - 2;
    }
    string start; cin >> start;
    if (calc != 0) { cout << start; }
    else {
        if (start == "Blackking") { cout << "Whiteking"; }
        else { cout << "Blackking"; }
    }
return 0; }
