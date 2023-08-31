#include <iostream>
using namespace std;

int board[3][3] = { 0 };
bool win(int& who);
int main(int argc, char** argv) {
	int first; cin >> first;
	int second = first ^ 3;
	int winner = 0;
	for (int i = 0; i < 9; i++) {
		int P1Y, P1X; cin >> P1Y >> P1X;
		board[P1Y - 1][P1X - 1] = first;
		if (win(first)) { winner = first; break; }
		int P2Y, P2X; cin >> P2Y >> P2X;
		board[P2Y - 1][P2X - 1] = second;
		if (win(second)) { winner = second; break; }
	} cout << winner;
return 0; }

bool win(int& who) {
	if (board[0][0] == who) {
		if (board[0][1] == who && board[0][2] == who) { return true; }
		if (board[1][0] == who && board[2][0] == who) { cout << "here"; return true; }
		if (board[1][1] == who && board[2][2] == who) { return true; }
	}
	if (board[1][1] == who) {
		if (board[0][1] == who && board[2][1] == who) { return true; }
		if (board[1][0] == who && board[1][2] == who) { return true; }
		if (board[2][0] == who && board[0][2] == who) { return true; }
	}
	if (board[2][2] == who) {
		if (board[2][0] == who && board[2][1] == who) { return true; }
		if (board[1][2] == who && board[0][2] == who) { return true; }
	}
return false; }