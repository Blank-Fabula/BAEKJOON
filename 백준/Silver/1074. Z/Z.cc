#include <iostream>

int r, c, cnt = 0;
void z(int size, int y, int x) {
	if (r == y && c == x) { std::cout << cnt;
    } else if ((r >= y && r < y + size) && (c >= x && c < x + size)) {
		size /= 2;
		z(size, y, x);
        z(size, y, x + size);
		z(size, y + size, x);
		z(size, y + size, x + size);
	} else { cnt += size * size; }
return; }
int main(int argc, char** argv) {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr); std::cout.tie(nullptr);
	int N; std::cin >> N;
	std::cin >> r >> c;
	z(1 << N, 0, 0);
return 0; }