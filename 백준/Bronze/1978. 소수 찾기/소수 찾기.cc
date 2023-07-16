#include<iostream>
using namespace std;

int main(int avg, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int cnt = 0;
    int N; cin >> N;
    while (N--) {
        int num; cin >> num;
        for (int i = 2; i <= num; i++) {
            if (i == num) cnt++;
            if (num % i == 0) break;
        }
    }
    cout << cnt;
return 0; }
