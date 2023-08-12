#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	priority_queue<int, vector<int>, less<int>> heap_right;
	priority_queue<int, vector<int>, greater<int>> heap_left;
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int integer; cin >> integer;
		heap_right.push(integer);
		while (heap_right.size() - heap_left.size() > 1) {
			heap_left.push(heap_right.top()); heap_right.pop();
		}
		if (!heap_left.empty() && heap_left.top() < heap_right.top()) {
			heap_right.push(heap_left.top()); heap_left.pop();
			heap_left.push(heap_right.top()); heap_right.pop();
		}
		cout << heap_right.top() << '\n';
	}
return 0; }
