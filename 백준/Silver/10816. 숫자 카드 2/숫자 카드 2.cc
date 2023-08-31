#include <iostream>
#include <unordered_map>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    unordered_map<int, int> m_Cards;
    int N; cin >> N;
    for (int i = 0, NNum; i < N && cin >> NNum; i++) { m_Cards[NNum]++; }
    int M; cin >> M;
    for (int i = 0, MNum; i < M && cin >> MNum; i++) { cout << m_Cards[MNum] << " "; }
return 0; }