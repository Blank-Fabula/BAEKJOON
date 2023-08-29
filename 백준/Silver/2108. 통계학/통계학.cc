#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
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
		if (numCnt[nums[i] + 4000] > maxCnt) { maxNums.clear(); maxCnt = numCnt[nums[i] + 4000]; }
		if (numCnt[nums[i] + 4000] >= maxCnt) { maxNums.insert(nums[i]); }
	} if (maxNums.size() > 1) { maxNums.erase(*maxNums.begin()); }
	cout << (int)round(sum / N) << '\n';
	cout << nums[N / 2] << '\n';
	cout << *maxNums.begin() << '\n';
	cout << nums.back() - nums.front();
return 0; }
