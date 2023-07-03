#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string countS(int);
void hanoi(int, int, int, int);
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int num;
    cin >> num;
    string result = countS(num);
    if (result[0] == '0') result.erase(result.begin());
    cout << result << "\n";
    if (num <= 20) hanoi(num, 1, 2, 3);
return 0; }

string countS(int num) { long long a = 0, b = 0;
    for (int i = 0; i < num; i++) {
        b *= 2;
        a = a * 2 + 1;
        b += a / 1000000000000000000;
        a %= 1000000000000000000;
    }
    ostringstream oss;
    oss << b << a;
    string result = oss.str();
return result; }

void hanoi(int num, int A, int B, int C) {
    if (num == 1) cout << A << " " << C << "\n";
    else {
        hanoi(num - 1, A, C, B);
        cout << A << " " << C << "\n";
        hanoi(num - 1, B, A, C);
    }
}
