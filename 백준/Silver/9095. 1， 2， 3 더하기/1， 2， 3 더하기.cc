#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int arr[11];
    arr[0] = 1, arr[1] = 1, arr[2] = 2;
    for (int i = 3; i < 11; i++) {
        arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
    }
    int testCase; cin >> testCase;
    while (testCase--) {
        int N; cin >> N;
        cout << arr[N] << "\n";
    }
return 0; }
