#include <iostream>
#include <cmath>
using namespace std;

int arrOpinion[31];
int main() {
    int n; cin >> n;
    if (n == 0) { cout << 0;
        return 0;
    }
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        arrOpinion[num]++;
    }
    int sum = 0;
    int cuting = round((double)(n * 0.15));
    for (int i = 1, cnt = 0; i < 30+1; i++) {
        while (arrOpinion[i] != 0) {
            if (cnt >= cuting && cnt + cuting < n) {
                sum += i;
            }
            arrOpinion[i]--;
            cnt++;
        }
    }
    int result = round((double)sum / (n - cuting * 2));
    cout << result;
return 0; }
