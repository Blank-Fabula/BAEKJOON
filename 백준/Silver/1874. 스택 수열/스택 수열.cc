#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
ios::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
stack<int> s; vector<char> result;
int cnt = 0;
int N; cin >> N;
while(N--) { int integer; cin >> integer;
while (cnt < integer) { s.push(++cnt); result.push_back('+'); }
if (s.top() != integer) { cout << "NO"; return 0; }
s.pop(); result.push_back('-');
} int size = result.size();
for (int i = 0; i < size; i++) { cout << result[i] << '\n'; }
return 0; }
