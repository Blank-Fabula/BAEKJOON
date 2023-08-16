#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    for (int i = 0; i < 1499; i++) { cout << "swimming" << ' '; }
    cout << "swimming" << '\n';
    cout << flush;
    for (int i = 0; i < 1500; i++) {
        string input; cin >> input;
        if (input == "bowling") { cout << "soccer ";
        } else { cout << "bowling "; }
    }
return 0; }
