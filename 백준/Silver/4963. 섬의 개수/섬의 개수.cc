#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> map;

void cntIsland(int&, int&);
int main(int argc, char** argv) {
	for (int W, H; cin >> W >> H; ) {
		if (W == 0 && H == 0) { break; }
		map.clear(); map.resize(H, vector<int>(W, 0));
		for (int i = 0; i < H; i++) {
			for (int j = 0; j < W; j++) { cin >> map[i][j]; }
		} int cnt = 0;
		for (int i = 0; i < H; i++) {
			for (int j = 0; j < W; j++) {
				if (map[i][j]) { cnt++; cntIsland(i, j); }
			}
		} cout << cnt << '\n';
	}
return 0; }

int HD[3] = { -1, 0, 1 }, WD[3] = { -1, 0, 1 };
void cntIsland(int& H, int& W) {
	map[H][W] = false;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int nextH = H + HD[i], nextW = W + WD[j];
			if (nextH < 0 || nextW < 0) { continue; }
			if (nextH >= map.size() || nextW >= map[0].size()) { continue; }
			if (map[nextH][nextW]) { cntIsland(nextH, nextW); }
		}
	}
return; }