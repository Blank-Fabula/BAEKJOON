#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int numsCnt[8001] = { 0 };
	double sum = 0;
	int N; cin >> N;
	vector<int> nums(N);
	for (int i = 0; i < N; i++) {
		cin >> nums[i];
		numsCnt[nums[i] + 4000]++;
		sum += nums[i];
	} sort(nums.begin(), nums.end());
	vector<int> frequent;
    for (int maxCnt = 0, i = nums.front(); i <= nums.back(); i++) {
        if (numsCnt[i + 4000] > maxCnt) { frequent.clear(); maxCnt = numsCnt[i + 4000]; }
		if (numsCnt[i + 4000] >= maxCnt) { frequent.push_back(i); }
	} if (frequent.size() > 1) { sort(frequent.begin(), frequent.end()); frequent.erase(frequent.begin()); }
	cout << (int)round(sum / N) << '\n';
	cout << nums[N / 2] << '\n';
	cout << *frequent.begin() << '\n';
	cout << nums.back() - nums.front();
return 0; }