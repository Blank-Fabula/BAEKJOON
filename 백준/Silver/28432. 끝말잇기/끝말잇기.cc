#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool ok(int&, vector<string>&);
int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N; cin >> N;
    vector<string> words(N);
    for (int i = 0; i < N; ++i) {
        cin >> words[i];
    }
    int q = find(words.begin(), words.end(), "?") - words.begin();
    int M; cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> words[q];
        if (ok(N, words)) { cout << words[q] << '\n'; }
    }
}

bool ok(int& N, vector<string>& S) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (S[i] == S[j]) { return false; }
        }
    }
    for (int i = 0; i < N - 1; ++i) {
        if (S[i].back() != S[i + 1].front()) { return false; }
    }
return true; }
