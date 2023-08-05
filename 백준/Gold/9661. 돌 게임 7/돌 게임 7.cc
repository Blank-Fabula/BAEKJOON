#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long N; cin >> N;
    if (N % 5 == 0 || N % 5 == 2) { cout << "CY";
    } else { cout << "SK"; }
return 0; }
