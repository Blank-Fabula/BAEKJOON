#include <iostream>
#include <stack>
typedef long long ll;

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); std::cout.tie(nullptr);
	std::stack<ll> st;
	ll answer = 0;
	int N; std::cin >> N;
	for (int i = 0; i < N; i++) {
		ll H; std::cin >> H;
		while (!st.empty() && st.top() <= H) { st.pop(); }
		answer += st.size();
		st.push(H);
	}
	std::cout << answer;
return 0; }