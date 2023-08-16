#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N; cin >> N;
    for (int i = 0; i < N - 1; i++) { cout << "swimming" << ' '; }
    cout << "swimming" << '\n';
    cout << flush;
    for (int i = 0; i < N; i++) {
        string subject; cin >> subject;
        if (subject == "bowling") { cout << "soccer ";
        } else { cout << "bowling "; }
    }
return 0; }
