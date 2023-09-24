#include <iostream>
#include <string>
#include <deque>

int size;
std::string A, B;
std::deque<int> answer;
void calc(int Aidx, int Bnum) {
	if (answer[Aidx] == 1) {
		if (Bnum == 1) {
			answer[Aidx] = 0;
			if (Aidx - 1 < 0) { answer.push_front(0); size++; Aidx++; }
			calc(Aidx - 1, Bnum);
		}
	} else { answer[Aidx] = Bnum; }
return; }
int main(int argc, char** argv) {
	std::cin >> A >> B;
	int sizeA = A.size(), sizeB = B.size();
	size = std::max(sizeA, sizeB);
	answer.resize(size, 0);
	for (int i = sizeA - 1; i >= 0; i--) { answer[i + (size - sizeA)] = A[i] - '0'; }
	for (int i = sizeB - 1; i >= 0; i--) { calc(i + (size - sizeB), B[i] - '0'); }
	int idx = 0;
	for (int i = 0; i < size; i++) {
		if (answer[i] == 1) { break; }
		else { idx++; }
	}
	for (int i = idx; i < size; i++) { std::cout << answer[i]; }
	if (idx == size) { std::cout << 0; }
return 0; }