#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int arr_Num[1000] = { 0 };
    int n; cin >> n;
    for(int i=0; i<n; i++) {
        cin >> arr_Num[i];
    }
    sort(arr_Num, arr_Num + n);
    for (int i = 0; i < n; i++) {
        cout << arr_Num[i] << '\n';
    }
return 0; }
