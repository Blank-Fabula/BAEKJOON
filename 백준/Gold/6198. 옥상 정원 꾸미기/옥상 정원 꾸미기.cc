#include <iostream>
#include <stack>

typedef long long ll;

int main(int argc, char* argv[]) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); std::cout.tie(nullptr);

	ll answer = 0, H;
    
	int N; std::cin >> N;
	for (std::stack<ll> st; N--; st.push(H)) {
		std::cin >> H;
		while (!st.empty() && st.top() <= H) { st.pop(); }
		answer += st.size();
	}
    
    std::cout << answer;
    
return 0; }