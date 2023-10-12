#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

typedef long long ll;

int main(int argc, char** argv) {
    std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
    int N, B, A; std::cin >> N >> B >> A;
    std::vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
    }
    std::sort(arr.begin(), arr.end());
    std::pair<ll, int> sum = { 0, 0 };
    std::stack<int> st;
    for (int i = 0; i < N; i++) {
        if (sum.first + arr[i] <= B) {
            sum.first += arr[i];
            sum.second++;
            st.push(arr[i]);
        }
        else {
            ll current = sum.first + arr[i];
            st.push(arr[i]);
            while (current > B && A > 0 && !st.empty()) {
                current -= st.top() / 2;
                st.pop();
                A--;
            }
            if (current <= B) {
                sum.first = current;
                sum.second++;
            }
            if (A == 0) { break; }
        }
    }
    std::cout << sum.second;
return 0; }