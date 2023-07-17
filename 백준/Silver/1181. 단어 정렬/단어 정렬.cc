#include <iostream>
#include <string>
#include <set>
using namespace std;

struct Compare_Word {
    bool operator()(const string a, const string b) const {
        if (a.length() == b.length()) { return a < b;
        } else { return a.length() < b.length(); }
    }
};
int main(int argc, char** argv) {
    int N; cin >> N;
    set<string, Compare_Word> set_Word;
    for (int i = 0; i < N; ++i) {
        string word; cin >> word;
        set_Word.insert(word);
    }
    for (auto result : set_Word) {
        cout << result << '\n';
    }
return 0; }
