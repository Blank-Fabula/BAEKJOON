#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
	int numCnt[8001] = { 0 };
	double sum = 0;
	int N; cin >> N;
	vector<int> nums(N);
	for (int i = 0; i < N; i++) {
		cin >> nums[i];
		numCnt[nums[i] + 4000]++;
		sum += nums[i];
	} sort(nums.begin(), nums.end());
	set<int> maxNums;
	for (int maxCnt = 0, i = 0; i < N; i++) {
		if (numCnt[nums[i] + 4000] > maxCnt) { maxNums.clear(); }
		if (numCnt[nums[i] + 4000] >= maxCnt) {
			maxNums.insert(nums[i]);
			maxCnt = numCnt[nums[i] + 4000];
		}
	}
	cout << (int)round(sum / N) << '\n';
	cout << nums[N / 2] << '\n';
	if (maxNums.size() > 1) { maxNums.erase(*maxNums.begin()); }
	cout << *maxNums.begin() << '\n';
	cout << nums.back() - nums.front();
return 0; }