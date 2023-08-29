#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

struct answer{
	double sum = 0;
	int maxCnt = 0;
	set<int> maxNums;
};
int main(int argc, char** argv) {
	answer result;
	int numCnt[8001] = { 0 };
	int N; cin >> N;
	vector<int> nums(N);
	for (int i = 0; i < N; i++) {
		cin >> nums[i];
		result.sum += nums[i];
		numCnt[nums[i] + 4000]++;
	} sort(nums.begin(), nums.end());
	for (int i = 0; i < N; i++) {
		if (numCnt[nums[i] + 4000] >= result.maxCnt) {
			if (numCnt[nums[i] + 4000] > result.maxCnt) { result.maxNums.clear(); }
			result.maxNums.insert(nums[i]);
			result.maxCnt = numCnt[nums[i] + 4000];
		}
	}
	cout << (int)round(result.sum / N) << '\n';
	cout << nums[N / 2] << '\n';
	if (result.maxNums.size() > 1) { result.maxNums.erase(*result.maxNums.begin()); }
	cout << *result.maxNums.begin() << '\n';
	cout << nums.back() - nums.front();
return 0; }