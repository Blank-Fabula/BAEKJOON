#include <iostream>
#include <map>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    map<int, int> m_Card;
    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        int nNum; cin >> nNum;
        m_Card[nNum]++;
    }
    int m; cin >> m;
    for (int i = 0; i < m; ++i) {
        int mNum; cin >> mNum;
        cout << m_Card[mNum] << ' ';
    }
return 0; }
