#include <iostream>
using namespace std;

void index();
void z(int, int, int);
int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int N; cin >> N;
	index();
	z(1 << N, 0, 0);
return 0; }

int r, c;
void index() { cin >> r >> c; }

int cnt = 0;
void z(int size, int y, int x) {
	if (r == y && c == x) { cout << cnt; return; }
	if ((r >= y && r < y + size) && (c >= x && c < x + size)) {
		size /= 2;
		z(size, y, x);
        z(size, y, x + size);
		z(size, y + size, x);
		z(size, y + size, x + size);
	} else { cnt += size * size; }
}
