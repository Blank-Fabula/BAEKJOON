#include <iostream>
#include <algorithm>
using namespace std;

pair<int, int> arrTime[100000];
int main() { int N;
    cin >> N;
    int tEnd, tStart;
    for (int i = 0; i < N; i++) {
        cin >> tStart >> tEnd;
        arrTime[i] = { tEnd,tStart };
    } sort(arrTime, arrTime + N);
    int cnt = 0;
    int timeEnd = 0;
    for (int i = 0; i < N; i++) {
        if (timeEnd <= arrTime[i].second) {
            cnt++;
            timeEnd = arrTime[i].first;
        }
    }
    cout << cnt;
return 0; }
 