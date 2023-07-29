#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    bool arr_Num[2001] = { false };
    int n; cin >> n;
    while (n--) {
        int num; cin >> num;
        arr_Num[num + 1000] = true;
    }
    for (int i = 0; i < 2001; i++) {
        if (arr_Num[i] == true) {
            cout << i - 1000 << '\n';
        }
    }
return 0; }
