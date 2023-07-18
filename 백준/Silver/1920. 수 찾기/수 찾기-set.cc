#include <iostream>
#include <set>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    set<int> s_Num;
    int N; cin >> N;
    for (int i = 0; i < N; ++i) {
        int num; cin >> num;
        s_Num.insert(num);
    }
    int M; cin >> M;
    while (M--) {
        int num; cin >> num;
        cout << s_Num.count(num) << '\n';
    }
return 0; }
