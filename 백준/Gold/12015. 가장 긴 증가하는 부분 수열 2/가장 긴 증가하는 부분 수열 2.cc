#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    vector<int> arr_A;
    int A; cin >> A;
    for (int i = 0; i < A; i++) {
        int num; cin >> num;
        if (!arr_A.size() || arr_A.back() < num) { arr_A.push_back(num);
        } else { *lower_bound(arr_A.begin(), arr_A.end(), num) = num; }
    }
    cout << arr_A.size();
return 0; }
