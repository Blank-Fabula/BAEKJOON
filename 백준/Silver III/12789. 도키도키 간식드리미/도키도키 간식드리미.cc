#include <iostream>
#include <stack>

int main(int argc, char* argv[]) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr); std::cout.tie(nullptr);

	std::stack<int> wating;

	int student_size; std::cin >> student_size;
	for (int cnt = 1; student_size--; ) {
		int student_number; std::cin >> student_number;
		if (student_number != cnt) {
			if (wating.empty() || wating.top() > student_number) { wating.push(student_number); }
			else { student_size++; break; }
		}
		else { for (cnt++; !wating.empty() && wating.top() == cnt; cnt++) { wating.pop(); } }
	} std::cout << (student_size + 1 ? "Sad" : "Nice");

return 0; }